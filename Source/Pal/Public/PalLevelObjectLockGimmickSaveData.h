#pragma once
#include "CoreMinimal.h"
#include "PalLevelObjectLockGimmickSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalLevelObjectLockGimmickSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCleared;
    
    PAL_API FPalLevelObjectLockGimmickSaveData();
};

