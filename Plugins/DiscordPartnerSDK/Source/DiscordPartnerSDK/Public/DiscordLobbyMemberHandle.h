#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordUniqueID.h"
#include "DiscordLobbyMemberHandle.generated.h"

class UDiscordUserHandle;

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordLobbyMemberHandle : public UObject {
    GENERATED_BODY()
public:
    UDiscordLobbyMemberHandle();

    UFUNCTION(BlueprintCallable)
    UDiscordUserHandle* User();
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, FString> Metadata();
    
    UFUNCTION(BlueprintCallable)
    FDiscordUniqueID ID();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
    UFUNCTION(BlueprintCallable)
    bool Connected();
    
    UFUNCTION(BlueprintCallable)
    bool CanLinkLobby();
    
};

