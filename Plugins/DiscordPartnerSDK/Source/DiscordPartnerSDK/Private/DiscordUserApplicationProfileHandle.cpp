#include "DiscordUserApplicationProfileHandle.h"

UDiscordUserApplicationProfileHandle::UDiscordUserApplicationProfileHandle() {
}

FString UDiscordUserApplicationProfileHandle::Username() {
    return TEXT("");
}

EDiscordExternalIdentityProviderType UDiscordUserApplicationProfileHandle::ProviderType() {
    return EDiscordExternalIdentityProviderType::OIDC;
}

FString UDiscordUserApplicationProfileHandle::ProviderIssuedUserId() {
    return TEXT("");
}

FString UDiscordUserApplicationProfileHandle::ProviderId() {
    return TEXT("");
}

FString UDiscordUserApplicationProfileHandle::Metadata() {
    return TEXT("");
}

void UDiscordUserApplicationProfileHandle::Drop() {
}

FString UDiscordUserApplicationProfileHandle::AvatarHash() {
    return TEXT("");
}


