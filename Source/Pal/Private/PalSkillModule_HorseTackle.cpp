#include "PalSkillModule_HorseTackle.h"

UPalSkillModule_HorseTackle::UPalSkillModule_HorseTackle() {
    this->bCanOtomoMultiTackle = false;
    this->LeaveTotalTime = 0.75f;
    this->LeaveTotalTimeForContinue = 0.50f;
    this->TurnTotalTime = 2.00f;
    this->TurnBrakeTime = 0.25f;
    this->ContinueProbability = 0.75f;
    this->TackleMaxCount = 1.00f;
    this->OneShotLoopEffect = false;
    this->bSuppressFinalTackleEndUntilPassingTarget = false;
    this->FinalTacklePassingTargetTimeout = 1.50f;
    this->FinalTackleEndDelayAfterPassingTarget = 0.00f;
    this->AllowStepUpDistance = 200.00f;
    this->AllowLedgeOffDistance = 150.00f;
}


