// Copyright Epic Games, Inc. All Rights Reserved.

#include "AstralGameInstance.h"

#include "CommonSessionSubsystem.h"
#include "CommonUserSubsystem.h"
#include "Components/GameFrameworkComponentManager.h"
#include "HAL/IConsoleManager.h"
#include "AstralPlague/AstralGameplayTags.h"
#include "AstralPlague/Player/AstralLocalPlayer.h"
#include "AstralPlague/Player/AstralPlayerController.h"

#include "GameFramework/PlayerState.h"


#include UE_INLINE_GENERATED_CPP_BY_NAME(AstralGameInstance)

UAstralGameInstance::UAstralGameInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UAstralGameInstance::Init()
{
	Super::Init();

	// Register our custom init states
	UGameFrameworkComponentManager* ComponentManager = GetSubsystem<UGameFrameworkComponentManager>(this);

	if (ensure(ComponentManager))
	{
		ComponentManager->RegisterInitState(AstralGameplayTags::InitState_Spawned, false, FGameplayTag());
		ComponentManager->RegisterInitState(AstralGameplayTags::InitState_DataAvailable, false, AstralGameplayTags::InitState_Spawned);
		ComponentManager->RegisterInitState(AstralGameplayTags::InitState_DataInitialized, false, AstralGameplayTags::InitState_DataAvailable);
		ComponentManager->RegisterInitState(AstralGameplayTags::InitState_GameplayReady, false, AstralGameplayTags::InitState_DataInitialized);
	}
}

void UAstralGameInstance::Shutdown()
{
	if (UCommonSessionSubsystem* SessionSubsystem = GetSubsystem<UCommonSessionSubsystem>())
	{
		SessionSubsystem->OnPreClientTravelEvent.RemoveAll(this);
	}

	Super::Shutdown();
}

AAstralPlayerController* UAstralGameInstance::GetPrimaryPlayerController() const
{
	return Cast<AAstralPlayerController>(Super::GetPrimaryPlayerController(false));
}

bool UAstralGameInstance::CanJoinRequestedSession() const
{
	// Temporary first pass:  Always return true
	// This will be fleshed out to check the player's state
	if (!Super::CanJoinRequestedSession())
	{
		return false;
	}
	return true;
}

void UAstralGameInstance::HandlerUserInitialized(const UCommonUserInfo* UserInfo, bool bSuccess, FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext)
{
	Super::HandlerUserInitialized(UserInfo, bSuccess, Error, RequestedPrivilege, OnlineContext);

	// If login succeeded, tell the local player to load their settings
	if (bSuccess && ensure(UserInfo))
	{
		UAstralLocalPlayer* LocalPlayer = Cast<UAstralLocalPlayer>(GetLocalPlayerByIndex(UserInfo->LocalPlayerIndex));

		// There will not be a local player attached to the dedicated server user
		if (LocalPlayer)
		{
			LocalPlayer->LoadSharedSettingsFromDisk();
		}
	}
}


