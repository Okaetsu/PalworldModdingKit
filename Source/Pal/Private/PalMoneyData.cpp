#include "PalMoneyData.h"

UPalMoneyData::UPalMoneyData() {
    this->parentInventoryData = NULL;
}

void UPalMoneyData::RequestCalcMoney() {
}

void UPalMoneyData::OnUpdateInventorylContainer(UPalItemContainer* Container) {
}

void UPalMoneyData::OnUpdateBaseCampItemContainer(UPalBaseCampModuleItemStorage* This, UPalItemContainer* UpdatedContainer) {
}

void UPalMoneyData::OnLocalPlayerGuildChanged(APalPlayerState* PlayerState) {
}

void UPalMoneyData::OnLeaveBaseCamp() {
}

void UPalMoneyData::OnEnterBaseCamp(UPalBaseCampModel* Model) {
}

int64 UPalMoneyData::GetNowMoney() const {
    return 0;
}


