#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalBaseCampItemStackInfoUpdatedDynamicDelegateDelegate.h"
#include "PalBaseCampModuleDelegateDelegate.h"
#include "PalItemSlotId.h"
#include "PalStaticItemIdAndNum.h"
#include "PalBaseCampUtility.generated.h"

class APalAIController;

UCLASS(Blueprintable)
class UPalBaseCampUtility : public UObject {
    GENERATED_BODY()
public:
    UPalBaseCampUtility();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnsubscribeLocalPlayerBaseCampItemStackInfoUpdated(const UObject* WorldContextObject, FPalBaseCampItemStackInfoUpdatedDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SubscribeLocalPlayerBaseCampItemStackInfoUpdated(const UObject* WorldContextObject, FPalBaseCampItemStackInfoUpdatedDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestStartReplicateLocalPlayerBaseCampItemStackInfo(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void RequestMoveInventoryItemToBaseCamp(const UObject* WorldObjectContext, const FGuid& TargetBaseCampID, const TArray<FPalItemSlotId>& InventoryItemSlotIds, const bool bQuickStackMode);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestEndReplicateLocalPlayerBaseCampItemStackInfo(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRunnableAction_PalRandomRest_BaseCamp(APalAIController* AIController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void CollectQuickStackTargetItemInfos(const UObject* WorldContextObject, const FGuid& TargetBaseCampID, const FGuid& TargetPlayerUId, TArray<FName> StaticItemIds, TArray<FPalStaticItemIdAndNum>& OutItemInfos);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CallOrRegisterOnReadyLocalPlayerBaseCampItemStackInfo(const UObject* WorldContextObject, FPalBaseCampModuleDelegate Delegate);
    
};

