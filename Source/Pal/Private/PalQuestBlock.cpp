#include "PalQuestBlock.h"
#include "Net/UnrealNetwork.h"

UPalQuestBlock::UPalQuestBlock() {
    this->IsAutoComplete = false;
    this->bHideFromUI = false;
    this->CanCompleteFlag = false;
}

void UPalQuestBlock::ShowFixedLocationPoint(int32 Index) {
}

void UPalQuestBlock::SetCanComplete(bool flag) {
}

void UPalQuestBlock::ReturnBlock_ServerInternal() {
}




void UPalQuestBlock::OnRep_HiddenFixedLocationPointIndices() {
}

void UPalQuestBlock::OnRep_CanCompleteFlag() {
}


void UPalQuestBlock::NotifyUpdateQuest_Client() {
}

void UPalQuestBlock::HideFixedLocationPoint(int32 Index) {
}


FGuid UPalQuestBlock::GetOwnerPlayerUId() const {
    return FGuid{};
}


bool UPalQuestBlock::CanComplete() const {
    return false;
}

void UPalQuestBlock::CallUpdateBlockDelegate_ForBP() {
}

void UPalQuestBlock::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalQuestBlock, CanCompleteFlag);
    DOREPLIFETIME(UPalQuestBlock, HiddenFixedLocationPointIndices);
}


