#include "PalArenaRule.h"

FPalArenaRule::FPalArenaRule() {
    this->bLevelSync = false;
    this->TimeLimit = 2;
    this->PlayerDamageRate = 1.00f;
    this->PalDamageRate = 1.00f;
    this->bBossPalRestricion = false;
    this->bLegendPalRestricion = false;
    this->bHumanRestricion = false;
    this->bRideRestricion = false;
    this->bDuplicatePalRestricion = false;
}

