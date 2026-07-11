#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordUniqueID.h"
#include "DiscordLinkedChannel.generated.h"

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordLinkedChannel : public UObject {
    GENERATED_BODY()
public:
    UDiscordLinkedChannel();

    UFUNCTION(BlueprintCallable)
    void SetName(const FString& NewName);
    
    UFUNCTION(BlueprintCallable)
    void SetId(FDiscordUniqueID NewID);
    
    UFUNCTION(BlueprintCallable)
    void SetGuildId(FDiscordUniqueID NewGuildId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString Name();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordUniqueID ID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordUniqueID GuildId();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
};

