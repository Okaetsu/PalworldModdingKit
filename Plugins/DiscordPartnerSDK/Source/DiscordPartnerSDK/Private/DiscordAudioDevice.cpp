#include "DiscordAudioDevice.h"

UDiscordAudioDevice::UDiscordAudioDevice() {
}

void UDiscordAudioDevice::SetName(const FString& NewName) {
}

void UDiscordAudioDevice::SetIsDefault(bool NewIsDefault) {
}

void UDiscordAudioDevice::SetId(const FString& NewID) {
}

FString UDiscordAudioDevice::Name() {
    return TEXT("");
}

bool UDiscordAudioDevice::IsDefault() {
    return false;
}

FString UDiscordAudioDevice::ID() {
    return TEXT("");
}

bool UDiscordAudioDevice::Equals(UDiscordAudioDevice* rhs) {
    return false;
}

void UDiscordAudioDevice::Drop() {
}


