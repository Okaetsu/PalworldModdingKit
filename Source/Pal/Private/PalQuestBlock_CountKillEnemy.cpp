#include "PalQuestBlock_CountKillEnemy.h"
#include "Net/UnrealNetwork.h"

UPalQuestBlock_CountKillEnemy::UPalQuestBlock_CountKillEnemy() {
    this->RequireCount = 0;
    this->CurrentCount = 0;
    this->bCountCapture = false;
    this->CountOnCapture = 0;
    this->RequiredRange = -1.00f;
}

void UPalQuestBlock_CountKillEnemy::OnRep_Count() {
}

void UPalQuestBlock_CountKillEnemy::OnKillCharacter(const FPalDeadInfo& DeadInfo) {
}

void UPalQuestBlock_CountKillEnemy::OnCaptureCharacter(UPalIndividualCharacterHandle* CharacterHandle) {
}

void UPalQuestBlock_CountKillEnemy::AddKillCount(int32 Count) {
}

void UPalQuestBlock_CountKillEnemy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalQuestBlock_CountKillEnemy, CurrentCount);
}


