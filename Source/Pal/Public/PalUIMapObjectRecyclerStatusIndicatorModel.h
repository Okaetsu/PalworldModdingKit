#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalUIMapObjectRecyclerStatusIndicatorModel.generated.h"

class UPalMapObjectRecyclerModel;
class UPalUIMapObjectRecyclerStatusIndicatorModel;

UCLASS(Blueprintable)
class PAL_API UPalUIMapObjectRecyclerStatusIndicatorModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalUIMapObjectRecyclerStatusIndicatorModel*, UIModel);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfDelegate OnUpdateRecycleTargetDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfDelegate OnUpdateBoostDelegate;
    
    UPalUIMapObjectRecyclerStatusIndicatorModel();

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateRecycleTarget(UPalMapObjectRecyclerModel* Model);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateBoost(UPalMapObjectRecyclerModel* Model);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwitchOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecycleBoostBuffActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInProgressRecycleBoost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullOutputContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalMapObjectRecyclerModel* GetRecyclerModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSpeedMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentRecycleItemId() const;
    
};

