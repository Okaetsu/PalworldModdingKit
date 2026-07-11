#include "PalMapObjectModelConnectorSlopedRoofCornerReverse.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectModelConnectorSlopedRoofCornerReverse::UPalMapObjectModelConnectorSlopedRoofCornerReverse() {
}

void UPalMapObjectModelConnectorSlopedRoofCornerReverse::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectModelConnectorSlopedRoofCornerReverse, DiagonalUpConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorSlopedRoofCornerReverse, DiagonalLeftConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorSlopedRoofCornerReverse, DiagonalBackConnectInfo);
}


