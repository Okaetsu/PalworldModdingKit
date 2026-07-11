#pragma once
#include "CoreMinimal.h"
#include "PalWorkProgressSuitabilityInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkProgressSuitabilityInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressEntryIndex;
    
    PAL_API FPalWorkProgressSuitabilityInfo();
};

