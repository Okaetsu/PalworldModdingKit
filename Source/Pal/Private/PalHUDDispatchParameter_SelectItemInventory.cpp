#include "PalHUDDispatchParameter_SelectItemInventory.h"

UPalHUDDispatchParameter_SelectItemInventory::UPalHUDDispatchParameter_SelectItemInventory() {
    this->shouldSelectNum = false;
    this->TargetCharacter = NULL;
}

void UPalHUDDispatchParameter_SelectItemInventory::InvokeCallback(const FPalItemSlotId& ItemSlotId, const int64 itemNum) {
}


