#pragma once
#include "CoreMinimal.h"
#include "PalOneStrokeGameGenerateSettingData.generated.h"

USTRUCT(BlueprintType)
struct FPalOneStrokeGameGenerateSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObstacleCount;
    
    PAL_API FPalOneStrokeGameGenerateSettingData();
};

