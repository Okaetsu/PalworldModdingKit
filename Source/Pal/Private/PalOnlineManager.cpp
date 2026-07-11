#include "PalOnlineManager.h"

UPalOnlineManager::UPalOnlineManager() {
}

void UPalOnlineManager::OnUserInfoWordFilterCompleted(UPalUserInfoWordFilterWaiter* Waiter, bool bSuccess, FGuid PlayerUId, const FString& FilteredPlayerName, FGuid GroupId, const FString& FilteredGuildName) {
}

void UPalOnlineManager::OnUpdateGroupId(UPalIndividualCharacterParameter* IndividualParameter, const FGuid& GroupId) {
}

void UPalOnlineManager::OnUpdatedGuildNameWordFilterCompleted(UPalUserInfoWordFilterWaiter* Waiter, bool bSuccess, FGuid PlayerUId, const FString& FilteredPlayerName, FGuid GroupId, const FString& FilteredGuildName) {
}

void UPalOnlineManager::OnUpdatedGuildNameWithGroupId(UPalGuildNameUpdateWatcher* Watcher, FGuid GroupId, const FString& NewGuildName) {
}

void UPalOnlineManager::OnSessionMemberChangedPlayerUId(APalPlayerState* PlayerState) {
}

void UPalOnlineManager::OnQueryGDKUserResolvePrivilegeWithUI(UGDKPrivilegeAsyncFunction* PrivilegeAsyncFunction) {
}

void UPalOnlineManager::OnQueryGDKPrivacyCheckPermissionForAnonymousUser(UGDKPrivacyPermissionForAnonymousUserAsyncFunction* PrivacyPermissionAsyncFunction) {
}

void UPalOnlineManager::OnQueryGDKPrivacyCheckPermission(UGDKPrivacyPermissionAsyncFunction* PrivacyPermissionAsyncFunction) {
}

void UPalOnlineManager::OnNickNameUpdateWordFilterCompleted(UPalUserInfoWordFilterWaiter* Waiter, bool bSuccess, FGuid PlayerUId, const FString& FilteredPlayerName, FGuid GroupId, const FString& FilteredGuildName) {
}

void UPalOnlineManager::OnNickNameUpdated(UPalIndividualCharacterParameter* IndividualParameter, const FString& NewNickName) {
}

void UPalOnlineManager::OnCompleteGetEuraVersions(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode) {
}


