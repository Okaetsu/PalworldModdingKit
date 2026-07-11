#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordUniqueID.h"
#include "DiscordCallInfoHandle.generated.h"

class UDiscordVoiceStateHandle;

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordCallInfoHandle : public UObject {
    GENERATED_BODY()
public:
    UDiscordCallInfoHandle();

    UFUNCTION(BlueprintCallable)
    FDiscordUniqueID GuildId();
    
    UFUNCTION(BlueprintCallable)
    UDiscordVoiceStateHandle* GetVoiceStateHandle(FDiscordUniqueID UserId);
    
    UFUNCTION(BlueprintCallable)
    TArray<FDiscordUniqueID> GetParticipants();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
    UFUNCTION(BlueprintCallable)
    FDiscordUniqueID ChannelId();
    
};

