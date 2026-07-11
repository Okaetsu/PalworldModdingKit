#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalItemSlotIdAndNum.h"
#include "PalBreedingUtility.generated.h"

class UPalBaseCampModel;
class UPalItemContainer;
class UPalWorkBase;

UCLASS(Blueprintable)
class PAL_API UPalBreedingUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalBreedingUtility();

    UFUNCTION(BlueprintCallable)
    static FPalItemSlotIdAndNum FindConsumableBreedItem(const UPalItemContainer* Container, const TArray<FName>& TargetItemIds);
    
    UFUNCTION(BlueprintCallable)
    static bool CanProceedBreeding(const UPalWorkBase* Work);
    
    UFUNCTION(BlueprintCallable)
    static float CalcBreedBuffRate(const UPalWorkBase* Work, const UPalBaseCampModel* BaseCampModel);
    
};

