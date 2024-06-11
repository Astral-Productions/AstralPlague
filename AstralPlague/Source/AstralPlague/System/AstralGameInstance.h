// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CommonGameInstance.h"

#include "AstralGameInstance.generated.h"

class AAstralPlayerController;
class UObject;

UCLASS(Config = Game)
class ASTRALPLAGUE_API UAstralGameInstance : public UCommonGameInstance
{
	GENERATED_BODY()

public:

	UAstralGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	AAstralPlayerController* GetPrimaryPlayerController() const;
	
	virtual bool CanJoinRequestedSession() const override;
	virtual void HandlerUserInitialized(const UCommonUserInfo* UserInfo, bool bSuccess, FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext) override;

protected:

	virtual void Init() override;
	virtual void Shutdown() override;

	/** A hard-coded encryption key used to try out the encryption code. This is NOT SECURE, do not use this technique in production! */
	TArray<uint8> DebugTestEncryptionKey;
};
