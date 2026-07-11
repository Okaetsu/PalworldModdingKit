#include "PalGuildDebugReplicator.h"
#include "Net/UnrealNetwork.h"

UPalGuildDebugReplicator::UPalGuildDebugReplicator() {
    this->DebugLastSecurityCheckResult = false;
    this->DebugLastValidateResult = EPalGroupOperationResult::Success;
}

void UPalGuildDebugReplicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalGuildDebugReplicator, DebugLastSecurityCheckResult);
    DOREPLIFETIME(UPalGuildDebugReplicator, DebugLastSecurityCheckMapObjectId);
    DOREPLIFETIME(UPalGuildDebugReplicator, DebugLastValidateResult);
}


