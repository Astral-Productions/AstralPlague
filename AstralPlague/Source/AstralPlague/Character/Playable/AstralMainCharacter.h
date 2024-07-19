// Copyright Astral Productions 2024

#pragma once

#include "CoreMinimal.h"
#include "AstralPlague/Character/AstralPlagueCharacter.h"
#include "AstralMainCharacter.generated.h"

UCLASS()
class ASTRALPLAGUE_API AAstralMainCharacter : public AAstralPlagueCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAstralMainCharacter(const class FObjectInitializer& ObjectInitializer);

	class UAstralFloatingStatusBarWidget* GetFloatingStatusBar();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Astral|UI")
	TSubclassOf<class UAstralFloatingStatusBarWidget> UIFloatingStatusBarClass;

	UPROPERTY()
	class UAstralFloatingStatusBarWidget* UIFloatingStatusBar;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Astral|UI")
	class UWidgetComponent* UIFloatingStatusBarComponent;
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:

	bool ASCInputBound = false;
	
	// Called from both SetupPlayerInputComponent and OnRep_PlayerState because of a potential race condition where the PlayerController might
	// call ClientRestart which calls SetupPlayerInputComponent before the PlayerState is repped to the client so the PlayerState would be null in SetupPlayerInputComponent.
	// Conversely, the PlayerState might be repped before the PlayerController calls ClientRestart so the Actor's InputComponent would be null in OnRep_PlayerState.
	void BindASCInput();
};
