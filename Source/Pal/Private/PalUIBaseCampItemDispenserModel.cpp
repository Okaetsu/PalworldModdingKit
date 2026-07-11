#include "PalUIBaseCampItemDispenserModel.h"

UPalUIBaseCampItemDispenserModel::UPalUIBaseCampItemDispenserModel() {
}

void UPalUIBaseCampItemDispenserModel::RequestStartReplicateItemStackInfo() {
}

void UPalUIBaseCampItemDispenserModel::RequestMoveItemToInventory(const FPalItemId& ItemId, int64 StackCount) {
}

void UPalUIBaseCampItemDispenserModel::RequestMoveInventoryItemToBaseCamp(const TArray<FPalItemSlotId>& InventoryItemSlotIds) {
}

void UPalUIBaseCampItemDispenserModel::RequestEndReplicateItemStackInfo() {
}

void UPalUIBaseCampItemDispenserModel::OnUpdateItemStackRepInfo(UPalBaseCampModuleItemStackInfo* ItemStackInfoModule) {
}

void UPalUIBaseCampItemDispenserModel::OnReadyModuleItemStackInfo(UPalBaseCampModel* Model, UPalBaseCampFunctionModuleBase* Module) {
}

int64 UPalUIBaseCampItemDispenserModel::GetItemStackCount64(const FName& StaticItemId) const {
    return 0;
}

void UPalUIBaseCampItemDispenserModel::Debug_RequestMoveInventoryItemToBaseCamp_ByItemName(const FName StaticItemId) {
}

void UPalUIBaseCampItemDispenserModel::CollectItemStackInfo(TArray<FPalItemAndNum>& OutArray, TArray<FName>& OutIdArray) const {
}


