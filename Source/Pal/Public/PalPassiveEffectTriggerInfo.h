#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalPassiveEffectTriggerInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalPassiveEffectTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackPower;
    
    PAL_API FPalPassiveEffectTriggerInfo();
};

