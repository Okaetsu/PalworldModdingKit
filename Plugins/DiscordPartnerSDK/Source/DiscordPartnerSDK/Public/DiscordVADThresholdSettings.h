#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordVADThresholdSettings.generated.h"

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordVADThresholdSettings : public UObject {
    GENERATED_BODY()
public:
    UDiscordVADThresholdSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float VadThreshold();
    
    UFUNCTION(BlueprintCallable)
    void SetVadThreshold(float NewVadThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SetAutomatic(bool NewAutomatic);
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Automatic();
    
};

