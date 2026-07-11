#include "PalLocationPoint_LevelObject.h"
#include "Net/UnrealNetwork.h"

UPalLocationPoint_LevelObject::UPalLocationPoint_LevelObject() {
    this->ObservedRecordData = NULL;
    this->RelicType = EPalRelicType::CapturePower;
}

void UPalLocationPoint_LevelObject::OnUpdateRelicObtainedRecord(FName Key, bool bObtained) {
}

EPalRelicType UPalLocationPoint_LevelObject::GetRelicType() const {
    return EPalRelicType::CapturePower;
}

void UPalLocationPoint_LevelObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalLocationPoint_LevelObject, LevelObjectInstanceId);
    DOREPLIFETIME(UPalLocationPoint_LevelObject, InitialLocationCache);
    DOREPLIFETIME(UPalLocationPoint_LevelObject, RelicType);
}


