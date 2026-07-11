#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PalOptionalStatusParameter.h"
#include "PalPendingStatusRemove.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FPalPendingStatusRemove {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionalStatusParameter Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle;
    
    PAL_API FPalPendingStatusRemove();
};

