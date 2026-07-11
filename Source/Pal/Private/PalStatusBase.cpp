#include "PalStatusBase.h"
#include "Net/UnrealNetwork.h"

UPalStatusBase::UPalStatusBase() {
    this->bIsEndStatus = false;
    this->statusID = EPalStatusID::None;
    this->Duration = -1.00f;
    this->bIsNerverEnd = false;
    this->bIsIgnoreRemoveAll = false;
    this->DurationTimer = 0.00f;
}

void UPalStatusBase::TickStatus_Implementation(float DeltaTime) {
}

void UPalStatusBase::SetHalfDurationTimer() {
}

void UPalStatusBase::OnEndStatus_Implementation() {
}

void UPalStatusBase::OnBreakStatus_Implementation() {
}

void UPalStatusBase::OnBeginStatus_Implementation() {
}

void UPalStatusBase::OnBeginSomeStatus_Implementation() {
}

bool UPalStatusBase::IsEndStatus_Implementation() const {
    return false;
}

float UPalStatusBase::GetRemainingTime() const {
    return 0.0f;
}

AActor* UPalStatusBase::GetOwner() const {
    return NULL;
}

float UPalStatusBase::GetDuration() const {
    return 0.0f;
}

void UPalStatusBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalStatusBase, DynamicParameter);
    DOREPLIFETIME(UPalStatusBase, statusID);
    DOREPLIFETIME(UPalStatusBase, InstanceGuid);
    DOREPLIFETIME(UPalStatusBase, DurationTimer);
}


