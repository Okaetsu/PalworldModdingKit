#include "PalLevelObject_Talkable.h"

APalLevelObject_Talkable::APalLevelObject_Talkable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TalkFlowComponent = NULL;
}

void APalLevelObject_Talkable::OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}


void APalLevelObject_Talkable::OnCompleteSyncPlayer(APalPlayerState* PlayerState) {
}

TArray<FName> APalLevelObject_Talkable::GetRowNames() const {
    return TArray<FName>();
}

FText APalLevelObject_Talkable::GetIndicatorText_BP_Implementation(const UObject* WorldObjectContext, EPalInteractiveObjectIndicatorType IndicatorType) const {
    return FText::GetEmpty();
}



