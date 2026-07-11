#pragma once
#include "CoreMinimal.h"
#include "StatusDynamicParameter.h"
#include "PalOptionalStatusParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionalStatusParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatusDynamicParameter Value;
    
    PAL_API FPalOptionalStatusParameter();
};

