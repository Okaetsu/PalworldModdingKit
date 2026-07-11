#include "PalMapObjectOperationalLoadModule.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectOperationalLoadModule::UPalMapObjectOperationalLoadModule() {
    this->CurrentLoad = 0.00f;
    this->bIsOverloaded = false;
    this->LoadAccumulationRate = 1.00f;
    this->MaxLoad = 100.00f;
    this->LoadReductionPerTick = 20.00f;
    this->WarningThresholdRatio = 80.00f;
    this->LoadReductionThresholdRatio = 80.00f;
    this->bWarningTriggered = false;
    this->bLoadReductionTriggered = false;
}

void UPalMapObjectOperationalLoadModule::OnRep_CurrentLoad() {
}

void UPalMapObjectOperationalLoadModule::OnRep_bIsOverloaded() {
}

bool UPalMapObjectOperationalLoadModule::NeedsLoadReduction() const {
    return false;
}

bool UPalMapObjectOperationalLoadModule::IsOverloaded() const {
    return false;
}

float UPalMapObjectOperationalLoadModule::GetLoadRatio() const {
    return 0.0f;
}

void UPalMapObjectOperationalLoadModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectOperationalLoadModule, CurrentLoad);
    DOREPLIFETIME(UPalMapObjectOperationalLoadModule, bIsOverloaded);
}


