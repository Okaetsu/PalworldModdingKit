#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalUIMapObjectProductItemStatusIndicatorModel.generated.h"

class APalMapObject;
class UPalItemContainer;
class UPalMapObjectEnergyModule;
class UPalMapObjectWorkeeModule;
class UPalUIMapObjectProductItemStatusIndicatorModel;
class UPalWorkProgress;

UCLASS(Blueprintable)
class PAL_API UPalUIMapObjectProductItemStatusIndicatorModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, UPalUIMapObjectProductItemStatusIndicatorModel*, UIModel);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMulticastDelegate OnUpdateProductIdDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CurrentProductId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CurrentProductItemId;
    
public:
    UPalUIMapObjectProductItemStatusIndicatorModel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalWorkProgress* GetWorkProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalMapObjectWorkeeModule* GetWorkeeModule() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetProductItemId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetProductId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalMapObject* GetOwnerActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalItemContainer* GetItemContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalMapObjectEnergyModule* GetEnergyModule() const;
    
};

