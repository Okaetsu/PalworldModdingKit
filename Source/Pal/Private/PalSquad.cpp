#include "PalSquad.h"

UPalSquad::UPalSquad() {
    this->LeaderBB = NULL;
    this->LeashActor = NULL;
}

void UPalSquad::UpdateLeader(FPalInstanceID NextLeader) {
}

void UPalSquad::RemoveWhenDestoryActor(AActor* DestoryActor) {
}

void UPalSquad::GetMemberID(TArray<FPalInstanceID>& OutList) {
}

void UPalSquad::EscapeStart(AActor* StartActor, AActor* Target) {
}

void UPalSquad::DeadAndUpdateLeader(FPalDeadInfo DeadInfo) {
}

void UPalSquad::CombatStart(AActor* StartActor) {
}

void UPalSquad::AddCharacter(FPalInstanceID PalInstanceID) {
}


