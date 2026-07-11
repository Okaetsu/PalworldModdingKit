#include "DiscordDeviceAuthorizationArgs.h"

UDiscordDeviceAuthorizationArgs::UDiscordDeviceAuthorizationArgs() {
}

void UDiscordDeviceAuthorizationArgs::SetScopes(const FString& NewScopes) {
}

void UDiscordDeviceAuthorizationArgs::SetClientId(FDiscordUniqueID NewClientId) {
}

FString UDiscordDeviceAuthorizationArgs::Scopes() {
    return TEXT("");
}

void UDiscordDeviceAuthorizationArgs::Init() {
}

void UDiscordDeviceAuthorizationArgs::Drop() {
}

FDiscordUniqueID UDiscordDeviceAuthorizationArgs::ClientId() {
    return FDiscordUniqueID{};
}


