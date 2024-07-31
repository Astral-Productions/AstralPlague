// Copyright Astral Productions 2024


#include "AstralMainCharacter.h"

#include "AstralPlague/AbilitySystem/AstralAbilitySystemComponent.h"
#include "AstralPlague/Character/AstralCharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"


// Sets default values
AAstralMainCharacter::AAstralMainCharacter(const class FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer.SetDefaultSubobjectClass<UAstralCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	UCapsuleComponent* CapsuleComp = GetCapsuleComponent();
	check(CapsuleComp);
	
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComponent->SetupAttachment(CapsuleComp);
	
	CameraComponent = CreateDefaultSubobject<UAstralCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->SetRelativeLocation(FVector(-300.0f, 0.0f, 75.0f));
	CameraComponent->SetupAttachment(SpringArmComponent);
	
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
