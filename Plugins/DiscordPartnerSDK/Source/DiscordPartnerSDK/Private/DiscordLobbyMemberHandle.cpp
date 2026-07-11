#include "DiscordLobbyMemberHandle.h"

UDiscordLobbyMemberHandle::UDiscordLobbyMemberHandle() {
}

UDiscordUserHandle* UDiscordLobbyMemberHandle::User() {
    return NULL;
}

TMap<FString, FString> UDiscordLobbyMemberHandle::Metadata() {
    return TMap<FString, FString>();
}

FDiscordUniqueID UDiscordLobbyMemberHandle::ID() {
    return FDiscordUniqueID{};
}

void UDiscordLobbyMemberHandle::Drop() {
}

bool UDiscordLobbyMemberHandle::Connected() {
    return false;
}

bool UDiscordLobbyMemberHandle::CanLinkLobby() {
    return false;
}


