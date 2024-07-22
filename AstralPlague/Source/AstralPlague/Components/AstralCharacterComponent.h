// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Components/GameFrameworkInitStateInterface.h"
#include "Components/PawnComponent.h"
#include "AstralPlague/GameFeatures/GameFeatureAction_AddInputContextMapping.h"
#include "GameplayAbilitySpecHandle.h"
#include "AstralPlague/Character/AstralPawnData.h"
#include "AstralCharacterComponent.generated.h"

namespace EEndPlayReason { enum Type : int; }
struct FLoadedMappableConfigPair;
struct FMappableConfigPair;

class UGameFrameworkComponentManager;
class UInputComponent;
class UAstralCameraMode;
class UAstralInputConfig;
class UObject;
struct FActorInitStateChangedParams;
struct FFrame;
struct FGameplayTag;
struct FInputActionValue;

/**
 * Component that sets up input and camera handling for player controlled pawns (or bots that simulate players).
 * This depends on a PawnExtensionComponent to coordinate initialization.
 */
UCLASS(Blueprintable, Meta=(BlueprintSpawnableComponent))
class ASTRALPLAGUE_API UAstralCharacterComponent : public UPawnComponent, public IGameFrameworkInitStateInterface
{
	GENERATED_BODY()

public:

	UAstralCharacterComponent(const FObjectInitializer& ObjectInitializer);

	/** Returns the hero component if one exists on the specified actor. */
	UFUNCTION(BlueprintPure, Category = "Astral|Hero")
	static UAstralCharacterComponent* FindCharacterComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UAstralCharacterComponent>() : nullptr); }

	/** Overrides the camera from an active gameplay ability */
	void SetAbilityCameraMode(TSubclassOf<UAstralCameraMode> CameraMode, const FGameplayAbilitySpecHandle& OwningSpecHandle);

	/** Clears the camera override if it is set */
	void ClearAbilityCameraMode(const FGameplayAbilitySpecHandle& OwningSpecHandle);

	/** Adds mode-specific input config */
	void AddAdditionalInputConfig(const UAstralInputConfig* InputConfig);

	/** Removes a mode-specific input config if it has been added */
	void RemoveAdditionalInputConfig(const UAstralInputConfig* InputConfig);

	/** True if this is controlled by a real player and has progressed far enough in initialization where additional input bindings can be added */
	bool IsReadyToBindInputs() const;
	
	/** The name of the extension event sent via UGameFrameworkComponentManager when ability inputs are ready to bind */
	static const FName NAME_BindInputsNow;

	/** The name of this component-implemented feature */
	static const FName NAME_ActorFeatureName;

	/** Sets the current pawn data */
	void SetPawnData(const UAstralPawnData* InPawnData);

protected:

	virtual void OnRegister() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	virtual void InitializePlayerInput(UInputComponent* PlayerInputComponent);

	void Input_AbilityInputTagPressed(FGameplayTag InputTag);
	void Input_AbilityInputTagReleased(FGameplayTag InputTag);

	void Input_Move(const FInputActionValue& InputActionValue);
	void Input_LookMouse(const FInputActionValue& InputActionValue);
	void Input_LookStick(const FInputActionValue& InputActionValue);
	void Input_AutoRun(const FInputActionValue& InputActionValue);

	TSubclassOf<UAstralCameraMode> DetermineCameraMode() const;
	
	void OnInputConfigActivated(const FLoadedMappableConfigPair& ConfigPair);
	void OnInputConfigDeactivated(const FLoadedMappableConfigPair& ConfigPair);

protected:

	/**
	 * Input Configs that should be added to this player when initializing the input. These configs
	 * will NOT be registered with the settings because they are added at runtime. If you want the config
	 * pair to be in the settings, then add it via the GameFeatureAction_AddInputConfig
	 * 
	 * NOTE: You should only add to this if you do not have a game feature plugin accessible to you.
	 * If you do, then use the GameFeatureAction_AddInputConfig instead. 
	 */
	PRAGMA_DISABLE_DEPRECATION_WARNINGS
	UE_DEPRECATED(5.3, "DefaultInputConfigs have been deprecated, use DefaultInputMappings instead")
	TArray<FMappableConfigPair> DefaultInputConfigs;
	PRAGMA_ENABLE_DEPRECATION_WARNINGS
	
	UPROPERTY(EditAnywhere)
	TArray<FInputMappingContextAndPriority> DefaultInputMappings;
	
	/** Camera mode set by an ability. */
	UPROPERTY()
	TSubclassOf<UAstralCameraMode> AbilityCameraMode;

	/** Spec handle for the last ability to set a camera mode. */
	FGameplayAbilitySpecHandle AbilityCameraModeOwningSpecHandle;

	/** True when player input bindings have been applied, will never be true for non - players */
	bool bReadyToBindInputs;

	/** Pawn data used to create the pawn. Specified from a spawn function or on a placed instance. */
	UPROPERTY(EditInstanceOnly, Category = "Astral|Pawn")
	TObjectPtr<const UAstralPawnData> PawnData;
};
