#pragma once
#include "CoreMinimal.h"
#include "EPalWorkSuitability.h"
#include "PalWorkSuitabilityOverflowGrantedInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkSuitabilityOverflowGrantedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWorkSuitability WorkSuitability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GrantedRank;
    
    PAL_API FPalWorkSuitabilityOverflowGrantedInfo();
};

