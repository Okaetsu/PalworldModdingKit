#include "DiscordCallInfoHandle.h"

UDiscordCallInfoHandle::UDiscordCallInfoHandle() {
}

FDiscordUniqueID UDiscordCallInfoHandle::GuildId() {
    return FDiscordUniqueID{};
}

UDiscordVoiceStateHandle* UDiscordCallInfoHandle::GetVoiceStateHandle(FDiscordUniqueID UserId) {
    return NULL;
}

TArray<FDiscordUniqueID> UDiscordCallInfoHandle::GetParticipants() {
    return TArray<FDiscordUniqueID>();
}

void UDiscordCallInfoHandle::Drop() {
}

FDiscordUniqueID UDiscordCallInfoHandle::ChannelId() {
    return FDiscordUniqueID{};
}


