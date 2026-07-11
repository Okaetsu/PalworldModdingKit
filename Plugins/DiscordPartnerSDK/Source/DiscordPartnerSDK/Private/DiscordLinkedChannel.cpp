#include "DiscordLinkedChannel.h"

UDiscordLinkedChannel::UDiscordLinkedChannel() {
}

void UDiscordLinkedChannel::SetName(const FString& NewName) {
}

void UDiscordLinkedChannel::SetId(FDiscordUniqueID NewID) {
}

void UDiscordLinkedChannel::SetGuildId(FDiscordUniqueID NewGuildId) {
}

FString UDiscordLinkedChannel::Name() {
    return TEXT("");
}

FDiscordUniqueID UDiscordLinkedChannel::ID() {
    return FDiscordUniqueID{};
}

FDiscordUniqueID UDiscordLinkedChannel::GuildId() {
    return FDiscordUniqueID{};
}

void UDiscordLinkedChannel::Drop() {
}


