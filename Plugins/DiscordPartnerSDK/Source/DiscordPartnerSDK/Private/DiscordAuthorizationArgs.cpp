#include "DiscordAuthorizationArgs.h"

UDiscordAuthorizationArgs::UDiscordAuthorizationArgs() {
}

FString UDiscordAuthorizationArgs::State() {
    return TEXT("");
}

void UDiscordAuthorizationArgs::SetState(const FString& NewState) {
}

void UDiscordAuthorizationArgs::SetScopes(const FString& NewScopes) {
}

void UDiscordAuthorizationArgs::SetNonce(const FString& NewNonce) {
}

void UDiscordAuthorizationArgs::SetIntegrationType(EDiscordIntegrationType NewIntegrationType) {
}

void UDiscordAuthorizationArgs::SetCustomSchemeParam(const FString& NewCustomSchemeParam) {
}

void UDiscordAuthorizationArgs::SetCodeChallenge(UDiscordAuthorizationCodeChallenge* NewCodeChallenge) {
}

void UDiscordAuthorizationArgs::SetClientId(FDiscordUniqueID NewClientId) {
}

FString UDiscordAuthorizationArgs::Scopes() {
    return TEXT("");
}

FString UDiscordAuthorizationArgs::Nonce() {
    return TEXT("");
}

EDiscordIntegrationType UDiscordAuthorizationArgs::IntegrationType() {
    return EDiscordIntegrationType::GuildInstall;
}

void UDiscordAuthorizationArgs::Init() {
}

void UDiscordAuthorizationArgs::Drop() {
}

FString UDiscordAuthorizationArgs::CustomSchemeParam() {
    return TEXT("");
}

UDiscordAuthorizationCodeChallenge* UDiscordAuthorizationArgs::CodeChallenge() {
    return NULL;
}

FDiscordUniqueID UDiscordAuthorizationArgs::ClientId() {
    return FDiscordUniqueID{};
}


