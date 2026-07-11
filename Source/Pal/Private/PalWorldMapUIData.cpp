#include "PalWorldMapUIData.h"

UPalWorldMapUIData::UPalWorldMapUIData() {
    this->WorldMapDataTable = NULL;
}

void UPalWorldMapUIData::UpdateHiddenLocationFlagByLocation(const FVector& Location, float BoxSize) {
}

void UPalWorldMapUIData::UnlockByScroll(const float& Diameter, const FVector2f& ActorLocation) {
}

void UPalWorldMapUIData::SetupHiddenLocationData() {
}



UTextureRenderTarget2D* UPalWorldMapUIData::GetRenderTargetByMapName(const FName& MapName) const {
    return NULL;
}

bool UPalWorldMapUIData::GetMapUIRowDataByWorldLocation(const FVector& Location, FPalWorldMapUIDataTableRow& OutData) const {
    return false;
}

bool UPalWorldMapUIData::GetMapUIRowData(const FName& MapName, FPalWorldMapUIDataTableRow& OutData) const {
    return false;
}

FName UPalWorldMapUIData::GetMapNameByWorldLocation(const FVector& Location) const {
    return NAME_None;
}

bool UPalWorldMapUIData::GetHiddenLocationFlag(const FName& Key) const {
    return false;
}

UTextureRenderTarget2D* UPalWorldMapUIData::GetCurrentRenderTarget() const {
    return NULL;
}

bool UPalWorldMapUIData::GetCurrentPlayMapUIRowData(FPalWorldMapUIDataTableRow& OutData) const {
    return false;
}

FName UPalWorldMapUIData::GetCurrentPlayMapName() const {
    return NAME_None;
}

void UPalWorldMapUIData::GetAllWorldMapNames(TArray<FName>& OutMapNames) const {
}

void UPalWorldMapUIData::GetAllUnlockedWorldMapNames(TArray<FName>& OutMapNames) const {
}

void UPalWorldMapUIData::CreateRenderTarget() {
}


