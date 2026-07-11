#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordUniqueID.h"
#include "EDiscordDisclosureTypes.h"
#include "DiscordMessageHandle.generated.h"

class UDiscordAdditionalContent;
class UDiscordChannelHandle;
class UDiscordLobbyHandle;
class UDiscordUserHandle;

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordMessageHandle : public UObject {
    GENERATED_BODY()
public:
    UDiscordMessageHandle();

    UFUNCTION(BlueprintCallable)
    FDiscordUniqueID SentTimestamp();
    
    UFUNCTION(BlueprintCallable)
    bool SentFromGame();
    
    UFUNCTION(BlueprintCallable)
    FDiscordUniqueID RecipientId();
    
    UFUNCTION(BlueprintCallable)
    UDiscordUserHandle* Recipient();
    
    UFUNCTION(BlueprintCallable)
    FString RawContent();
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, FString> ModerationMetadata();
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, FString> Metadata();
    
    UFUNCTION(BlueprintCallable)
    UDiscordLobbyHandle* Lobby();
    
    UFUNCTION(BlueprintCallable)
    FDiscordUniqueID ID();
    
    UFUNCTION(BlueprintCallable)
    FDiscordUniqueID EditedTimestamp();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
    UFUNCTION(BlueprintCallable)
    EDiscordDisclosureTypes DisclosureType();
    
    UFUNCTION(BlueprintCallable)
    FString Content();
    
    UFUNCTION(BlueprintCallable)
    FDiscordUniqueID ChannelId();
    
    UFUNCTION(BlueprintCallable)
    UDiscordChannelHandle* Channel();
    
    UFUNCTION(BlueprintCallable)
    FDiscordUniqueID AuthorId();
    
    UFUNCTION(BlueprintCallable)
    UDiscordUserHandle* Author();
    
    UFUNCTION(BlueprintCallable)
    FDiscordUniqueID ApplicationId();
    
    UFUNCTION(BlueprintCallable)
    UDiscordAdditionalContent* AdditionalContent();
    
};

