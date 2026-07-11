#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordVoiceStateHandle.generated.h"

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordVoiceStateHandle : public UObject {
    GENERATED_BODY()
public:
    UDiscordVoiceStateHandle();

    UFUNCTION(BlueprintCallable)
    bool SelfMute();
    
    UFUNCTION(BlueprintCallable)
    bool SelfDeaf();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
};

