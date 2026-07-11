#include "DiscordUserMessageSummary.h"

UDiscordUserMessageSummary::UDiscordUserMessageSummary() {
}

FDiscordUniqueID UDiscordUserMessageSummary::UserId() {
    return FDiscordUniqueID{};
}

FDiscordUniqueID UDiscordUserMessageSummary::LastMessageId() {
    return FDiscordUniqueID{};
}

void UDiscordUserMessageSummary::Drop() {
}


