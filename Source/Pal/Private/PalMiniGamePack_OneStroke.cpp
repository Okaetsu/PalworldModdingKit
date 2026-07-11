#include "PalMiniGamePack_OneStroke.h"

UPalMiniGamePack_OneStroke::UPalMiniGamePack_OneStroke() {
    this->ProcessorClass = NULL;
    this->GameDataAsset = NULL;
}

TArray<FName> UPalMiniGamePack_OneStroke::GetGameSettingRowNames() const {
    return TArray<FName>();
}


