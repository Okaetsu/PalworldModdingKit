#include "PalUIMapObjectMultiProductModel.h"

UPalUIMapObjectMultiProductModel::UPalUIMapObjectMultiProductModel() {
}

void UPalUIMapObjectMultiProductModel::SelectProductId(FName ProductId) {
}

void UPalUIMapObjectMultiProductModel::RequestSelectMode() {
}

FName UPalUIMapObjectMultiProductModel::GetCurrentProductId() const {
    return NAME_None;
}

TArray<FPalUIMultiProductModeInfo> UPalUIMapObjectMultiProductModel::GetAvailableModeInfos() const {
    return TArray<FPalUIMultiProductModeInfo>();
}

bool UPalUIMapObjectMultiProductModel::CanRequestSelectMode() const {
    return false;
}


