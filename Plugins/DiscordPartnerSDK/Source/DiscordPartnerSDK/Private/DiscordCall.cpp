#include "DiscordCall.h"

UDiscordCall::UDiscordCall() {
}

FString UDiscordCall::StatusToString(EDiscordCallStatus Type) {
    return TEXT("");
}

void UDiscordCall::SetVadThreshold(bool Automatic, float Threshold) {
}

void UDiscordCall::SetStatusChangedCallback(const FDiscordCallOnStatusChangedDynamic& cb) {
}

void UDiscordCall::SetSpeakingStatusChangedCallback(const FDiscordCallOnSpeakingStatusChangedDynamic& cb) {
}

void UDiscordCall::SetSelfMute(bool Mute) {
}

void UDiscordCall::SetSelfDeaf(bool deaf) {
}

void UDiscordCall::SetPTTReleaseDelay(int32 releaseDelayMs) {
}

void UDiscordCall::SetPTTActive(bool Active) {
}

void UDiscordCall::SetParticipantVolume(FDiscordUniqueID UserId, float Volume) {
}

void UDiscordCall::SetParticipantChangedCallback(const FDiscordCallOnParticipantChangedDynamic& cb) {
}

void UDiscordCall::SetOnVoiceStateChangedCallback(const FDiscordCallOnVoiceStateChangedDynamic& cb) {
}

void UDiscordCall::SetLocalMute(FDiscordUniqueID UserId, bool Mute) {
}

void UDiscordCall::SetAudioMode(EDiscordAudioModeType audioMode) {
}

UDiscordVoiceStateHandle* UDiscordCall::GetVoiceStateHandle(FDiscordUniqueID UserId) {
    return NULL;
}

UDiscordVADThresholdSettings* UDiscordCall::GetVADThreshold() {
    return NULL;
}

EDiscordCallStatus UDiscordCall::GetStatus() {
    return EDiscordCallStatus::Disconnected;
}

bool UDiscordCall::GetSelfMute() {
    return false;
}

bool UDiscordCall::GetSelfDeaf() {
    return false;
}

int32 UDiscordCall::GetPTTReleaseDelay() {
    return 0;
}

bool UDiscordCall::GetPTTActive() {
    return false;
}

float UDiscordCall::GetParticipantVolume(FDiscordUniqueID UserId) {
    return 0.0f;
}

TArray<FDiscordUniqueID> UDiscordCall::GetParticipants() {
    return TArray<FDiscordUniqueID>();
}

bool UDiscordCall::GetLocalMute(FDiscordUniqueID UserId) {
    return false;
}

FDiscordUniqueID UDiscordCall::GetGuildId() {
    return FDiscordUniqueID{};
}

FDiscordUniqueID UDiscordCall::GetChannelId() {
    return FDiscordUniqueID{};
}

EDiscordAudioModeType UDiscordCall::GetAudioMode() {
    return EDiscordAudioModeType::MODE_UNINIT;
}

FString UDiscordCall::ErrorToString(EDiscordCallError Type) {
    return TEXT("");
}

void UDiscordCall::Drop() {
}


