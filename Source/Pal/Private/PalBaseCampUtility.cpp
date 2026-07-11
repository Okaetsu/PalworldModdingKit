#include "PalBaseCampUtility.h"

UPalBaseCampUtility::UPalBaseCampUtility() {
}

void UPalBaseCampUtility::UnsubscribeLocalPlayerBaseCampItemStackInfoUpdated(const UObject* WorldContextObject, FPalBaseCampItemStackInfoUpdatedDynamicDelegate Delegate) {
}

void UPalBaseCampUtility::SubscribeLocalPlayerBaseCampItemStackInfoUpdated(const UObject* WorldContextObject, FPalBaseCampItemStackInfoUpdatedDynamicDelegate Delegate) {
}

void UPalBaseCampUtility::RequestStartReplicateLocalPlayerBaseCampItemStackInfo(const UObject* WorldContextObject) {
}

void UPalBaseCampUtility::RequestMoveInventoryItemToBaseCamp(const UObject* WorldObjectContext, const FGuid& TargetBaseCampID, const TArray<FPalItemSlotId>& InventoryItemSlotIds, const bool bQuickStackMode) {
}

void UPalBaseCampUtility::RequestEndReplicateLocalPlayerBaseCampItemStackInfo(const UObject* WorldContextObject) {
}

bool UPalBaseCampUtility::IsRunnableAction_PalRandomRest_BaseCamp(APalAIController* AIController) {
    return false;
}

void UPalBaseCampUtility::CollectQuickStackTargetItemInfos(const UObject* WorldContextObject, const FGuid& TargetBaseCampID, const FGuid& TargetPlayerUId, TArray<FName> StaticItemIds, TArray<FPalStaticItemIdAndNum>& OutItemInfos) {
}

void UPalBaseCampUtility::CallOrRegisterOnReadyLocalPlayerBaseCampItemStackInfo(const UObject* WorldContextObject, FPalBaseCampModuleDelegate Delegate) {
}


