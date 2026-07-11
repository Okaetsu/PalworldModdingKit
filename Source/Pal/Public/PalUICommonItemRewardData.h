#pragma once
#include "CoreMinimal.h"
#include "EPalCommonItemRewardType.h"
#include "PalItemAndNum.h"
#include "PalUICommonItemRewardData.generated.h"

USTRUCT(BlueprintType)
struct FPalUICommonItemRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalCommonItemRewardType RewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalItemAndNum> RewardItems;
    
    PAL_API FPalUICommonItemRewardData();
};

