#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordUniqueID.h"
#include "DiscordLobbyHandle.generated.h"

class UDiscordCallInfoHandle;
class UDiscordLinkedChannel;
class UDiscordLobbyMemberHandle;

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordLobbyHandle : public UObject {
    GENERATED_BODY()
public:
    UDiscordLobbyHandle();

    UFUNCTION(BlueprintCallable)
    TMap<FString, FString> Metadata();
    
    UFUNCTION(BlueprintCallable)
    TArray<UDiscordLobbyMemberHandle*> LobbyMembers();
    
    UFUNCTION(BlueprintCallable)
    TArray<FDiscordUniqueID> LobbyMemberIds();
    
    UFUNCTION(BlueprintCallable)
    UDiscordLinkedChannel* LinkedChannel();
    
    UFUNCTION(BlueprintCallable)
    FDiscordUniqueID ID();
    
    UFUNCTION(BlueprintCallable)
    UDiscordLobbyMemberHandle* GetLobbyMemberHandle(FDiscordUniqueID memberId);
    
    UFUNCTION(BlueprintCallable)
    UDiscordCallInfoHandle* GetCallInfoHandle();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
};

