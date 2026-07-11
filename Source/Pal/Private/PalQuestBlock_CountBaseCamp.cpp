#include "PalQuestBlock_CountBaseCamp.h"
#include "Net/UnrealNetwork.h"

UPalQuestBlock_CountBaseCamp::UPalQuestBlock_CountBaseCamp() {
    this->RequireCampCount = 0;
    this->NowBaseCampCount = 0;
}

void UPalQuestBlock_CountBaseCamp::OnBaseCampRemoved(const FGuid BaseCampId) {
}

void UPalQuestBlock_CountBaseCamp::OnBaseCampCreated(const FGuid BaseCampId) {
}

void UPalQuestBlock_CountBaseCamp::OnBaseCampAvailable(UPalBaseCampModel* Model) {
}

void UPalQuestBlock_CountBaseCamp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalQuestBlock_CountBaseCamp, NowBaseCampCount);
}


