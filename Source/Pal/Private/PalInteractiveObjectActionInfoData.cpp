#include "PalInteractiveObjectActionInfoData.h"

FPalInteractiveObjectActionInfoData::FPalInteractiveObjectActionInfoData() {
    this->IndicatorType = EPalInteractiveObjectIndicatorType::None;
    this->buttonType = EPalInteractiveObjectButtonType::OnePush;
    this->longPushTime = 0.00f;
    this->ActionType = EPalActionType::None;
    this->bValid = true;
    this->bLockRiding = false;
    this->isInputComsume = true;
    this->bCanToggle = true;
}

