#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectStatusIndicatorParameterBase.h"
#include "PalUIMapObjectStatusIndicatorParameter_ProductItem.generated.h"

class UPalUIMapObjectProductItemStatusIndicatorModel;

UCLASS(Blueprintable)
class UPalUIMapObjectStatusIndicatorParameter_ProductItem : public UPalUIMapObjectStatusIndicatorParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalUIMapObjectProductItemStatusIndicatorModel* UIModel;
    
    UPalUIMapObjectStatusIndicatorParameter_ProductItem();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalUIMapObjectProductItemStatusIndicatorModel* GetUIModel() const;
    
};

