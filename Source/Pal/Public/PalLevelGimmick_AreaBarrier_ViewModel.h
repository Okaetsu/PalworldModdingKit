#pragma once
#include "CoreMinimal.h"
#include "PalLevelGimmick_AreaBarrier_ViewModel.generated.h"

USTRUCT(BlueprintType)
struct FPalLevelGimmick_AreaBarrier_ViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLocked;
    
    PAL_API FPalLevelGimmick_AreaBarrier_ViewModel();
};

