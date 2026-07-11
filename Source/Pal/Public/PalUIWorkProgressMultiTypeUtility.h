#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPalWorkSuitability.h"
#include "PalUIWorkProgressMultiTypeUtility.generated.h"

class UPalIndividualCharacterParameter;
class UPalIndividualCharacterSlot;
class UPalWorkProgressMultiType;

UCLASS(Blueprintable)
class UPalUIWorkProgressMultiTypeUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalUIWorkProgressMultiTypeUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPalWorkSuitability GetWorkSuitabilityForWidgetIndex(const UPalWorkProgressMultiType* Work, const int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPalIndividualCharacterParameter* GetWorkerIndividualParameterForWidgetIndex(const UPalWorkProgressMultiType* Work, const int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPalIndividualCharacterSlot* GetWorkerCharacterSlotForWidgetIndex(const UPalWorkProgressMultiType* Work, const int32 Index);
    
};

