#include "PalMapObjectFarmBlockRecipeModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectFarmBlockRecipeModel::UPalMapObjectFarmBlockRecipeModel() {
    this->RecipeStateBehaviourMachine = NULL;
    this->MenuUIClass = NULL;
}

void UPalMapObjectFarmBlockRecipeModel::SelectCrop_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectFarmBlockRecipeModel::OnRep_CropDataIdForNotify() {
}

TArray<FName> UPalMapObjectFarmBlockRecipeModel::GetAvailableCropDataIds() const {
    return TArray<FName>();
}

void UPalMapObjectFarmBlockRecipeModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectFarmBlockRecipeModel, AvailableCropDataIds);
    DOREPLIFETIME(UPalMapObjectFarmBlockRecipeModel, CropDataIdForNotify);
}


