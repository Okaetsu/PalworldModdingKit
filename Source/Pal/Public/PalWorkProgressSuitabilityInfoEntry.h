#pragma once
#include "CoreMinimal.h"
#include "EPalWorkSuitability.h"
#include "PalWorkProgressSuitabilityInfoEntry.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkProgressSuitabilityInfoEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWorkSuitability WorkSuitability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredRank;
    
    PAL_API FPalWorkProgressSuitabilityInfoEntry();
};

