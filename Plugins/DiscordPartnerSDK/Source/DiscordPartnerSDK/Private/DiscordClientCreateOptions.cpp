#include "DiscordClientCreateOptions.h"

UDiscordClientCreateOptions::UDiscordClientCreateOptions() {
}

FString UDiscordClientCreateOptions::WebBase() {
    return TEXT("");
}

void UDiscordClientCreateOptions::SetWebBase(const FString& NewWebBase) {
}

void UDiscordClientCreateOptions::SetExperimentalAudioSystem(EDiscordAudioSystem NewExperimentalAudioSystem) {
}

void UDiscordClientCreateOptions::SetExperimentalAndroidPreventCommsForBluetooth(bool NewExperimentalAndroidPreventCommsForBluetooth) {
}

void UDiscordClientCreateOptions::SetCpuAffinityMask(FDiscordUniqueID NewCpuAffinityMask) {
}

void UDiscordClientCreateOptions::SetApiBase(const FString& NewApiBase) {
}

void UDiscordClientCreateOptions::Init() {
}

EDiscordAudioSystem UDiscordClientCreateOptions::ExperimentalAudioSystem() {
    return EDiscordAudioSystem::Standard;
}

bool UDiscordClientCreateOptions::ExperimentalAndroidPreventCommsForBluetooth() {
    return false;
}

void UDiscordClientCreateOptions::Drop() {
}

FDiscordUniqueID UDiscordClientCreateOptions::CpuAffinityMask() {
    return FDiscordUniqueID{};
}

FString UDiscordClientCreateOptions::ApiBase() {
    return TEXT("");
}


