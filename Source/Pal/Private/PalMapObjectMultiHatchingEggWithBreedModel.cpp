#include "PalMapObjectMultiHatchingEggWithBreedModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectMultiHatchingEggWithBreedModel::UPalMapObjectMultiHatchingEggWithBreedModel() {
    this->BreedProgressTime = 0.00f;
    this->BreedRequiredRealTime = 0.00f;
    this->BreedStoppedReason = EPalBreedStoppedReason::None;
    this->BreedItemContainer = NULL;
}

void UPalMapObjectMultiHatchingEggWithBreedModel::RequestSortContainer_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectMultiHatchingEggWithBreedModel::OnUpdateAssignedCharacter(UPalWorkBase* Work) {
}

void UPalMapObjectMultiHatchingEggWithBreedModel::OnUnassignedCharacter_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& IndividualId) {
}

void UPalMapObjectMultiHatchingEggWithBreedModel::OnRep_UpdateBreedProgress() {
}

void UPalMapObjectMultiHatchingEggWithBreedModel::OnRep_BreedItemContainer() {
}

void UPalMapObjectMultiHatchingEggWithBreedModel::OnReassignedAfterSpawn_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& IndividualId) {
}

bool UPalMapObjectMultiHatchingEggWithBreedModel::HasConsumableBreedItem() const {
    return false;
}

EPalBreedStoppedReason UPalMapObjectMultiHatchingEggWithBreedModel::GetBreedStoppedReason() const {
    return EPalBreedStoppedReason::None;
}

float UPalMapObjectMultiHatchingEggWithBreedModel::GetBreedRequiredRealTime() const {
    return 0.0f;
}

float UPalMapObjectMultiHatchingEggWithBreedModel::GetBreedProgressTime() const {
    return 0.0f;
}

void UPalMapObjectMultiHatchingEggWithBreedModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectMultiHatchingEggWithBreedModel, BreedProgressTime);
    DOREPLIFETIME(UPalMapObjectMultiHatchingEggWithBreedModel, BreedRequiredRealTime);
    DOREPLIFETIME(UPalMapObjectMultiHatchingEggWithBreedModel, BreedStoppedReason);
    DOREPLIFETIME(UPalMapObjectMultiHatchingEggWithBreedModel, TargetBreedItemIds);
    DOREPLIFETIME(UPalMapObjectMultiHatchingEggWithBreedModel, BreedItemContainer);
}


