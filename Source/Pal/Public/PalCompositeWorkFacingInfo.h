#pragma once
#include "CoreMinimal.h"
#include "EPalWorkSuitability.h"
#include "PalCompositeWorkFacingInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalCompositeWorkFacingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWorkSuitability WorkSuitability;
    
    PAL_API FPalCompositeWorkFacingInfo();
};

