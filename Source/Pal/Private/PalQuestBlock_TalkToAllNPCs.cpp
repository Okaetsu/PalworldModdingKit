#include "PalQuestBlock_TalkToAllNPCs.h"
#include "Net/UnrealNetwork.h"

UPalQuestBlock_TalkToAllNPCs::UPalQuestBlock_TalkToAllNPCs() {
    this->CurrentTalkCount = 0;
}

void UPalQuestBlock_TalkToAllNPCs::OnRep_CurrentTalkCount() {
}

void UPalQuestBlock_TalkToAllNPCs::OnNPCTalkEnd(UPalNPCTalkFlowComponent* TalkFlowComponent, const FName& UniqueNPCID) {
}

bool UPalQuestBlock_TalkToAllNPCs::HasTalkedToNPC(int32 NPCIndex) const {
    return false;
}

int32 UPalQuestBlock_TalkToAllNPCs::GetRequireCount() const {
    return 0;
}

void UPalQuestBlock_TalkToAllNPCs::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalQuestBlock_TalkToAllNPCs, CurrentTalkCount);
}


