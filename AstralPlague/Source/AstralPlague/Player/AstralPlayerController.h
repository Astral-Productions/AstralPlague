// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonPlayerController.h"
#include "ModularPlayerController.h"
#include "AstralPlague/Character/AstralPlagueCharacter.h"
#include "AstralPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ASTRALPLAGUE_API AAstralPlayerController : public ACommonPlayerController
{
	GENERATED_BODY()

public:

	AAstralPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintCallable, Category = "Astral|PlayerController")
	AAstralPlayerState* GetAstralPlayerState() const;

	UFUNCTION(BlueprintCallable, Category = "Astral|PlayerController")
	UAstralAbilitySystemComponent* GetAstralAbilitySystemComponent() const;

	//~AActor interface
	virtual void PreInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	//~End of AActor interface

	//~AController interface
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;
	virtual void InitPlayerState() override;
	virtual void CleanupPlayerState() override;
	virtual void OnRep_PlayerState() override;
	//~End of AController interface

	//~APlayerController interface
	virtual void ReceivedPlayer() override;
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetPlayer(UPlayer* InPlayer) override;

	virtual void UpdateForceFeedback(IInputInterface* InputInterface, const int32 ControllerId) override;
	virtual void UpdateHiddenComponents(const FVector& ViewLocation, TSet<FPrimitiveComponentId>& OutHiddenComponents) override;
	virtual void PreProcessInput(const float DeltaTime, const bool bGamePaused) override;
	virtual void PostProcessInput(const float DeltaTime, const bool bGamePaused) override;
	//~End of APlayerController interface

	UFUNCTION(BlueprintCallable, Category = "Astral|Character")
	void SetIsAutoRunning(const bool bEnabled);

	UFUNCTION(BlueprintCallable, Category = "Astral|Character")
	bool GetIsAutoRunning() const;

	//Gas implementation 
	void CreateHUD();

	UPROPERTY(EditAnywhere, Category = "Astral|UI")
	TSubclassOf<class UAstralDamageTextWidgetComponent> DamageNumberClass;

	class UAstralHUDWidget* GetHUD() const;

	UFUNCTION(Client, Reliable, WithValidation)
	void ShowDamageNumber(float DamageAmount, AAstralPlagueCharacter* TargetCharacter);
	void ShowDamageNumber_Implementation(float DamageAmount, AAstralPlagueCharacter* TargetCharacter);
	bool ShowDamageNumber_Validate(float DamageAmount, AAstralPlagueCharacter* TargetCharacter);

	// Simple way to RPC to the client the countdown until they respawn from the GameMode. Will be latency amount of out sync with the Server.
	UFUNCTION(Client, Reliable, WithValidation)
	void SetRespawnCountdown(float RespawnTimeRemaining);
	void SetRespawnCountdown_Implementation(float RespawnTimeRemaining);
	bool SetRespawnCountdown_Validate(float RespawnTimeRemaining);
	

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Astral|UI")
	TSubclassOf<class UAstralHUDWidget> UIHUDWidgetClass;

	UPROPERTY(BlueprintReadWrite, Category = "Astral|UI")
	class UAstralHUDWidget* UIHUDWidget;
		
private:

	UPROPERTY()
	TObjectPtr<APlayerState> LastSeenPlayerState;

protected:
	// Called when the player state is set or cleared
	virtual void OnPlayerStateChanged();
	
	void OnStartAutoRun();
	void OnEndAutoRun();

	bool bHideViewTargetPawnNextFrame = false;


};
