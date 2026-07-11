#include "DiscordAuthorizationCodeVerifier.h"

UDiscordAuthorizationCodeVerifier::UDiscordAuthorizationCodeVerifier() {
}

FString UDiscordAuthorizationCodeVerifier::Verifier() {
    return TEXT("");
}

void UDiscordAuthorizationCodeVerifier::SetVerifier(const FString& NewVerifier) {
}

void UDiscordAuthorizationCodeVerifier::SetChallenge(UDiscordAuthorizationCodeChallenge* NewChallenge) {
}

void UDiscordAuthorizationCodeVerifier::Drop() {
}

UDiscordAuthorizationCodeChallenge* UDiscordAuthorizationCodeVerifier::Challenge() {
    return NULL;
}


