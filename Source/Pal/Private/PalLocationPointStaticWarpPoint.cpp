#include "PalLocationPointStaticWarpPoint.h"
#include "Net/UnrealNetwork.h"

UPalLocationPointStaticWarpPoint::UPalLocationPointStaticWarpPoint() {
}

bool UPalLocationPointStaticWarpPoint::IsUnlocked() const {
    return false;
}

FTransform UPalLocationPointStaticWarpPoint::GetPairedDestinationTransform() const {
    return FTransform{};
}

FGuid UPalLocationPointStaticWarpPoint::GetPairedDestinationLevelObjectId() const {
    return FGuid{};
}

FGuid UPalLocationPointStaticWarpPoint::GetLevelObjectId() const {
    return FGuid{};
}

UPalLocationPointStaticWarpPoint* UPalLocationPointStaticWarpPoint::FindPairedLocationPoint() const {
    return NULL;
}

void UPalLocationPointStaticWarpPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalLocationPointStaticWarpPoint, LevelObjectId);
    DOREPLIFETIME(UPalLocationPointStaticWarpPoint, PairedDestinationLevelObjectId);
}


