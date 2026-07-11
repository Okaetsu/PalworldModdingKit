#include "PalAICombatModule_KingWhale_Wild.h"
#include "Templates/SubclassOf.h"

UPalAICombatModule_KingWhale_Wild::UPalAICombatModule_KingWhale_Wild() {
    this->BattleEndDistance = 50000.00f;
    this->Phase1_AggroRange = 3000.00f;
    this->ReturnWazaRange = 10000.00f;
    this->ReturnWazaClass = NULL;
    this->CurrentBattlePhase = EPalKingWhaleBattlePhase::Phase0;
    this->bIsInterruptWaza = false;
    this->LastInterruptHPRate = 1.00f;
    this->VolumeActor = NULL;
    this->bEnableSharedCapture = true;
    this->SharedCaptureRadius = 50000.00f;
}

void UPalAICombatModule_KingWhale_Wild::OnIndividualCreated_ServerInternal(FPalInstanceID CreatedPalInstanceID) {
}

void UPalAICombatModule_KingWhale_Wild::OnCaptured_ServerInternal(APalCharacter* CapturedCharacter, APalCharacter* Attacker) {
}

bool UPalAICombatModule_KingWhale_Wild::IsInterruptWaza() const {
    return false;
}

EPalKingWhaleBattlePhase UPalAICombatModule_KingWhale_Wild::GetCurrentBattlePhase() const {
    return EPalKingWhaleBattlePhase::Phase0;
}

FVector UPalAICombatModule_KingWhale_Wild::GetBattleOriginLocation() const {
    return FVector{};
}

bool UPalAICombatModule_KingWhale_Wild::FindNextWaza(const FVector CenterLocation, TSubclassOf<UPalActionBase>& OutWaza, EPalWazaID& OutWazaID, bool& IsInterrupt) {
    return false;
}


