#include "DiscordUserHandle.h"

UDiscordUserHandle::UDiscordUserHandle() {
}

FString UDiscordUserHandle::Username() {
    return TEXT("");
}

TArray<UDiscordUserApplicationProfileHandle*> UDiscordUserHandle::UserApplicationProfiles() {
    return TArray<UDiscordUserApplicationProfileHandle*>();
}

EDiscordStatusType UDiscordUserHandle::Status() {
    return EDiscordStatusType::Online;
}

UDiscordRelationshipHandle* UDiscordUserHandle::Relationship() {
    return NULL;
}

bool UDiscordUserHandle::IsProvisional() {
    return false;
}

FDiscordUniqueID UDiscordUserHandle::ID() {
    return FDiscordUniqueID{};
}

FString UDiscordUserHandle::GlobalName() {
    return TEXT("");
}

UDiscordActivity* UDiscordUserHandle::GameActivity() {
    return NULL;
}

void UDiscordUserHandle::Drop() {
}

FString UDiscordUserHandle::DisplayName() {
    return TEXT("");
}

FString UDiscordUserHandle::AvatarUrl(EDiscordUserHandleAvatarType animatedType, EDiscordUserHandleAvatarType staticType) {
    return TEXT("");
}

FString UDiscordUserHandle::AvatarTypeToString(EDiscordUserHandleAvatarType Type) {
    return TEXT("");
}

FString UDiscordUserHandle::Avatar() {
    return TEXT("");
}


