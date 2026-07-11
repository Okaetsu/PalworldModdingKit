#include "PalWorkProgressMultiType.h"
#include "Net/UnrealNetwork.h"

UPalWorkProgressMultiType::UPalWorkProgressMultiType() {
}

void UPalWorkProgressMultiType::SetMaxStorableProgress(EPalWorkSuitability WorkSuitability, float InMaxStorableProgress) {
}

void UPalWorkProgressMultiType::SetAllMaxStorableProgress(float InMaxStorableProgress) {
}

void UPalWorkProgressMultiType::OnRep_SuitabilityInfoEntries() {
}

void UPalWorkProgressMultiType::OnRep_ProgressEntries() {
}

bool UPalWorkProgressMultiType::IsWorkTypeAtCapacity(EPalWorkSuitability WorkSuitability) const {
    return false;
}

bool UPalWorkProgressMultiType::IsAtCapacityForWorkType(EPalWorkSuitability WorkSuitability) const {
    return false;
}

bool UPalWorkProgressMultiType::IsAnyWorkTypeAtCapacity() const {
    return false;
}

bool UPalWorkProgressMultiType::HasWorkType(EPalWorkSuitability WorkSuitability) const {
    return false;
}

int32 UPalWorkProgressMultiType::GetRequiredRankForWorkType(EPalWorkSuitability WorkSuitability) const {
    return 0;
}

TArray<EPalWorkSuitability> UPalWorkProgressMultiType::GetRegisteredWorkTypes() const {
    return TArray<EPalWorkSuitability>();
}

float UPalWorkProgressMultiType::GetProgressRateForWorkType(EPalWorkSuitability WorkSuitability) const {
    return 0.0f;
}

TArray<FPalWorkProgressEntry> UPalWorkProgressMultiType::GetProgressEntries() const {
    return TArray<FPalWorkProgressEntry>();
}

bool UPalWorkProgressMultiType::CheckAndConsumeForProduction() {
    return false;
}

bool UPalWorkProgressMultiType::AreAllWorkTypesAtCapacity() const {
    return false;
}

void UPalWorkProgressMultiType::AddProgressForWorkType(EPalWorkSuitability WorkSuitability, float Amount) {
}

void UPalWorkProgressMultiType::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalWorkProgressMultiType, ProgressEntries);
    DOREPLIFETIME(UPalWorkProgressMultiType, SuitabilityInfoEntries);
}


