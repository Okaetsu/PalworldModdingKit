#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "PalAIBehaviorAnomalyDetector.generated.h"

class APalAIController;

UCLASS(Blueprintable)
class PAL_API UPalAIBehaviorAnomalyDetector : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DetectMinCompletionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectWindowSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectMaxClusterRadiusCm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DumpCooldownSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingBufferFrameCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectMaxEfficiencyRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectMinTotalPathCm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DetectMotionWindowFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugMarkerDurationSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetActionNameFilter;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
public:
    UPalAIBehaviorAnomalyDetector();

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bInEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool SelfVerifyDetector();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllState();
    
    UFUNCTION(BlueprintCallable)
    void PrintStatus();
    
    UFUNCTION(BlueprintCallable)
    void ManualDumpRecastTileLink(int32 FromTileX, int32 FromTileY, int32 FromLayer, int32 FromPolyIndex, int32 ToTileX, int32 ToTileY, int32 ToLayer, int32 ToPolyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ManualDumpRecastPointFull(float X, float Y, float Z, int32 FromTileX, int32 FromTileY, int32 FromLayer, int32 FromPolyIndex, int32 ToTileX, int32 ToTileY, int32 ToLayer, int32 ToPolyIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 ManualDumpRecastInRadius(FVector Origin, float SearchRadius, int32 MaxCorridorEdges);
    
    UFUNCTION(BlueprintCallable)
    void ManualDumpRecastController(APalAIController* AIC, int32 MaxCorridorEdges);
    
    UFUNCTION(BlueprintCallable)
    int32 ManualDumpRecastAllInTargetAction(int32 MaxCorridorEdges);
    
    UFUNCTION(BlueprintCallable)
    void ManualDumpNearestPal(FVector Origin, float SearchRadius);
    
    UFUNCTION(BlueprintCallable)
    void ManualDumpInRadius(FVector Origin, float SearchRadius);
    
    UFUNCTION(BlueprintCallable)
    void ManualDumpController(APalAIController* AIC);
    
    UFUNCTION(BlueprintCallable)
    int32 ManualDumpAllInTargetAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
};

