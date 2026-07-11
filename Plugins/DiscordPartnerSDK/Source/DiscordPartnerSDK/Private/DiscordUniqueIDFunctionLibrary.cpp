#include "DiscordUniqueIDFunctionLibrary.h"

UDiscordUniqueIDFunctionLibrary::UDiscordUniqueIDFunctionLibrary() {
}

void UDiscordUniqueIDFunctionLibrary::Parse_StringToDiscordUniqueID(const FString& DiscordUniqueIDString, FDiscordUniqueID& OutUniqueID, bool& Success) {
}

bool UDiscordUniqueIDFunctionLibrary::NotEqual_DiscordUniqueIDDiscordUniqueID(const FDiscordUniqueID& Left, const FDiscordUniqueID& Right) {
    return false;
}

bool UDiscordUniqueIDFunctionLibrary::EqualEqual_DiscordUniqueIDDiscordUniqueID(const FDiscordUniqueID& Left, const FDiscordUniqueID& Right) {
    return false;
}

FString UDiscordUniqueIDFunctionLibrary::Conv_DiscordUniqueIDToString(const FDiscordUniqueID& InUniqueId) {
    return TEXT("");
}


