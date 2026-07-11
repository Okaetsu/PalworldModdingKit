#include "DiscordRelationshipHandle.h"

UDiscordRelationshipHandle::UDiscordRelationshipHandle() {
}

UDiscordUserHandle* UDiscordRelationshipHandle::User() {
    return NULL;
}

bool UDiscordRelationshipHandle::IsSpamRequest() {
    return false;
}

FDiscordUniqueID UDiscordRelationshipHandle::ID() {
    return FDiscordUniqueID{};
}

EDiscordRelationshipType UDiscordRelationshipHandle::GameRelationshipType() {
    return EDiscordRelationshipType::None;
}

void UDiscordRelationshipHandle::Drop() {
}

EDiscordRelationshipType UDiscordRelationshipHandle::DiscordRelationshipType() {
    return EDiscordRelationshipType::None;
}


