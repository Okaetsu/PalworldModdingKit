#include "DiscordActivity.h"

UDiscordActivity::UDiscordActivity() {
}

EDiscordActivityTypes UDiscordActivity::Type() {
    return EDiscordActivityTypes::Playing;
}

UDiscordActivityTimestamps* UDiscordActivity::Timestamps() {
    return NULL;
}

EDiscordActivityGamePlatforms UDiscordActivity::SupportedPlatforms() {
    return EDiscordActivityGamePlatforms::GeneratedUnknownValue__;
}

EDiscordStatusDisplayTypes UDiscordActivity::StatusDisplayType() {
    return EDiscordStatusDisplayTypes::Name;
}

FString UDiscordActivity::StateUrl() {
    return TEXT("");
}

FString UDiscordActivity::State() {
    return TEXT("");
}

void UDiscordActivity::SetType(EDiscordActivityTypes NewType) {
}

void UDiscordActivity::SetTimestamps(UDiscordActivityTimestamps* NewTimestamps) {
}

void UDiscordActivity::SetSupportedPlatforms(EDiscordActivityGamePlatforms NewSupportedPlatforms) {
}

void UDiscordActivity::SetStatusDisplayType(EDiscordStatusDisplayTypes NewStatusDisplayType) {
}

void UDiscordActivity::SetStateUrl(const FString& NewStateUrl) {
}

void UDiscordActivity::SetState(const FString& NewState) {
}

void UDiscordActivity::SetSecrets(UDiscordActivitySecrets* NewSecrets) {
}

void UDiscordActivity::SetParty(UDiscordActivityParty* NewParty) {
}

void UDiscordActivity::SetParentApplicationId(FDiscordUniqueID NewParentApplicationId) {
}

void UDiscordActivity::SetName(const FString& NewName) {
}

void UDiscordActivity::SetDetailsUrl(const FString& NewDetailsUrl) {
}

void UDiscordActivity::SetDetails(const FString& NewDetails) {
}

void UDiscordActivity::SetAssets(UDiscordActivityAssets* NewAssets) {
}

void UDiscordActivity::SetApplicationId(FDiscordUniqueID NewApplicationId) {
}

UDiscordActivitySecrets* UDiscordActivity::Secrets() {
    return NULL;
}

UDiscordActivityParty* UDiscordActivity::Party() {
    return NULL;
}

FDiscordUniqueID UDiscordActivity::ParentApplicationId() {
    return FDiscordUniqueID{};
}

FString UDiscordActivity::Name() {
    return TEXT("");
}

void UDiscordActivity::Init() {
}

TArray<UDiscordActivityButton*> UDiscordActivity::GetButtons() {
    return TArray<UDiscordActivityButton*>();
}

bool UDiscordActivity::Equals(UDiscordActivity* Other) {
    return false;
}

void UDiscordActivity::Drop() {
}

FString UDiscordActivity::DetailsUrl() {
    return TEXT("");
}

FString UDiscordActivity::Details() {
    return TEXT("");
}

UDiscordActivityAssets* UDiscordActivity::Assets() {
    return NULL;
}

FDiscordUniqueID UDiscordActivity::ApplicationId() {
    return FDiscordUniqueID{};
}

void UDiscordActivity::AddButton(UDiscordActivityButton* Button) {
}


