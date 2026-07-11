#include "PalFindEnemyOption.h"

FPalFindEnemyOption::FPalFindEnemyOption() {
    this->bCheckAimTargetSocket = false;
    this->bTargetFriend = false;
    this->bTargetNeutral = false;
    this->bTargetPlayer = false;
    this->bFilterByHateList = false;
    this->bLineTrace = false;
    this->bIgnoreRidePal = false;
    this->TraceType = TraceTypeQuery1;
    this->MaxRangeCap = 0.00f;
}

