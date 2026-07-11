#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalLevelObjectRecoverPartySaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalLevelObjectRecoverPartySaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, int64> PlayerLastUsedTimes;
    
    PAL_API FPalLevelObjectRecoverPartySaveData();
};

