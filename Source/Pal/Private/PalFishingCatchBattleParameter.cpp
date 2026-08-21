#include "PalFishingCatchBattleParameter.h"

FPalFishingCatchBattleParameter::FPalFishingCatchBattleParameter() {
    this->RequiredCatchAmount = 1000.00f;
    this->DefaultProgressAmount = 200.00f;
    this->SuccessFightCatchAmount = 1.00f;
    this->MissFightCatchAmount = 1.00f;
    this->CheckFishPickInterval = 1.00f;
    this->FishingInputAcceptTime = 5.00f;
    this->SinkWaitMinTime = 0.00f;
    this->SinkWaitMaxTime = 6.00f;
    this->GaugeMaxSize = 100.00f;
    this->HitBarDefaultSize = 10.00f;
    this->HitBarMoveSpeed = 10.00f;
    this->HitBarMoveGravity = 10.00f;
    this->HitBarMoveLiftForce = 20.00f;
    this->InitFishPos = 0.00f;
    this->InitHitBarPos = 0.00f;
    this->StartDelayTime = 1.00f;
    this->OverrideSearchAreaRate = 0.50f;
    this->OverrideSearchProbability = 90.00f;
    this->FirstFishingMissFightCatchAmountRate = 0.00f;
}

