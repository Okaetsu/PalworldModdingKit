#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectStatusIndicatorParameterBase.h"
#include "PalUIMapObjectStatusIndicatorParameterWorkSlotInfo.generated.h"

class UPalWorkSlotHUDInfoUIModel;

UCLASS(Blueprintable)
class PAL_API UPalUIMapObjectStatusIndicatorParameterWorkSlotInfo : public UPalUIMapObjectStatusIndicatorParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalWorkSlotHUDInfoUIModel* UIModel;
    
    UPalUIMapObjectStatusIndicatorParameterWorkSlotInfo();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalWorkSlotHUDInfoUIModel* GetUIModel() const;
    
};

