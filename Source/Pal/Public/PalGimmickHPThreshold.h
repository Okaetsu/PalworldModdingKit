#pragma once
#include "CoreMinimal.h"
#include "PalGimmickHPThreshold.generated.h"

USTRUCT(BlueprintType)
struct FPalGimmickHPThreshold {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HPValue;
    
    PAL_API FPalGimmickHPThreshold();
};

