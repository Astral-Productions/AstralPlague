// Fill out your copyright notice in the Description page of Project Settings.


#include "AstralStatsComponent.h"

#include "AstralPlague/AstralGameplayTags.h"
#include "AstralPlague/AstralLogChannels.h"
#include "AstralPlague/AbilitySystem/AstralAbilitySystemComponent.h"
#include "AstralPlague/System/AstralAssetManager.h"

// Sets default values for this component's properties
UAstralStatsComponent::UAstralStatsComponent(const FObjectInitializer& ObjectInitializer)
{
	PrimaryComponentTick.bStartWithTickEnabled = false;
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicatedByDefault(true);

	AbilitySystemComponent = nullptr;
	StatSet = nullptr;
	DeathState = EAstralDeathState::NotDead;
}


void UAstralStatsComponent::InitializeWithAbilitySystem(UAstralAbilitySystemComponent* InASC)
{
	AActor* Owner = GetOwner();
	check(Owner);

	if (AbilitySystemComponent)
	{
		UE_LOG(LogAstral, Error, TEXT("AstralStatsComponent: Health component for owner [%s] has already been initialized with an ability system."), *GetNameSafe(Owner));
		return;
	}

	AbilitySystemComponent = InASC;
	if (!AbilitySystemComponent)
	{
		UE_LOG(LogAstral, Error, TEXT("AstralStatsComponent: Cannot initialize health component for owner [%s] with NULL ability system."), *GetNameSafe(Owner));
		return;
	}

	StatSet = AbilitySystemComponent->GetSet<UCharacterAttributeSet>();
	if (!StatSet)
	{
		UE_LOG(LogAstral, Error, TEXT("AstralStatsComponent: Cannot initialize health component for owner [%s] with NULL health set on the ability system."), *GetNameSafe(Owner));
		return;
	}

	// Register to listen for attribute changes.
	StatSet->OnHealthChanged.AddUObject(this, &ThisClass::HandleHealthChanged);
	StatSet->OnMaxHealthChanged.AddUObject(this, &ThisClass::HandleMaxHealthChanged);
	StatSet->OnOutOfHealth.AddUObject(this, &ThisClass::HandleOutOfHealth);

	// TEMP: Reset attributes to default values.  Eventually this will be driven by a spread sheet.
	AbilitySystemComponent->SetNumericAttributeBase(UCharacterAttributeSet::GetHealthAttribute(), StatSet->GetMaxHealth());

	ClearGameplayTags();

	OnHealthChanged.Broadcast(this, StatSet->GetHealth(), StatSet->GetHealth(), nullptr);
	OnMaxHealthChanged.Broadcast(this, StatSet->GetHealth(), StatSet->GetHealth(), nullptr);
}

void UAstralStatsComponent::UninitializeFromAbilitySystem()
{
	ClearGameplayTags();

	if (StatSet)
	{
		StatSet->OnHealthChanged.RemoveAll(this);
		StatSet->OnMaxHealthChanged.RemoveAll(this);
		StatSet->OnOutOfHealth.RemoveAll(this);
	}

	StatSet = nullptr;
	AbilitySystemComponent = nullptr;
}


void UAstralStatsComponent::ClearGameplayTags()
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->SetLooseGameplayTagCount(AstralGameplayTags::Status_Death_Dying, 0);
		AbilitySystemComponent->SetLooseGameplayTagCount(AstralGameplayTags::Status_Death_Dead, 0);
	}
}

float UAstralStatsComponent::GetHealth() const
{
	return (StatSet ? StatSet->GetHealth() : 0.0f);
}

float UAstralStatsComponent::GetMaxHealth() const
{
	return (StatSet ? StatSet->GetMaxHealth() : 0.0f);
}

float UAstralStatsComponent::GetHealthNormalized() const
{
	if (StatSet)
	{
		const float Health = StatSet->GetHealth();
		const float MaxHealth = StatSet->GetMaxHealth();

		return ((MaxHealth > 0.0f) ? (Health / MaxHealth) : 0.0f);
	}

	return 0.0f;
}

void UAstralStatsComponent::HandleHealthChanged(AActor* DamageInstigator, AActor* DamageCauser, const FGameplayEffectSpec* DamageEffectSpec, float DamageMagnitude, float OldValue, float NewValue)
{
	OnHealthChanged.Broadcast(this, OldValue, NewValue, DamageInstigator);
}

void UAstralStatsComponent::HandleMaxHealthChanged(AActor* DamageInstigator, AActor* DamageCauser, const FGameplayEffectSpec* DamageEffectSpec, float DamageMagnitude, float OldValue, float NewValue)
{
	OnMaxHealthChanged.Broadcast(this, OldValue, NewValue, DamageInstigator);
}

void UAstralStatsComponent::HandleOutOfHealth(AActor* DamageInstigator, AActor* DamageCauser, const FGameplayEffectSpec* DamageEffectSpec, float DamageMagnitude, float OldValue, float NewValue)
{
#if WITH_SERVER_CODE
	if (AbilitySystemComponent && DamageEffectSpec)
	{
		// Send the "GameplayEvent.Death" gameplay event through the owner's ability system.  This can be used to trigger a death gameplay ability.
		{
			FGameplayEventData Payload;
			Payload.EventTag = AstralGameplayTags::GameplayEvent_Death;
			Payload.Instigator = DamageInstigator;
			Payload.Target = AbilitySystemComponent->GetAvatarActor();
			Payload.OptionalObject = DamageEffectSpec->Def;
			Payload.ContextHandle = DamageEffectSpec->GetEffectContext();
			Payload.InstigatorTags = *DamageEffectSpec->CapturedSourceTags.GetAggregatedTags();
			Payload.TargetTags = *DamageEffectSpec->CapturedTargetTags.GetAggregatedTags();
			Payload.EventMagnitude = DamageMagnitude;

			FScopedPredictionWindow NewScopedWindow(AbilitySystemComponent, true);
			AbilitySystemComponent->HandleGameplayEvent(Payload.EventTag, &Payload);
		}

		/*// Send a standardized verb message that other systems can observe
		{
			FAstralVerbMessage Message;
			Message.Verb = TAG_Astral_Elimination_Message;
			Message.Instigator = DamageInstigator;
			Message.InstigatorTags = *DamageEffectSpec->CapturedSourceTags.GetAggregatedTags();
			Message.Target = UAstralVerbMessageHelpers::GetPlayerStateFromObject(AbilitySystemComponent->GetAvatarActor());
			Message.TargetTags = *DamageEffectSpec->CapturedTargetTags.GetAggregatedTags();
			//@TODO: Fill out context tags, and any non-ability-system source/instigator tags
			//@TODO: Determine if it's an opposing team kill, self-own, team kill, etc...

			UGameplayMessageSubsystem& MessageSystem = UGameplayMessageSubsystem::Get(GetWorld());
			MessageSystem.BroadcastMessage(Message.Verb, Message);
		}

		//@TODO: assist messages (could compute from damage dealt elsewhere)?*/
	}

#endif // #if WITH_SERVER_CODE
}

void UAstralStatsComponent::OnRep_DeathState(EAstralDeathState OldDeathState)
{
	const EAstralDeathState NewDeathState = DeathState;

	// Revert the death state for now since we rely on StartDeath and FinishDeath to change it.
	DeathState = OldDeathState;

	if (OldDeathState > NewDeathState)
	{
		// The server is trying to set us back but we've already predicted past the server state.
		UE_LOG(LogAstral, Warning, TEXT("AstralStatsComponent: Predicted past server death state [%d] -> [%d] for owner [%s]."), (uint8)OldDeathState, (uint8)NewDeathState, *GetNameSafe(GetOwner()));
		return;
	}

	if (OldDeathState == EAstralDeathState::NotDead)
	{
		if (NewDeathState == EAstralDeathState::DeathStarted)
		{
			StartDeath();
		}
		else if (NewDeathState == EAstralDeathState::DeathFinished)
		{
			StartDeath();
			FinishDeath();
		}
		else
		{
			UE_LOG(LogAstral, Error, TEXT("AstralStatsComponent: Invalid death transition [%d] -> [%d] for owner [%s]."), (uint8)OldDeathState, (uint8)NewDeathState, *GetNameSafe(GetOwner()));
		}
	}
	else if (OldDeathState == EAstralDeathState::DeathStarted)
	{
		if (NewDeathState == EAstralDeathState::DeathFinished)
		{
			FinishDeath();
		}
		else
		{
			UE_LOG(LogAstral, Error, TEXT("AstralStatsComponent: Invalid death transition [%d] -> [%d] for owner [%s]."), (uint8)OldDeathState, (uint8)NewDeathState, *GetNameSafe(GetOwner()));
		}
	}

	ensureMsgf((DeathState == NewDeathState), TEXT("AstralStatsComponent: Death transition failed [%d] -> [%d] for owner [%s]."), (uint8)OldDeathState, (uint8)NewDeathState, *GetNameSafe(GetOwner()));
}

void UAstralStatsComponent::StartDeath()
{
	if (DeathState != EAstralDeathState::NotDead)
	{
		return;
	}

	DeathState = EAstralDeathState::DeathStarted;

	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->SetLooseGameplayTagCount(AstralGameplayTags::Status_Death_Dying, 1);
	}

	AActor* Owner = GetOwner();
	check(Owner);

	OnDeathStarted.Broadcast(Owner);

	Owner->ForceNetUpdate();
}

void UAstralStatsComponent::FinishDeath()
{
	if (DeathState != EAstralDeathState::DeathStarted)
	{
		return;
	}

	DeathState = EAstralDeathState::DeathFinished;

	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->SetLooseGameplayTagCount(AstralGameplayTags::Status_Death_Dead, 1);
	}

	AActor* Owner = GetOwner();
	check(Owner);

	OnDeathFinished.Broadcast(Owner);

	Owner->ForceNetUpdate();
}

void UAstralStatsComponent::DamageSelfDestruct(bool bFellOutOfWorld)
{
	if ((DeathState == EAstralDeathState::NotDead) && AbilitySystemComponent)
	{
		const TSubclassOf<UGameplayEffect> DamageGE = UAstralAssetManager::GetSubclass(UAstralGameData::Get().DamageGameplayEffect_SetByCaller);
		if (!DamageGE)
		{
			UE_LOG(LogAstral, Error, TEXT("AstralStatsComponent: DamageSelfDestruct failed for owner [%s]. Unable to find gameplay effect [%s]."), *GetNameSafe(GetOwner()), *UAstralGameData::Get().DamageGameplayEffect_SetByCaller.GetAssetName());
			return;
		}

		FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(DamageGE, 1.0f, AbilitySystemComponent->MakeEffectContext());
		FGameplayEffectSpec* Spec = SpecHandle.Data.Get();

		if (!Spec)
		{
			UE_LOG(LogAstral, Error, TEXT("AstralStatsComponent: DamageSelfDestruct failed for owner [%s]. Unable to make outgoing spec for [%s]."), *GetNameSafe(GetOwner()), *GetNameSafe(DamageGE));
			return;
		}

		/*@todo: investigate fell our of world functionality. 
		 *Spec->AddDynamicAssetTag(TAG_Gameplay_DamageSelfDestruct);

		if (bFellOutOfWorld)
		{
			Spec->AddDynamicAssetTag(TAG_Gameplay_FellOutOfWorld);
		}
		*/

		const float DamageAmount = GetMaxHealth();

		Spec->SetSetByCallerMagnitude(AstralGameplayTags::SetByCaller_Damage, DamageAmount);
		AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*Spec);
	}
}



