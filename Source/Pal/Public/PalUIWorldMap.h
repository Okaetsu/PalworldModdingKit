#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EPalWorldMapType.h"
#include "PalGuildMarkerData.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIWorldMap.generated.h"

class UPalUIWorldMapIcon;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIWorldMap : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    UPalUIWorldMap();

protected:
    UFUNCTION(BlueprintCallable)
    void RequestRemoveGuildMarker(const FGuid NewId);
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeGuildMarker(const FGuid NewId, FPalGuildMarkerData MarkerData);
    
    UFUNCTION(BlueprintCallable)
    void RequestAddGuildMarker(const FGuid NewId, FPalGuildMarkerData MarkerData);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWorldMapIcon(UPalUIWorldMapIcon* IconWidget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveMaskByTexture(UTexture2D* RemoveMaskTexture);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterRespawnPoint(const FVector& RespawnLocation, const FQuat& RespawnRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalUIWorldMapIcon* GetNearestIconWidget(const FVector2D CenterLocation, const float BoxSize) const;
    
    UFUNCTION(BlueprintCallable)
    void Debug_SetLocation(const FVector& Location);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateWorldMapData(EPalWorldMapType worldMapType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddWorldMapIcon(UPalUIWorldMapIcon* IconWidget);
    
};

