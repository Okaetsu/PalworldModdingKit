#include "PalActionWazaBase.h"

UPalActionWazaBase::UPalActionWazaBase() {
    this->WazaID = EPalWazaID::None;
    this->bIsDisableTickOptimization = false;
    this->bCanCancelJump = true;
    this->bOverrideNetUpdateFrequencyDuringWaza = false;
    this->WazaNetUpdateFrequency = 0.00f;
    this->bForceNetUpdateOnWazaBegin = true;
    this->bForceNetUpdateOnWazaEnd = true;
    this->SoundPlayer = NULL;
    this->bApplyFullStomachCost = true;
}

void UPalActionWazaBase::StopAkSound() {
}

void UPalActionWazaBase::SetCancelJumpEnable(const bool IsEnable) {
}

void UPalActionWazaBase::PlayAkSound(UAkAudioEvent* AudioEvent) {
}

EPalWazaID UPalActionWazaBase::GetWazaID() const {
    return EPalWazaID::None;
}

APalPlayerCharacter* UPalActionWazaBase::GetRiderPlayer() {
    return NULL;
}


