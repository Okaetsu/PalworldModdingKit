#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_FieldLotteryNameData.h"
#include "PalRecyclerRelicItemSetting.generated.h"

USTRUCT(BlueprintType)
struct FPalRecyclerRelicItemSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_FieldLotteryNameData LotteryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredWorkAmount;
    
    PAL_API FPalRecyclerRelicItemSetting();
};

