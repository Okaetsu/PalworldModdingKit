#include "DiscordAdditionalContent.h"

UDiscordAdditionalContent::UDiscordAdditionalContent() {
}

FString UDiscordAdditionalContent::TypeToString(EDiscordAdditionalContentType NewType) {
    return TEXT("");
}

EDiscordAdditionalContentType UDiscordAdditionalContent::Type() {
    return EDiscordAdditionalContentType::Other;
}

FString UDiscordAdditionalContent::Title() {
    return TEXT("");
}

void UDiscordAdditionalContent::SetType(EDiscordAdditionalContentType NewType) {
}

void UDiscordAdditionalContent::SetTitle(const FString& NewTitle) {
}

void UDiscordAdditionalContent::SetCount(uint8 NewCount) {
}

void UDiscordAdditionalContent::Init() {
}

bool UDiscordAdditionalContent::Equals(UDiscordAdditionalContent* rhs) {
    return false;
}

void UDiscordAdditionalContent::Drop() {
}

uint8 UDiscordAdditionalContent::Count() {
    return 0;
}


