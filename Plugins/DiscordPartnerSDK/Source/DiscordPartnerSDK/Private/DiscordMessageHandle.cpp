#include "DiscordMessageHandle.h"

UDiscordMessageHandle::UDiscordMessageHandle() {
}

FDiscordUniqueID UDiscordMessageHandle::SentTimestamp() {
    return FDiscordUniqueID{};
}

bool UDiscordMessageHandle::SentFromGame() {
    return false;
}

FDiscordUniqueID UDiscordMessageHandle::RecipientId() {
    return FDiscordUniqueID{};
}

UDiscordUserHandle* UDiscordMessageHandle::Recipient() {
    return NULL;
}

FString UDiscordMessageHandle::RawContent() {
    return TEXT("");
}

TMap<FString, FString> UDiscordMessageHandle::ModerationMetadata() {
    return TMap<FString, FString>();
}

TMap<FString, FString> UDiscordMessageHandle::Metadata() {
    return TMap<FString, FString>();
}

UDiscordLobbyHandle* UDiscordMessageHandle::Lobby() {
    return NULL;
}

FDiscordUniqueID UDiscordMessageHandle::ID() {
    return FDiscordUniqueID{};
}

FDiscordUniqueID UDiscordMessageHandle::EditedTimestamp() {
    return FDiscordUniqueID{};
}

void UDiscordMessageHandle::Drop() {
}

EDiscordDisclosureTypes UDiscordMessageHandle::DisclosureType() {
    return EDiscordDisclosureTypes::GeneratedUnknownValue__;
}

FString UDiscordMessageHandle::Content() {
    return TEXT("");
}

FDiscordUniqueID UDiscordMessageHandle::ChannelId() {
    return FDiscordUniqueID{};
}

UDiscordChannelHandle* UDiscordMessageHandle::Channel() {
    return NULL;
}

FDiscordUniqueID UDiscordMessageHandle::AuthorId() {
    return FDiscordUniqueID{};
}

UDiscordUserHandle* UDiscordMessageHandle::Author() {
    return NULL;
}

FDiscordUniqueID UDiscordMessageHandle::ApplicationId() {
    return FDiscordUniqueID{};
}

UDiscordAdditionalContent* UDiscordMessageHandle::AdditionalContent() {
    return NULL;
}


