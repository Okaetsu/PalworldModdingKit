#include "PalPlayerDataCharacterMakeInfo.h"

FPalPlayerDataCharacterMakeInfo::FPalPlayerDataCharacterMakeInfo() {
    this->BodyMeshName = TEXT("Default");
    this->HeadMeshName = TEXT("Default");
    this->HairMeshName = TEXT("Default");
    this->EquipmentBodyMeshName = TEXT("Default_EquipBody");
    this->EquipmentHeadMeshName = TEXT("Default_EquipHead");
    this->DisableHeadDressingFlag = false;
    this->DisableBodyDressingFlag = false;
    this->DisableGliderDressingFlag = false;
    this->ArmVolume = 0.00f;
    this->TorsoVolume = 0.00f;
    this->LegVolume = 0.00f;
    this->VoiceID = 0;
}

