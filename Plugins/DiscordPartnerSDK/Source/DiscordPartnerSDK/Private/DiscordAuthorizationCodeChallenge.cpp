#include "DiscordAuthorizationCodeChallenge.h"

UDiscordAuthorizationCodeChallenge::UDiscordAuthorizationCodeChallenge() {
}

void UDiscordAuthorizationCodeChallenge::SetMethod(EDiscordAuthenticationCodeChallengeMethod NewMethod) {
}

void UDiscordAuthorizationCodeChallenge::SetChallenge(const FString& NewChallenge) {
}

EDiscordAuthenticationCodeChallengeMethod UDiscordAuthorizationCodeChallenge::Method() {
    return EDiscordAuthenticationCodeChallengeMethod::S256;
}

void UDiscordAuthorizationCodeChallenge::Init() {
}

void UDiscordAuthorizationCodeChallenge::Drop() {
}

FString UDiscordAuthorizationCodeChallenge::Challenge() {
    return TEXT("");
}


