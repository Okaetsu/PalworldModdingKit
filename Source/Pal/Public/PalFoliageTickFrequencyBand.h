#pragma once
#include "CoreMinimal.h"
#include "PalFoliageTickFrequencyBand.generated.h"

USTRUCT(BlueprintType)
struct FPalFoliageTickFrequencyBand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxGridDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickIntervalSeconds;
    
    PAL_API FPalFoliageTickFrequencyBand();
};

