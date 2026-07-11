#pragma once
#include "CoreMinimal.h"
#include "EPalWorkSuitability.h"
#include "PalUIMapObjectStatusIndicatorWorkSuitabilityDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FPalUIMapObjectStatusIndicatorWorkSuitabilityDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWorkSuitability WorkSuitability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequireRank;
    
    PAL_API FPalUIMapObjectStatusIndicatorWorkSuitabilityDisplayData();
};

