#pragma once
#include "CoreMinimal.h"
#include "PalOneStrokeGridCoord.h"
#include "PalOneStrokeGameSettingData.generated.h"

USTRUCT(BlueprintType)
struct FPalOneStrokeGameSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOneStrokeGridCoord StartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOneStrokeGridCoord GoalPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalOneStrokeGridCoord> ObstaclePositions;
    
    PAL_API FPalOneStrokeGameSettingData();
};

