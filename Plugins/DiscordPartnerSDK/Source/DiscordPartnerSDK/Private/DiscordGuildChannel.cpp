#include "DiscordGuildChannel.h"

UDiscordGuildChannel::UDiscordGuildChannel() {
}

EDiscordChannelType UDiscordGuildChannel::Type() {
    return EDiscordChannelType::GuildText;
}

void UDiscordGuildChannel::SetType(EDiscordChannelType NewType) {
}

void UDiscordGuildChannel::SetPosition(int32 NewPosition) {
}

void UDiscordGuildChannel::SetParentId(FDiscordUniqueID NewParentId) {
}

void UDiscordGuildChannel::SetName(const FString& NewName) {
}

void UDiscordGuildChannel::SetLinkedLobby(UDiscordLinkedLobby* NewLinkedLobby) {
}

void UDiscordGuildChannel::SetIsViewableAndWriteableByAllMembers(bool NewIsViewableAndWriteableByAllMembers) {
}

void UDiscordGuildChannel::SetIsLinkable(bool NewIsLinkable) {
}

void UDiscordGuildChannel::SetId(FDiscordUniqueID NewID) {
}

int32 UDiscordGuildChannel::Position() {
    return 0;
}

FDiscordUniqueID UDiscordGuildChannel::ParentId() {
    return FDiscordUniqueID{};
}

FString UDiscordGuildChannel::Name() {
    return TEXT("");
}

UDiscordLinkedLobby* UDiscordGuildChannel::LinkedLobby() {
    return NULL;
}

bool UDiscordGuildChannel::IsViewableAndWriteableByAllMembers() {
    return false;
}

bool UDiscordGuildChannel::IsLinkable() {
    return false;
}

FDiscordUniqueID UDiscordGuildChannel::ID() {
    return FDiscordUniqueID{};
}

void UDiscordGuildChannel::Drop() {
}


