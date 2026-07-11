#pragma once
#include "CoreMinimal.h"
#include "EPalRelicType.h"
#include "PalPlayerRankupRequestInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerRankupRequestInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalRelicType RelicType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ToRank;
    
    PAL_API FPalPlayerRankupRequestInfo();
};

