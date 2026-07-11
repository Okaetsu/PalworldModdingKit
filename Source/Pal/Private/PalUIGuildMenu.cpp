#include "PalUIGuildMenu.h"

UPalUIGuildMenu::UPalUIGuildMenu() {
}

void UPalUIGuildMenu::RequestExitGuild() {
}

void UPalUIGuildMenu::RequestChangeRole(const FGuid& PlayerUId, EPalGuildRole NewRole) {
}

void UPalUIGuildMenu::RequestChangeGuildName(const FString& NewGuildName) {
}

void UPalUIGuildMenu::RequestChangeAdmin(const FGuid& TargetPlayerUId) {
}

void UPalUIGuildMenu::RequestBanPlayer(const FGuid& TargetPlayerUId) {
}

void UPalUIGuildMenu::OnUpdatedMemberInfo_Binded(const UPalGroupGuildBase* Guild, const FGuid& PlayerUId, const FPalGuildPlayerInfo& PlayerInfo) {
}


void UPalUIGuildMenu::OnUpdatedGuildName_Binded(const FString& NewGuildName) {
}



bool UPalUIGuildMenu::IsExistPlayer(const FGuid& PlayerUId) {
    return false;
}

bool UPalUIGuildMenu::IsAdminLocalPlayer() {
    return false;
}

void UPalUIGuildMenu::GetPlayerInfo(const FGuid& PlayerUId, FPalGuildPlayerInfo& OutInfo) const {
}

UPalGroupGuildBase* UPalUIGuildMenu::GetMyGuild() const {
    return NULL;
}

FText UPalUIGuildMenu::GetJoinGuildRequestConfirmMessage() {
    return FText::GetEmpty();
}

void UPalUIGuildMenu::GetGuildNameModifierPlayerUId(FGuid& OutAdminPlayerUId) {
}

void UPalUIGuildMenu::GetGuildNameByCheckBlockedUser(FString& OutGuildName) const {
}

void UPalUIGuildMenu::GetGuildName(FString& OutGuildName) const {
}

void UPalUIGuildMenu::GetGuildMemberInfo(TMap<FGuid, FPalUIGuildMemberDisplayInfo>& OutDisplayInfoMap) const {
}

FText UPalUIGuildMenu::GetExitGuildConfirmMessage() {
    return FText::GetEmpty();
}

void UPalUIGuildMenu::GetAdminPlayerUId(FGuid& OutAdminPlayerUId) {
}

bool UPalUIGuildMenu::CanExitGuild() {
    return false;
}


