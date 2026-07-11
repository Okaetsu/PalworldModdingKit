#pragma once
#include "CoreMinimal.h"
#include "PalLevelGimmick_AreaBarrier_Lock_ViewModel.generated.h"

USTRUCT(BlueprintType)
struct FPalLevelGimmick_AreaBarrier_Lock_ViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRelatedVolumeActivated;
    
    PAL_API FPalLevelGimmick_AreaBarrier_Lock_ViewModel();
};

