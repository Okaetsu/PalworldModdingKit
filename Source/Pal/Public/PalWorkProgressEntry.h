#pragma once
#include "CoreMinimal.h"
#include "EPalWorkSuitability.h"
#include "PalWorkProgressEntry.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkProgressEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWorkSuitability WorkSuitability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStorableProgress;
    
    PAL_API FPalWorkProgressEntry();
};

