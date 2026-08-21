#include "PalFindEnemyOption.h"

FPalFindEnemyOption::FPalFindEnemyOption() {
    this->bCheckAimTargetSocket = false;
    this->bTargetFriend = false;
    this->bTargetNeutral = true;
    this->bTargetPlayer = true;
    this->bFilterByHateList = false;
    this->bLineTrace = false;
    this->bIgnoreRidePal = false;
    this->TraceType = TraceTypeQuery1;
    this->MaxRangeCap = 50000.00f;
}

