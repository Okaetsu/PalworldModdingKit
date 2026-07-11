#include "PalBaseCampModuleItemStackInfo.h"
#include "Net/UnrealNetwork.h"

UPalBaseCampModuleItemStackInfo::UPalBaseCampModuleItemStackInfo() {
}

void UPalBaseCampModuleItemStackInfo::OnUpdatePrivateLockPlayerUId_ServerInternal(UPalMapObjectItemChestModel* ItemChestModel) {
}

void UPalBaseCampModuleItemStackInfo::OnUpdatePasswordLock_ServerInternal(UPalMapObjectPasswordLockModule* PasswordLockModule, const FPalMapObjectPasswordLockPlayerInfo& NewPlayerInfo) {
}

void UPalBaseCampModuleItemStackInfo::OnUpdateItemContainer(UPalMapObjectItemContainerModule* ItemContainerModule) {
}

void UPalBaseCampModuleItemStackInfo::OnUpdateGuildSecurity_ServerInternal(UPalMapObjectGuildSecurityModule* SecurityModule, const TArray<EPalGuildRole>& NewAllowedRoles) {
}

void UPalBaseCampModuleItemStackInfo::OnRep_ItemStackRepInfoArray() {
}

void UPalBaseCampModuleItemStackInfo::OnNotAvailableConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel) {
}

void UPalBaseCampModuleItemStackInfo::OnAvailableConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel) {
}

void UPalBaseCampModuleItemStackInfo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBaseCampModuleItemStackInfo, ItemStackRepInfoArray);
}


