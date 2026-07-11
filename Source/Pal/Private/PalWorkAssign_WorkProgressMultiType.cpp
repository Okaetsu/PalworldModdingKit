#include "PalWorkAssign_WorkProgressMultiType.h"
#include "Net/UnrealNetwork.h"

UPalWorkAssign_WorkProgressMultiType::UPalWorkAssign_WorkProgressMultiType() {
    this->AssignedWorkSuitability = EPalWorkSuitability::None;
    this->AssignedWorkType = EPalWorkType::None;
    this->AssignedWorkActionType = EPalActionType::None;
}

void UPalWorkAssign_WorkProgressMultiType::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalWorkAssign_WorkProgressMultiType, AssignedWorkSuitability);
    DOREPLIFETIME(UPalWorkAssign_WorkProgressMultiType, AssignedWorkType);
    DOREPLIFETIME(UPalWorkAssign_WorkProgressMultiType, AssignedWorkActionType);
}


