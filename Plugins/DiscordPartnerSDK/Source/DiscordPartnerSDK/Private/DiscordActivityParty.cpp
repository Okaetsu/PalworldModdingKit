#include "DiscordActivityParty.h"

UDiscordActivityParty::UDiscordActivityParty() {
}

void UDiscordActivityParty::SetPrivacy(EDiscordActivityPartyPrivacy NewPrivacy) {
}

void UDiscordActivityParty::SetMaxSize(int32 NewMaxSize) {
}

void UDiscordActivityParty::SetId(const FString& NewID) {
}

void UDiscordActivityParty::SetCurrentSize(int32 NewCurrentSize) {
}

EDiscordActivityPartyPrivacy UDiscordActivityParty::Privacy() {
    return EDiscordActivityPartyPrivacy::Private;
}

int32 UDiscordActivityParty::MaxSize() {
    return 0;
}

void UDiscordActivityParty::Init() {
}

FString UDiscordActivityParty::ID() {
    return TEXT("");
}

void UDiscordActivityParty::Drop() {
}

int32 UDiscordActivityParty::CurrentSize() {
    return 0;
}


