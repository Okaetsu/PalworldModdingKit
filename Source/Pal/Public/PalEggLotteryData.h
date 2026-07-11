#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalEggLotteryData.generated.h"

USTRUCT(BlueprintType)
struct FPalEggLotteryData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PalMonsterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    PAL_API FPalEggLotteryData();
};

