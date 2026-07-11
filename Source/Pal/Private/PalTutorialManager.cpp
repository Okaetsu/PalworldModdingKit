#include "PalTutorialManager.h"

UPalTutorialManager::UPalTutorialManager() {
    this->MsgDataTable = NULL;
    this->TutorialTriggersDataTable = NULL;
}

void UPalTutorialManager::TutorialTrigger_Common(EPalTutorialTriggerConditionType TriggerType) {
}

void UPalTutorialManager::TutorialTrigger_Capture(FPalUIPalCaptureInfo CaptureInfo, bool CaptureSuccess) {
}

bool UPalTutorialManager::IsTutorialTriggered_Common(EPalTutorialTriggerConditionType TriggerType) const {
    return false;
}


