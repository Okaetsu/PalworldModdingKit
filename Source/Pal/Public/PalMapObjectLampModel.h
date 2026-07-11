#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalNetArchive.h"
#include "PalMapObjectLampModel.generated.h"

class UPalMapObjectEnergyModule;
class UPalMapObjectLampModel;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectLampModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLampLightColorChanged, UPalMapObjectLampModel*, LampModel, const FLinearColor&, Color);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLampLightColorChanged OnLightColorChangedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsManuallyTurnedOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultLightColor;
    
public:
    UPalMapObjectLampModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetupDefaultLightColor_ServerInternal(const FLinearColor& DefaultColor);
    
private:
    UFUNCTION(BlueprintCallable)
    void RequestToggleLamp_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void RequestSubmitLightColor_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestResetLightColor_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateEnergyModuleState(UPalMapObjectEnergyModule* EnergyModule);
    
    UFUNCTION(BlueprintCallable)
    void OnSubmitLightColor(const FLinearColor& Color);
    
    UFUNCTION(BlueprintCallable)
    void OnResetLightColor();
    
    UFUNCTION(BlueprintCallable)
    void OnColorModuleChanged(const FName& Key, const FLinearColor& Color);
    
    UFUNCTION(BlueprintCallable)
    void IgnitionLight_ServerInternal();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetLightColor() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void ExtinctionLight_ServerInternal();
    
};

