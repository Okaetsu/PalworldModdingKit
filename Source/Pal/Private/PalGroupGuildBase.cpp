#include "PalGroupGuildBase.h"
#include "Net/UnrealNetwork.h"

UPalGroupGuildBase::UPalGroupGuildBase() {
    this->PalStorage = NULL;
    this->BaseCampLevel = 1;
    this->bAllPlayerNotOnlineAndAlreadyReset = false;
    this->EnableResetPropertiesWhenPlayerDelete = false;
    this->GuildChestAllowedRoles.AddDefaulted(2);
}

void UPalGroupGuildBase::OnRep_UnderRaidBaseCampIds(TArray<FGuid> OldValue) {
}

void UPalGroupGuildBase::OnRep_Guildname() {
}

void UPalGroupGuildBase::OnRep_GuildMarker(TArray<FPalGuildMarkerData> OldMarkers) {
}

void UPalGroupGuildBase::OnRep_GuildChestAllowedRoles() {
}

void UPalGroupGuildBase::OnRep_BaseCampLevel(int32 OldValue) {
}

void UPalGroupGuildBase::OnReceivedWordFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode) {
}

void UPalGroupGuildBase::OnDeletePlayerAccount_ServerInternal(UPalPlayerAccount* DeleteAccount) {
}

void UPalGroupGuildBase::OnBaseCampRaidStarted_ServerInternal(UPalBaseCampModuleRaidDetect* RaidDetectModule) {
}

void UPalGroupGuildBase::OnBaseCampRaidEnded_ServerInternal(UPalBaseCampModuleRaidDetect* RaidDetectModule) {
}

bool UPalGroupGuildBase::IsWorkerCapacityLimited(int32 InLevel) const {
    return false;
}

bool UPalGroupGuildBase::IsRolePermissionsImmutable(EPalGuildRole Role) {
    return false;
}

bool UPalGroupGuildBase::IsGuildChestRoleAllowed(EPalGuildRole Role) const {
    return false;
}

bool UPalGroupGuildBase::HasGuildPermission(const FGuid& PlayerUId, EPalGuildPermission Permission) const {
    return false;
}

bool UPalGroupGuildBase::HasCurrentPermissionForRole(EPalGuildRole Role, EPalGuildPermission Permission) const {
    return false;
}

int32 UPalGroupGuildBase::GetWorkerCapacityNum(int32 InLevel) const {
    return 0;
}

EPalGuildRole UPalGroupGuildBase::GetPlayerRole(const FGuid& PlayerUId) const {
    return EPalGuildRole::None;
}

void UPalGroupGuildBase::GetGuildNameByCheckBlockedUser(FString& outName) const {
}

FString UPalGroupGuildBase::GetGuildName() const {
    return TEXT("");
}

TArray<EPalGuildPermission> UPalGroupGuildBase::GetGuildMasterPermissions() {
    return TArray<EPalGuildPermission>();
}

TArray<FPalGuildMarkerData> UPalGroupGuildBase::GetGuildMarkers(TArray<FGuid>& IdList) {
    return TArray<FPalGuildMarkerData>();
}

TArray<EPalGuildRole> UPalGroupGuildBase::GetGuildChestAllowedRoles() const {
    return TArray<EPalGuildRole>();
}

TArray<EPalGuildPermission> UPalGroupGuildBase::GetDefaultPermissionsForRole(EPalGuildRole Role) {
    return TArray<EPalGuildPermission>();
}

TArray<EPalGuildPermission> UPalGroupGuildBase::GetCurrentPermissionsForRole(EPalGuildRole Role) const {
    return TArray<EPalGuildPermission>();
}

int32 UPalGroupGuildBase::GetBaseCampMaxNumInGuildSpecLevel(int32 InLevel) const {
    return 0;
}

int32 UPalGroupGuildBase::GetBaseCampMaxNumInGuild() const {
    return 0;
}

int32 UPalGroupGuildBase::GetBaseCampLevel() const {
    return 0;
}

FText UPalGroupGuildBase::FormatLastOnlineTime(const UObject* WorldContextObject, const FDateTime& LastOnlineRealTime, bool bIsCurrentlyOnline) {
    return FText::GetEmpty();
}

bool UPalGroupGuildBase::CheckGuildChestAccess(const FGuid& PlayerUId) const {
    return false;
}

void UPalGroupGuildBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalGroupGuildBase, MapObjectInstanceIds_BaseCampPoint);
    DOREPLIFETIME(UPalGroupGuildBase, MapObjectInstanceIds_BaseCampPoint_Temporary);
    DOREPLIFETIME(UPalGroupGuildBase, BaseCampLevel);
    DOREPLIFETIME(UPalGroupGuildBase, GuildName);
    DOREPLIFETIME(UPalGroupGuildBase, LastGuildNameModifierPlayerUid);
    DOREPLIFETIME(UPalGroupGuildBase, UnderRaidBaseCampIds);
    DOREPLIFETIME(UPalGroupGuildBase, GuildMarkers);
    DOREPLIFETIME(UPalGroupGuildBase, GuildChestAllowedRoles);
}


