#include "PalUIWorldMap.h"

UPalUIWorldMap::UPalUIWorldMap() {
}

void UPalUIWorldMap::RequestRemoveGuildMarker(const FGuid NewId) {
}

void UPalUIWorldMap::RequestChangeGuildMarker(const FGuid NewId, FPalGuildMarkerData MarkerData) {
}

void UPalUIWorldMap::RequestAddGuildMarker(const FGuid NewId, FPalGuildMarkerData MarkerData) {
}

void UPalUIWorldMap::RemoveWorldMapIcon(UPalUIWorldMapIcon* IconWidget) {
}


void UPalUIWorldMap::RegisterRespawnPoint(const FVector& RespawnLocation, const FQuat& RespawnRotation) {
}

UPalUIWorldMapIcon* UPalUIWorldMap::GetNearestIconWidget(const FVector2D CenterLocation, const float BoxSize) const {
    return NULL;
}

void UPalUIWorldMap::Debug_SetLocation(const FVector& Location) {
}


void UPalUIWorldMap::AddWorldMapIcon(UPalUIWorldMapIcon* IconWidget) {
}


