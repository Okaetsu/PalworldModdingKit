#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectStatusIndicatorWorkSuitabilityDisplayData.h"
#include "PalUserWidgetWorldHUD.h"
#include "PalUIMapObjectStatusIndicatorBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPalUIMapObjectStatusIndicatorBase : public UPalUserWidgetWorldHUD {
    GENERATED_BODY()
public:
    UPalUIMapObjectStatusIndicatorBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWorkSuitabilityDisplayData(TArray<FPalUIMapObjectStatusIndicatorWorkSuitabilityDisplayData>& OutDisplayData) const;
    
};

