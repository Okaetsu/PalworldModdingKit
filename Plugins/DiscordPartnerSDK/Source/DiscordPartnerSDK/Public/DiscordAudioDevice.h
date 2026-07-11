#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordAudioDevice.generated.h"

class UDiscordAudioDevice;

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordAudioDevice : public UObject {
    GENERATED_BODY()
public:
    UDiscordAudioDevice();

    UFUNCTION(BlueprintCallable)
    void SetName(const FString& NewName);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDefault(bool NewIsDefault);
    
    UFUNCTION(BlueprintCallable)
    void SetId(const FString& NewID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString Name();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ID();
    
    UFUNCTION(BlueprintCallable)
    bool Equals(UDiscordAudioDevice* rhs);
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
};

