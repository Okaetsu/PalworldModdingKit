#pragma once
#include "CoreMinimal.h"
#include "PalExtraEggCacheInfo.h"
#include "PalMapObjectPickupItemOnLevelModel.h"
#include "PalMapObjectPalEggModel.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectPalEggModel : public UPalMapObjectPickupItemOnLevelModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalExtraEggCacheInfo> CachedEggInfoForExtraEgg;
    
public:
    UPalMapObjectPalEggModel();
};

