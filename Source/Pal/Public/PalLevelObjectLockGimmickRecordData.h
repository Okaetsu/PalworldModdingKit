#pragma once
#include "CoreMinimal.h"
#include "PalLevelObjectLockGimmickRecordData.generated.h"

USTRUCT(BlueprintType)
struct FPalLevelObjectLockGimmickRecordData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCleared;
    
    PAL_API FPalLevelObjectLockGimmickRecordData();
};

