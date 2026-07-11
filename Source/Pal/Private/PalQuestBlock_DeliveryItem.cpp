#include "PalQuestBlock_DeliveryItem.h"
#include "Net/UnrealNetwork.h"

UPalQuestBlock_DeliveryItem::UPalQuestBlock_DeliveryItem() {
    this->TotalDeliveredCount = 0;
}

void UPalQuestBlock_DeliveryItem::OnRep_DeliveredCount() {
}

bool UPalQuestBlock_DeliveryItem::HasItem(const FGuid& PlayerUId) const {
    return false;
}

TMap<FPalDataTableRowName_ItemData, int32> UPalQuestBlock_DeliveryItem::GetRequireItemMap() const {
    return TMap<FPalDataTableRowName_ItemData, int32>();
}

void UPalQuestBlock_DeliveryItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalQuestBlock_DeliveryItem, TotalDeliveredCount);
}


