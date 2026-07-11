#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalRarePalSetting.generated.h"

USTRUCT(BlueprintType)
struct FPalRarePalSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Range LevelRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AwakeningProbability;
    
    PAL_API FPalRarePalSetting();
};

