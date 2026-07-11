#include "PalMapObjectGuildSecurityModule.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectGuildSecurityModule::UPalMapObjectGuildSecurityModule() {
    this->AllowedRoles.AddDefaulted(2);
    this->bIsGuildChestModule = false;
}

void UPalMapObjectGuildSecurityModule::RequestUpdateAllowedRoles_ServerInternal(int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectGuildSecurityModule::RequestUpdateAllowedRoles(const EPalGuildRole TargetRole, const bool bOn) {
}

void UPalMapObjectGuildSecurityModule::OpenMenuSecuritySetting() {
}

void UPalMapObjectGuildSecurityModule::OnUpdateGuildChestAllowedRoles(UPalGroupGuildBase* Guild, const TArray<EPalGuildRole>& NewRoles) {
}

void UPalMapObjectGuildSecurityModule::OnRep_GuildChestMode() {
}

void UPalMapObjectGuildSecurityModule::OnRep_AllowedRoles() {
}

bool UPalMapObjectGuildSecurityModule::IsRoleAllowed(EPalGuildRole Role) const {
    return false;
}

bool UPalMapObjectGuildSecurityModule::HasPasswordLock() const {
    return false;
}

TArray<EPalGuildRole> UPalMapObjectGuildSecurityModule::GetAllowedRoles() const {
    return TArray<EPalGuildRole>();
}

bool UPalMapObjectGuildSecurityModule::CheckGuildSecurityAccess(const FGuid& PlayerUId) const {
    return false;
}

bool UPalMapObjectGuildSecurityModule::CanPlayerEditSecuritySettings(const FGuid& PlayerUId) const {
    return false;
}

void UPalMapObjectGuildSecurityModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectGuildSecurityModule, AllowedRoles);
    DOREPLIFETIME(UPalMapObjectGuildSecurityModule, bIsGuildChestModule);
}


