#include "PalArenaTestParameter.h"

FPalArenaTestParameter::FPalArenaTestParameter() {
    this->Player1Data = NULL;
    this->Player2Data = NULL;
    this->Player1StartPoint = NULL;
    this->Player2StartPoint = NULL;
    this->BattleBGMStateGroup = EPalAudioStateGroup::Player_Life;
    this->RideDelayTime = 0.20f;
    this->bRandomPartyMode = false;
    this->RandomPartyPalLevel = 50;
}

