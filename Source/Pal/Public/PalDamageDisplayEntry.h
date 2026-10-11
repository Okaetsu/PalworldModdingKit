#pragma once
#include "CoreMinimal.h"
#include "FixedPoint64.h"
#include "PalDamageInfo.h"
#include "PalDamageDisplayEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalDamageDisplayEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDamageInfo DamageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Defender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFixedPoint64 DefenderHpAtDamage;
    
    PAL_API FPalDamageDisplayEntry();
};

