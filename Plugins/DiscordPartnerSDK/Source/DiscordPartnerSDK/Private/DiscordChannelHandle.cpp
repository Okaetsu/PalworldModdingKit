#include "DiscordChannelHandle.h"

UDiscordChannelHandle::UDiscordChannelHandle() {
}

EDiscordChannelType UDiscordChannelHandle::Type() {
    return EDiscordChannelType::GuildText;
}

TArray<FDiscordUniqueID> UDiscordChannelHandle::Recipients() {
    return TArray<FDiscordUniqueID>();
}

FString UDiscordChannelHandle::Name() {
    return TEXT("");
}

FDiscordUniqueID UDiscordChannelHandle::ID() {
    return FDiscordUniqueID{};
}

void UDiscordChannelHandle::Drop() {
}


