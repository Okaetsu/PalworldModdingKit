#include "PalLogWidgetBase.h"

UPalLogWidgetBase::UPalLogWidgetBase() {
    this->destroyTime = 0.00f;
    this->ElapsedTime = 0.00f;
    this->logState = EPalLogWidgetState::In;
    this->LogType = EPalLogType::None;
}

void UPalLogWidgetBase::StartDisplayLog(float inDestroyTime) {
}

void UPalLogWidgetBase::SetState(EPalLogWidgetState ChangeState) {
}






