#include "PalActiveSkill.h"

UPalActiveSkill::UPalActiveSkill() {
    this->WazaType = EPalWazaID::None;
    this->IsIgnoreRaycast = false;
    this->IsStopTimer = false;
    this->PendingDecreaseSeconds = 0.00f;
    this->RemainingSecondsAtStop = 0.00f;
    this->CoolDownMaxAtStop = 0.00f;
    this->DatabaseCoolTime = 0.00f;
    this->CoolDownTimeMax = 0.00f;
    this->bIsTransient = false;
    this->BulletEmiiterOverlap = NULL;
}

bool UPalActiveSkill::IsCoolTimeFinish() const {
    return false;
}


