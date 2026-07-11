#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PalBreedingItemEffectData.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalBreedingItemEffectDataAsset.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalBreedingItemEffectDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalDataTableRowName_ItemData, FPalBreedingItemEffectData> ItemEffectMap;
    
    UPalBreedingItemEffectDataAsset();

};

