#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordCallOnParticipantChangedDynamicDelegate.h"
#include "DiscordCallOnSpeakingStatusChangedDynamicDelegate.h"
#include "DiscordCallOnStatusChangedDynamicDelegate.h"
#include "DiscordCallOnVoiceStateChangedDynamicDelegate.h"
#include "DiscordUniqueID.h"
#include "EDiscordAudioModeType.h"
#include "EDiscordCallError.h"
#include "EDiscordCallStatus.h"
#include "DiscordCall.generated.h"

class UDiscordVADThresholdSettings;
class UDiscordVoiceStateHandle;

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordCall : public UObject {
    GENERATED_BODY()
public:
    UDiscordCall();

    UFUNCTION(BlueprintCallable)
    static FString StatusToString(EDiscordCallStatus Type);
    
    UFUNCTION(BlueprintCallable)
    void SetVadThreshold(bool Automatic, float Threshold);
    
    UFUNCTION(BlueprintCallable)
    void SetStatusChangedCallback(const FDiscordCallOnStatusChangedDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeakingStatusChangedCallback(const FDiscordCallOnSpeakingStatusChangedDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SetSelfMute(bool Mute);
    
    UFUNCTION(BlueprintCallable)
    void SetSelfDeaf(bool deaf);
    
    UFUNCTION(BlueprintCallable)
    void SetPTTReleaseDelay(int32 releaseDelayMs);
    
    UFUNCTION(BlueprintCallable)
    void SetPTTActive(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void SetParticipantVolume(FDiscordUniqueID UserId, float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetParticipantChangedCallback(const FDiscordCallOnParticipantChangedDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SetOnVoiceStateChangedCallback(const FDiscordCallOnVoiceStateChangedDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalMute(FDiscordUniqueID UserId, bool Mute);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioMode(EDiscordAudioModeType audioMode);
    
    UFUNCTION(BlueprintCallable)
    UDiscordVoiceStateHandle* GetVoiceStateHandle(FDiscordUniqueID UserId);
    
    UFUNCTION(BlueprintCallable)
    UDiscordVADThresholdSettings* GetVADThreshold();
    
    UFUNCTION(BlueprintCallable)
    EDiscordCallStatus GetStatus();
    
    UFUNCTION(BlueprintCallable)
    bool GetSelfMute();
    
    UFUNCTION(BlueprintCallable)
    bool GetSelfDeaf();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPTTReleaseDelay();
    
    UFUNCTION(BlueprintCallable)
    bool GetPTTActive();
    
    UFUNCTION(BlueprintCallable)
    float GetParticipantVolume(FDiscordUniqueID UserId);
    
    UFUNCTION(BlueprintCallable)
    TArray<FDiscordUniqueID> GetParticipants();
    
    UFUNCTION(BlueprintCallable)
    bool GetLocalMute(FDiscordUniqueID UserId);
    
    UFUNCTION(BlueprintCallable)
    FDiscordUniqueID GetGuildId();
    
    UFUNCTION(BlueprintCallable)
    FDiscordUniqueID GetChannelId();
    
    UFUNCTION(BlueprintCallable)
    EDiscordAudioModeType GetAudioMode();
    
    UFUNCTION(BlueprintCallable)
    static FString ErrorToString(EDiscordCallError Type);
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
};

