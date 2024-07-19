// Copyright Astral Productions 2024


#include "AstralMainCharacter.h"

#include "AstralPlague/AbilitySystem/AstralAbilitySystemComponent.h"
#include "AstralPlague/Character/AstralCharacterMovementComponent.h"


// Sets default values
AAstralMainCharacter::AAstralMainCharacter(const class FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer.SetDefaultSubobjectClass<UAstralCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

UAstralFloatingStatusBarWidget* AAstralMainCharacter::GetFloatingStatusBar() 
{
	return UIFloatingStatusBar;
}

// Called when the game starts or when spawned
void AAstralMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAstralMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AAstralMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AAstralMainCharacter::BindASCInput()
{
	if (!ASCInputBound && AbilitySystemComponent.IsValid() && IsValid(InputComponent))
	{
		FTopLevelAssetPath AbilityEnumAssetPath = FTopLevelAssetPath(FName("/Script/AstralPlague"), FName("EGDAbilityInputID"));
		AbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent, FGameplayAbilityInputBinds(FString("ConfirmTarget"),
			FString("CancelTarget"), AbilityEnumAssetPath, static_cast<int32>(EAstralAbilityInputID::Confirm), static_cast<int32>(EAstralAbilityInputID::Cancel)));

		ASCInputBound = true;
	}
}
