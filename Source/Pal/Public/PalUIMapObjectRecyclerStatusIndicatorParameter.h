#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectStatusIndicatorParameterBase.h"
#include "PalUIMapObjectRecyclerStatusIndicatorParameter.generated.h"

class UPalUIMapObjectRecyclerStatusIndicatorModel;

UCLASS(Blueprintable)
class UPalUIMapObjectRecyclerStatusIndicatorParameter : public UPalUIMapObjectStatusIndicatorParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalUIMapObjectRecyclerStatusIndicatorModel* UIModel;
    
    UPalUIMapObjectRecyclerStatusIndicatorParameter();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalUIMapObjectRecyclerStatusIndicatorModel* GetUIModel() const;
    
};

