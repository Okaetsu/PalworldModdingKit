#include "PalBuildObjectLampBase.h"
#include "PalMapObjectLampModel.h"

APalBuildObjectLampBase::APalBuildObjectLampBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ConcreteModelClass = UPalMapObjectLampModel::StaticClass();
    this->bDisableLampModelFeatures = false;
    this->bDisableLampSwitchFeatures = false;
    this->bDisableLampLightColorChangeFeatures = false;
}


void APalBuildObjectLampBase::OnUpdateSwitchState(UPalMapObjectSwitchModule* SwitchModule) {
}

void APalBuildObjectLampBase::OnReadySwitchModule(UPalMapObjectConcreteModelBase* Model, UPalMapObjectConcreteModelModuleBase* Module) {
}


void APalBuildObjectLampBase::OnLightColorChanged(UPalMapObjectLampModel* LampModel, const FLinearColor& Color) {
}



