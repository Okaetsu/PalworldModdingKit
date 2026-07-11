#include "PalMapObjectColorSettingModule.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectColorSettingModule::UPalMapObjectColorSettingModule() {
}

void UPalMapObjectColorSettingModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectColorSettingModule, ColorEntries);
}


