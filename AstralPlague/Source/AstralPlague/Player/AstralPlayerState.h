// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "AstralPlayerController.h"
#include "GameplayTagContainer.h"
#include "ModularPlayerState.h"
#include "AstralPlague/GameModes/AstralExperienceDefinition.h"
#include "AstralPlayerState.generated.h"

class AController;
class APLayerState;
class UAbilitySystemComponent;
class UAstralAbilitySystemComponent;
class UObject;

UCLASS(Config = Game)
class ASTRALPLAGUE_API AAstralPlayerState : public AModularPlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	
	AAstralPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	class UCharacterAttributeSet* GetCharacterAttributeSet() const;
	class UProgressionAttributeSet* GetProgressionAttributeSet() const;
	
	UFUNCTION(BlueprintCallable, Category = "Astral|PlayerState")
	AAstralPlayerController* GetAstralPlayerController() const;
	
	//~IAbilitySystemInterface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	//~End of IAbilitySystemInterface

	// Gets the ability system component used for game wide things
	UFUNCTION(BlueprintCallable, Category = "Astral|PlayerState")
	UAstralAbilitySystemComponent* GetAstralAbilitySystemComponent() const { return AbilitySystemComponent; }

	UFUNCTION(BlueprintCallable, Category = "GASDocumentation|GDPlayerState")
	bool IsAlive() const;

	UFUNCTION(BlueprintCallable, Category = "GASDocumenation|GDPlayerState|UI")
	void ShowAbilityConfirmCancelText(bool ShowText);

	static const FName NAME_AstralAbilityReady;

	/**
	* Getters for attributes from GDAttributeSetBase. Returns Current Value unless otherwise specified.
	*/

	UFUNCTION(BlueprintCallable, Category = "GASDocumentation|GDPlayerState|Attributes")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "GASDocumentation|GDPlayerState|Attributes")
	float GetMaxHealth() const;

	UFUNCTION(BlueprintCallable, Category = "GASDocumentation|GDPlayerState|Attributes")
	float GetHealthRegenRate() const;

	UFUNCTION(BlueprintCallable, Category = "GASDocumentation|GDPlayerState|Attributes")
	float GetSoulEnergy() const;

	UFUNCTION(BlueprintCallable, Category = "GASDocumentation|GDPlayerState|Attributes")
	float GetMaxSoulEnergy() const;

	UFUNCTION(BlueprintCallable, Category = "GASDocumentation|GDPlayerState|Attributes")
	float GetStamina() const;

	UFUNCTION(BlueprintCallable, Category = "GASDocumentation|GDPlayerState|Attributes")
	float GetMaxStamina() const;

	UFUNCTION(BlueprintCallable, Category = "GASDocumentation|GDPlayerState|Attributes")
	float GetStaminaRegenRate() const;

	UFUNCTION(BlueprintCallable, Category = "GASDocumentation|GDPlayerState|Attributes")
	float GetMoveSpeed() const;

	UFUNCTION(BlueprintCallable, Category = "GASDocumentation|GDPlayerState|Attributes")
	int32 GetCharacterLevel() const;

	UFUNCTION(BlueprintCallable, Category = "GASDocumentation|GDPlayerState|Attributes")
	int32 GetCharacterXP() const;

	
	UFUNCTION(BlueprintCallable, Category = "GASDocumentation|GDPlayerState|Attributes")
	int32 GetGems() const;

	template <class T>
	const T* GetPawnData() const {return Cast<T>(PawnData);}

	void SetPawnData(const UAstralPawnData* InPawnData);
	
protected:
	UPROPERTY(VisibleAnywhere, Category="Astral|PlayerState")
	TObjectPtr<const UAstralPawnData> PawnData;
	
private:
	// The ability system component subobject for game-wide things (primarily gameplay cues)
	UPROPERTY(VisibleAnywhere, Category = "Astral|PlayerState")
	TObjectPtr<UAstralAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	UCharacterAttributeSet* CharacterAttributeSet;
	UPROPERTY()
	UProgressionAttributeSet* ProgressionAttributeSet;

	FGameplayTag DeadTag;

	FDelegateHandle HealthChangedDelegateHandle;
	FDelegateHandle MaxHealthChangedDelegateHandle;
	FDelegateHandle HealthRegenRateChangedDelegateHandle;
	FDelegateHandle ManaChangedDelegateHandle;
	FDelegateHandle MaxManaChangedDelegateHandle;
	FDelegateHandle ManaRegenRateChangedDelegateHandle;
	FDelegateHandle StaminaChangedDelegateHandle;
	FDelegateHandle MaxStaminaChangedDelegateHandle;
	FDelegateHandle StaminaRegenRateChangedDelegateHandle;
	FDelegateHandle XPChangedDelegateHandle;
	FDelegateHandle GemsChangedDelegateHandle;
	FDelegateHandle CharacterLevelChangedDelegateHandle;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Attribute changed callbacks
	virtual void HealthChanged(const FOnAttributeChangeData& Data);
	virtual void MaxHealthChanged(const FOnAttributeChangeData& Data);
	virtual void HealthRegenRateChanged(const FOnAttributeChangeData& Data);
	virtual void SoulEnergyChanged(const FOnAttributeChangeData& Data);
	virtual void MaxSoulEnergyChanged(const FOnAttributeChangeData& Data);
	virtual void StaminaChanged(const FOnAttributeChangeData& Data);
	virtual void MaxStaminaChanged(const FOnAttributeChangeData& Data);
	virtual void StaminaRegenRateChanged(const FOnAttributeChangeData& Data);
	virtual void XPChanged(const FOnAttributeChangeData& Data);
	virtual void GemsChanged(const FOnAttributeChangeData& Data);
	virtual void CharacterLevelChanged(const FOnAttributeChangeData& Data);

	// Tag change callbacks
	virtual void StunTagChanged(const FGameplayTag CallbackTag, int32 NewCount);
};




