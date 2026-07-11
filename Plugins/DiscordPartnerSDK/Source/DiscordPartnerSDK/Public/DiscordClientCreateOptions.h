#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordUniqueID.h"
#include "EDiscordAudioSystem.h"
#include "DiscordClientCreateOptions.generated.h"

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordClientCreateOptions : public UObject {
    GENERATED_BODY()
public:
    UDiscordClientCreateOptions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString WebBase();
    
    UFUNCTION(BlueprintCallable)
    void SetWebBase(const FString& NewWebBase);
    
    UFUNCTION(BlueprintCallable)
    void SetExperimentalAudioSystem(EDiscordAudioSystem NewExperimentalAudioSystem);
    
    UFUNCTION(BlueprintCallable)
    void SetExperimentalAndroidPreventCommsForBluetooth(bool NewExperimentalAndroidPreventCommsForBluetooth);
    
    UFUNCTION(BlueprintCallable)
    void SetCpuAffinityMask(FDiscordUniqueID NewCpuAffinityMask);
    
    UFUNCTION(BlueprintCallable)
    void SetApiBase(const FString& NewApiBase);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDiscordAudioSystem ExperimentalAudioSystem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ExperimentalAndroidPreventCommsForBluetooth();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordUniqueID CpuAffinityMask();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ApiBase();
    
};

