#include "DiscordActivityInvite.h"

UDiscordActivityInvite::UDiscordActivityInvite() {
}

EDiscordActivityActionTypes UDiscordActivityInvite::Type() {
    return EDiscordActivityActionTypes::Invalid;
}

void UDiscordActivityInvite::SetType(EDiscordActivityActionTypes NewType) {
}

void UDiscordActivityInvite::SetSessionId(const FString& NewSessionId) {
}

void UDiscordActivityInvite::SetSenderId(FDiscordUniqueID NewSenderId) {
}

void UDiscordActivityInvite::SetPartyId(const FString& NewPartyId) {
}

void UDiscordActivityInvite::SetParentApplicationId(FDiscordUniqueID NewParentApplicationId) {
}

void UDiscordActivityInvite::SetMessageId(FDiscordUniqueID NewMessageId) {
}

void UDiscordActivityInvite::SetIsValid(bool NewIsValid) {
}

void UDiscordActivityInvite::SetChannelId(FDiscordUniqueID NewChannelId) {
}

void UDiscordActivityInvite::SetApplicationId(FDiscordUniqueID NewApplicationId) {
}

FString UDiscordActivityInvite::SessionId() {
    return TEXT("");
}

FDiscordUniqueID UDiscordActivityInvite::SenderId() {
    return FDiscordUniqueID{};
}

FString UDiscordActivityInvite::PartyId() {
    return TEXT("");
}

FDiscordUniqueID UDiscordActivityInvite::ParentApplicationId() {
    return FDiscordUniqueID{};
}

FDiscordUniqueID UDiscordActivityInvite::MessageId() {
    return FDiscordUniqueID{};
}

bool UDiscordActivityInvite::IsValid() {
    return false;
}

void UDiscordActivityInvite::Init() {
}

void UDiscordActivityInvite::Drop() {
}

FDiscordUniqueID UDiscordActivityInvite::ChannelId() {
    return FDiscordUniqueID{};
}

FDiscordUniqueID UDiscordActivityInvite::ApplicationId() {
    return FDiscordUniqueID{};
}


