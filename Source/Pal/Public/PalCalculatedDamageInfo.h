#pragma once
#include "CoreMinimal.h"
#include "PalCalculatedDamageInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalCalculatedDamageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalPassiveRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageUpperLimit;
    
    PAL_API FPalCalculatedDamageInfo();
};

