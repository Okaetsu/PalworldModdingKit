#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalDamageResult.h"
#include "PalDeadInfo.h"
#include "PalInstanceID.h"
#include "PalItemSlotId.h"
#include "PalLawUtility.generated.h"

class AActor;
class UObject;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class UPalLawUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalLawUtility();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool TryResolveCriminalHandleFromDeadInfo(const UObject* WorldContextObject, const FPalDeadInfo& DeadInfo, UPalIndividualCharacterHandle*& OutCriminalHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool TryResolveCriminalHandleFromDamageResult(const UObject* WorldContextObject, const FPalDamageResult& DamageResult, UPalIndividualCharacterHandle*& OutCriminalHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AActor* ResolveCriminalActor(const UObject* WorldContextObject, AActor* RawAttacker, AActor* Defender);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEqualsGroupIndividualIdAndSlotIds(const UObject* WorldContextObject, const FPalInstanceID& IndividualId, const TArray<FPalItemSlotId>& SlotIds, const bool IgnoreNoBelongSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ExistOtherGroupFromSlotIds(const UObject* WorldContextObject, const FPalInstanceID& IndividualId, const TArray<FPalItemSlotId>& SlotIds, const bool IgnoreNoBelongSlot, FGuid& OutGroupId);
    
};

