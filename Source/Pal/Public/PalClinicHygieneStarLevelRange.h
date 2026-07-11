#pragma once
#include "CoreMinimal.h"
#include "PalClinicHygieneStarLevelRange.generated.h"

USTRUCT(BlueprintType)
struct FPalClinicHygieneStarLevelRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LowerBoundPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpperBoundPercent;
    
    PAL_API FPalClinicHygieneStarLevelRange();
};

