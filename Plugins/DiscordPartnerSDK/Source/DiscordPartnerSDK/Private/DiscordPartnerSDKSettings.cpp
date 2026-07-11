#include "DiscordPartnerSDKSettings.h"

UDiscordPartnerSDKSettings::UDiscordPartnerSDKSettings() {
    this->ApplicationIdString = TEXT("1420708397904429087");
}

FString UDiscordPartnerSDKSettings::GetApplicationIdString() const {
    return TEXT("");
}

int64 UDiscordPartnerSDKSettings::GetApplicationIdInt64() const {
    return 0;
}

FDiscordUniqueID UDiscordPartnerSDKSettings::GetApplicationId() const {
    return FDiscordUniqueID{};
}


