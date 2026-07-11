#include "PalLocationPointFastTravel.h"
#include "Net/UnrealNetwork.h"

UPalLocationPointFastTravel::UPalLocationPointFastTravel() {
    this->ShouldUnlockFlag = false;
    this->bUnlockMapPoint = false;
}

bool UPalLocationPointFastTravel::IsUnlockMapPoint() const {
    return false;
}

void UPalLocationPointFastTravel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalLocationPointFastTravel, LocationId);
    DOREPLIFETIME(UPalLocationPointFastTravel, ShouldUnlockFlag);
    DOREPLIFETIME(UPalLocationPointFastTravel, FastTravelPointID);
    DOREPLIFETIME(UPalLocationPointFastTravel, bUnlockMapPoint);
}


