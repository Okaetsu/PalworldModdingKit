#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectStatusIndicatorParameterBase.h"
#include "PalUIMapObjectStatusIndicatorParameter_BreedFarm.generated.h"

class UPalUIMapObjectBreedStatusIndicatorModel;

UCLASS(Blueprintable)
class PAL_API UPalUIMapObjectStatusIndicatorParameter_BreedFarm : public UPalUIMapObjectStatusIndicatorParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalUIMapObjectBreedStatusIndicatorModel* UIModel;
    
    UPalUIMapObjectStatusIndicatorParameter_BreedFarm();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalUIMapObjectBreedStatusIndicatorModel* GetUIModel() const;
    
};

