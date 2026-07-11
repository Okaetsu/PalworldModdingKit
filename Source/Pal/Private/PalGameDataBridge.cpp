#include "PalGameDataBridge.h"

UPalGameDataBridge::UPalGameDataBridge() {
    this->CollectIntervalSec = 1.00f;
    this->StaticStageCacheSettleDelaySec = 5.00f;
}

void UPalGameDataBridge::UnregisterPalBox(APalBuildObjectBaseCampPoint* PalBox) {
}

void UPalGameDataBridge::UnregisterCharacter(APalCharacter* Character) {
}

bool UPalGameDataBridge::TryGetLatestGameDataJson(FString& OutJson) const {
    return false;
}

void UPalGameDataBridge::SetOutputEnabled(bool bEnabled) {
}

void UPalGameDataBridge::SetGameDataAPIEnabled(bool bEnabled) {
}

void UPalGameDataBridge::SetCollectIntervalSec(float InIntervalSec) {
}

void UPalGameDataBridge::RegisterPalBox(APalBuildObjectBaseCampPoint* PalBox) {
}

void UPalGameDataBridge::RegisterCharacter(APalCharacter* Character) {
}

bool UPalGameDataBridge::IsOutputEnabled() const {
    return false;
}

bool UPalGameDataBridge::IsGameDataAPIEnabled() const {
    return false;
}

int32 UPalGameDataBridge::GetRegisteredPalBoxCount() const {
    return 0;
}

int32 UPalGameDataBridge::GetRegisteredCharacterCount() const {
    return 0;
}

float UPalGameDataBridge::GetCollectIntervalSec() const {
    return 0.0f;
}


