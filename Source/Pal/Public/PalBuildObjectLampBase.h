#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBuildObject.h"
#include "PalBuildObjectLampBase.generated.h"

class UPalMapObjectConcreteModelBase;
class UPalMapObjectConcreteModelModuleBase;
class UPalMapObjectLampModel;
class UPalMapObjectSwitchModule;

UCLASS(Blueprintable)
class PAL_API APalBuildObjectLampBase : public APalBuildObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableLampModelFeatures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableLampSwitchFeatures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableLampLightColorChangeFeatures;
    
public:
    APalBuildObjectLampBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateSwitchStateInternal(UPalMapObjectSwitchModule* SwitchModule);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateSwitchState(UPalMapObjectSwitchModule* SwitchModule);
    
    UFUNCTION(BlueprintCallable)
    void OnReadySwitchModule(UPalMapObjectConcreteModelBase* Model, UPalMapObjectConcreteModelModuleBase* Module);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLightColorChanged_BP(const FLinearColor& Color) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLightColorChanged(UPalMapObjectLampModel* LampModel, const FLinearColor& Color);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FLinearColor GetLightDefaultColor_ServerInternal() const;
    
};

