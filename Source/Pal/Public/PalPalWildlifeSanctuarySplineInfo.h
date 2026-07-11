#pragma once
#include "CoreMinimal.h"
#include "EPalPalWildlifeSanctuarySplineEventType.h"
#include "PalPalWildlifeSanctuarySplineInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalPalWildlifeSanctuarySplineInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalPalWildlifeSanctuarySplineEventType EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressTime;
    
    PAL_API FPalPalWildlifeSanctuarySplineInfo();
};

