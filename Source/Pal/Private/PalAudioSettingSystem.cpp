#include "PalAudioSettingSystem.h"

UPalAudioSettingSystem::UPalAudioSettingSystem() {
    this->LoadMuteBuses.AddDefaulted(3);
    this->OverrideFadeInSeconds = 0.00f;
    this->OverrideFadeOutSeconds = 0.00f;
    this->LoadMuteRecoverDelaySeconds = 1.00f;
}



void UPalAudioSettingSystem::StartLoadMuteFade(EPalAudioFadeType FadeType, float DurationSeconds, bool bImmediately) {
}

void UPalAudioSettingSystem::StartAudioFadeBuses(const TArray<EPalAudioBus>& AudioBuses, EPalAudioFadeType FadeType, float DurationSeconds, bool bImmediately) {
}

void UPalAudioSettingSystem::StartAudioFade(EPalAudioBus AudioBus, EPalAudioFadeType FadeType, bool bImmediately) {
}

void UPalAudioSettingSystem::SetAudioBusVolume_Implementation(EPalAudioBus AudioBus, const FName& Key, float Volume) {
}


FString UPalAudioSettingSystem::PalAudioBusToString(EPalAudioBus AudioBus) const {
    return TEXT("");
}


void UPalAudioSettingSystem::Initialize_Implementation() {
}

float UPalAudioSettingSystem::GetAudioBusVolume(EPalAudioBus AudioBus) const {
    return 0.0f;
}


