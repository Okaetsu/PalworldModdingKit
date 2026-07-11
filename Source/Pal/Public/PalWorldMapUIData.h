#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalPlayingWorldMapUIData.h"
#include "PalUIBossSpawnerLoactionData.h"
#include "PalWorldMapUIDataTableRow.h"
#include "PalWorldMapUIData.generated.h"

class UDataTable;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class PAL_API UPalWorldMapUIData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WorldMapDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPlayingWorldMapUIData> WorldMapDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> HiddenLocationFlagMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalUIBossSpawnerLoactionData> AllBossSpawnerUIDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint8> CachedTextureRawData_ForV3Convert;
    
public:
    UPalWorldMapUIData();
    UFUNCTION(BlueprintCallable)
    void UpdateHiddenLocationFlagByLocation(const FVector& Location, float BoxSize);
    
    UFUNCTION(BlueprintCallable)
    void UnlockByScroll(const float& Diameter, const FVector2f& ActorLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetupHiddenLocationData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
    void RemoveMaskByTexture(const UObject* WorldContextObject, UTexture2D* RemoveMaskTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
    void RemoveMaskByLocation(const UObject* WorldContextObject, const FVector& WorldLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextureRenderTarget2D* GetRenderTargetByMapName(const FName& MapName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMapUIRowDataByWorldLocation(const FVector& Location, FPalWorldMapUIDataTableRow& OutData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMapUIRowData(const FName& MapName, FPalWorldMapUIDataTableRow& OutData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMapNameByWorldLocation(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHiddenLocationFlag(const FName& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextureRenderTarget2D* GetCurrentRenderTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentPlayMapUIRowData(FPalWorldMapUIDataTableRow& OutData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentPlayMapName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllWorldMapNames(TArray<FName>& OutMapNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllUnlockedWorldMapNames(TArray<FName>& OutMapNames) const;
    
    UFUNCTION(BlueprintCallable)
    void CreateRenderTarget();
    
};

