#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalAudioBus.h"
#include "EPalAudioFadeType.h"
#include "FloatContainer.h"
#include "PalAudioFadeParameter.h"
#include "PalOptionAudioSettings.h"
#include "PalAudioSettingSystem.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalAudioSettingSystem : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalAudioBus, FFloatContainer> BusVolumeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalAudioBus, FPalAudioFadeParameter> BussFadeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalAudioBus> LoadMuteBuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideFadeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideFadeOutSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoadMuteRecoverDelaySeconds;
    
public:
    UPalAudioSettingSystem();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
    void UpdateAudioSwitch(const UObject* WorldContextObject, const FPalOptionAudioSettings& NewAudioSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_BP(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StartLoadMuteFade(EPalAudioFadeType FadeType, float DurationSeconds, bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    void StartAudioFadeBuses(const TArray<EPalAudioBus>& AudioBuses, EPalAudioFadeType FadeType, float DurationSeconds, bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    void StartAudioFade(EPalAudioBus AudioBus, EPalAudioFadeType FadeType, bool bImmediately);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAudioBusVolume(EPalAudioBus AudioBus, const FName& Key, float Volume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAudioBusMute(EPalAudioBus AudioBus, bool IsMute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString PalAudioBusToString(EPalAudioBus AudioBus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsAudioBusMute(EPalAudioBus AudioBus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAudioBusVolume(EPalAudioBus AudioBus) const;
    
};

