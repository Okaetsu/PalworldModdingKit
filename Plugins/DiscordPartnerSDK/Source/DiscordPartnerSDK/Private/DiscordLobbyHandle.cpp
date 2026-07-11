#include "DiscordLobbyHandle.h"

UDiscordLobbyHandle::UDiscordLobbyHandle() {
}

TMap<FString, FString> UDiscordLobbyHandle::Metadata() {
    return TMap<FString, FString>();
}

TArray<UDiscordLobbyMemberHandle*> UDiscordLobbyHandle::LobbyMembers() {
    return TArray<UDiscordLobbyMemberHandle*>();
}

TArray<FDiscordUniqueID> UDiscordLobbyHandle::LobbyMemberIds() {
    return TArray<FDiscordUniqueID>();
}

UDiscordLinkedChannel* UDiscordLobbyHandle::LinkedChannel() {
    return NULL;
}

FDiscordUniqueID UDiscordLobbyHandle::ID() {
    return FDiscordUniqueID{};
}

UDiscordLobbyMemberHandle* UDiscordLobbyHandle::GetLobbyMemberHandle(FDiscordUniqueID memberId) {
    return NULL;
}

UDiscordCallInfoHandle* UDiscordLobbyHandle::GetCallInfoHandle() {
    return NULL;
}

void UDiscordLobbyHandle::Drop() {
}


