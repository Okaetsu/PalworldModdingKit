#pragma once
#include "CoreMinimal.h"
#include "EPalCommonExpRewardType.h"
#include "PalUICommonExpRewardData.generated.h"

USTRUCT(BlueprintType)
struct FPalUICommonExpRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalCommonExpRewardType RewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardExp;
    
    PAL_API FPalUICommonExpRewardData();
};

