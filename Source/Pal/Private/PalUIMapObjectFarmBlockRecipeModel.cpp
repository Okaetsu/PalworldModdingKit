#include "PalUIMapObjectFarmBlockRecipeModel.h"

UPalUIMapObjectFarmBlockRecipeModel::UPalUIMapObjectFarmBlockRecipeModel() {
}

void UPalUIMapObjectFarmBlockRecipeModel::SelectCropDataId(FName CropDataId) {
}

void UPalUIMapObjectFarmBlockRecipeModel::RequestSelectCrop() {
}

FName UPalUIMapObjectFarmBlockRecipeModel::GetCurrentCropDataId() const {
    return NAME_None;
}

TArray<FPalUIFarmBlockRecipeCropInfo> UPalUIMapObjectFarmBlockRecipeModel::GetAvailableCropInfos() const {
    return TArray<FPalUIFarmBlockRecipeCropInfo>();
}

bool UPalUIMapObjectFarmBlockRecipeModel::CanRequestSelectCrop() const {
    return false;
}


