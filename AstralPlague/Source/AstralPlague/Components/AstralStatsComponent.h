// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AstralPlague/AbilitySystem/Attributes/DefaultAttributeSet.h"
#include "Components/ActorComponent.h"
#include "AstralStatsComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAstralHealth_DeathEvent, AActor*, OwningActor);

/**
 * EAstralDeathState
 *
 *	Defines current state of death.
 */
UENUM(BlueprintType)
enum class EAstralDeathState : uint8
{
	NotDead = 0,
	DeathStarted,
	DeathFinished
};

/**
 * UAstralHealthComponent
 *
 *	An actor component used to handle anything related to stats/health.
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ASTRALPLAGUE_API UAstralStatsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties	
	UAstralStatsComponent(const FObjectInitializer& ObjectInitializer);

	// Returns the health component if one exists on the specified actor.
	UFUNCTION(BlueprintPure, Category = "Astral|Health")
	static UAstralStatsComponent* FindHealthComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UAstralStatsComponent>() : nullptr); }

	// Initialize the component using an ability system component.
	UFUNCTION(BlueprintCallable, Category = "Astral|Health")
	void InitializeWithAbilitySystem(UAstralAbilitySystemComponent* InASC);

	// Uninitialize the component, clearing any references to the ability system.
	UFUNCTION(BlueprintCallable, Category = "Astral|Health")
	void UninitializeFromAbilitySystem();

	// Returns the current health value.
	UFUNCTION(BlueprintCallable, Category = "Astral|Health")
	float GetHealth() const;

	// Returns the current maximum health value.
	UFUNCTION(BlueprintCallable, Category = "Astral|Health")
	float GetMaxHealth() const;

	// Returns the current health in the range [0.0, 1.0].
	UFUNCTION(BlueprintCallable, Category = "Astral|Health")
	float GetHealthNormalized() const;

	UFUNCTION(BlueprintCallable, Category = "Astral|Health")
	EAstralDeathState GetDeathState() const { return DeathState; }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Astral|Health", Meta = (ExpandBoolAsExecs = "ReturnValue"))
	bool IsDeadOrDying() const { return (DeathState > EAstralDeathState::NotDead); }

	// Begins the death sequence for the owner.
	virtual void StartDeath();

	// Ends the death sequence for the owner.
	virtual void FinishDeath();

	// Applies enough damage to kill the owner.
	virtual void DamageSelfDestruct(bool bFellOutOfWorld = false);
	
public:
	// Delegate fired when the health value has changed. This is called on the client but the instigator may not be valid
	UPROPERTY(BlueprintAssignable)
	FAstralHealth_AttributeChanged OnHealthChanged;

	// Delegate fired when the max health value has changed. This is called on the client but the instigator may not be valid
	UPROPERTY(BlueprintAssignable)
	FAstralHealth_AttributeChanged OnMaxHealthChanged;

	// Delegate fired when the death sequence has started.
	UPROPERTY(BlueprintAssignable)
	FAstralHealth_DeathEvent OnDeathStarted;

	// Delegate fired when the death sequence has finished.
	UPROPERTY(BlueprintAssignable)
	FAstralHealth_DeathEvent OnDeathFinished;
	

	  
protected:

	virtual void OnUnregister() override;

	void ClearGameplayTags();

	virtual void HandleHealthChanged(AActor* DamageInstigator, AActor* DamageCauser, const FGameplayEffectSpec* DamageEffectSpec, float DamageMagnitude, float OldValue, float NewValue);
	virtual void HandleMaxHealthChanged(AActor* DamageInstigator, AActor* DamageCauser, const FGameplayEffectSpec* DamageEffectSpec, float DamageMagnitude, float OldValue, float NewValue);
	virtual void HandleOutOfHealth(AActor* DamageInstigator, AActor* DamageCauser, const FGameplayEffectSpec* DamageEffectSpec, float DamageMagnitude, float OldValue, float NewValue);

	UFUNCTION()
	virtual void OnRep_DeathState(EAstralDeathState OldDeathState);

protected:

	// Ability system used by this component.
	UPROPERTY()
	TObjectPtr<UAstralAbilitySystemComponent> AbilitySystemComponent;

	// Health set used by this component.
	UPROPERTY()
	TObjectPtr<const UDefaultAttributeSet> StatSet;

	// Replicated state used to handle dying.
	UPROPERTY(ReplicatedUsing = OnRep_DeathState)
	EAstralDeathState DeathState;
		
};
