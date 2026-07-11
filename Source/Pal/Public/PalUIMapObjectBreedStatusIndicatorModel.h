#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalBreedStoppedReason.h"
#include "PalUIMapObjectBreedStatusIndicatorModel.generated.h"

class UPalMapObjectConcreteModelBase;
class UPalUIMapObjectBreedStatusIndicatorModel;

UCLASS(Blueprintable)
class PAL_API UPalUIMapObjectBreedStatusIndicatorModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, UPalUIMapObjectBreedStatusIndicatorModel*, UIModel);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMulticastDelegate OnUpdateBreedProgressDelegate;
    
    UPalUIMapObjectBreedStatusIndicatorModel();

private:
    UFUNCTION(BlueprintCallable)
    void OnBreedProgressChanged(float CurrentProgress, float MaxProgress);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasConsumableBreedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalMapObjectConcreteModelBase* GetConcreteModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalBreedStoppedReason GetBreedStoppedReason() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBreedProgress(float& OutCurrentProgress, float& OutMaxProgress) const;
    
};

