#pragma once
#include "CoreMinimal.h"
#include "PalStatusHit.generated.h"

USTRUCT(BlueprintType)
struct FPalStatusHit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrapCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnGround;
    
    PAL_API FPalStatusHit();
};

