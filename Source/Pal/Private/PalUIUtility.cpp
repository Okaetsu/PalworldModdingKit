#include "PalUIUtility.h"

UPalUIUtility::UPalUIUtility() {
}

void UPalUIUtility::ToggleFavoritePalBySlot(const UObject* WorldContextObject, UPalIndividualCharacterSlot* TargetSlot) {
}

TArray<EPalWazaID> UPalUIUtility::SortWazasByElementAndPower(const UObject* WorldContextObject, const TArray<EPalWazaID>& WazaIDs) {
    return TArray<EPalWazaID>();
}

void UPalUIUtility::SortRelicTypeArrayForUIDisplay(const UObject* WorldContextObject, const TArray<EPalRelicType>& OriginalArray, TArray<EPalRelicType>& OutArray) {
}

void UPalUIUtility::SetVisibilityHUD(const UObject* WorldContextObject, bool IsVisible) {
}

void UPalUIUtility::SetNumberToSeparatedTextBlock(const UObject* WorldContextObject, const TArray<int32>& numberArray, TArray<UPalTextBlockBase*>& textBlockArray, float topZeroTextOpacity) {
}

void UPalUIUtility::SetEnableCommonUIInput(const UObject* WorldContextObject, const FName flagName, bool IsEnable) {
}

void UPalUIUtility::SetCustomSlateNavigation(const UObject* WorldContextObject, const FPalSlateNavigationSetting& NavigationSetting) {
}

void UPalUIUtility::ResetSlateNavigation(const UObject* WorldContextObject) {
}

void UPalUIUtility::ResetEnableCommonUIInput(const UObject* WorldContextObject) {
}

bool UPalUIUtility::IsValidHexString(const FString& HexString) {
    return false;
}

bool UPalUIUtility::IsToggleInteract(const UObject* WorldContextObject) {
    return false;
}

bool UPalUIUtility::IsToggleBuildMode(const UObject* WorldContextObject) {
    return false;
}

bool UPalUIUtility::IsShiftDown_ForUI() {
    return false;
}

bool UPalUIUtility::IsRightShiftDown_ForUI() {
    return false;
}

bool UPalUIUtility::IsRightControlDown_ForUI() {
    return false;
}

bool UPalUIUtility::IsRightAltDown_ForUI() {
    return false;
}

bool UPalUIUtility::IsLeftShiftDown_ForUI() {
    return false;
}

bool UPalUIUtility::IsLeftControlDown_ForUI() {
    return false;
}

bool UPalUIUtility::IsLeftAltDown_ForUI() {
    return false;
}

bool UPalUIUtility::IsEnableCommonUIInput(const UObject* WorldContextObject) {
    return false;
}

bool UPalUIUtility::IsDefaultPaldeckFilterInfo(const UObject* WorldContextObject, const FPalUIPaldexFilterInfo& FilterInfo) {
    return false;
}

bool UPalUIUtility::IsDefaultCharacterContainerSortInfo(const UObject* WorldContextObject, const FPalCharacterContainerSortInfo& SortInfo) {
    return false;
}

bool UPalUIUtility::IsControlDown_ForUI() {
    return false;
}

bool UPalUIUtility::IsBulletSelectKeyConflictWithInteract(const UObject* WorldContextObject, EPalInteractiveObjectActionType ActionType) {
    return false;
}

bool UPalUIUtility::IsAltDown_ForUI() {
    return false;
}

void UPalUIUtility::GetWorldMapName(const UObject* WorldContextObject, const FName WorldMapId, FText& OutText) {
}

void UPalUIUtility::GetWorkSuitabilityNameWithMaterialSubType(const UObject* WorldContextObject, const EPalWorkSuitability WorkSuitability, const EPalMapObjectMaterialSubType MaterialSubType, FText& outName) {
}

void UPalUIUtility::GetWorkSuitabilityName(const UObject* WorldContextObject, const EPalWorkSuitability WorkSuitability, FText& outName) {
}

void UPalUIUtility::GetWorkSickName(const UObject* WorldContextObject, const EPalBaseCampWorkerSickType SickType, FText& outName) {
}

bool UPalUIUtility::GetWorkNameFromHandle(const UObject* WorldContextObject, UPalIndividualCharacterHandle* targetHandle, FText& outName) {
    return false;
}

void UPalUIUtility::GetWorkName(const UObject* WorldContextObject, const EPalWorkType WorkType, FText& outName) {
}

bool UPalUIUtility::GetWorkingDetailNameFromHandle(const UObject* WorldContextObject, UPalIndividualCharacterHandle* targetHandle, FText& outName) {
    return false;
}

void UPalUIUtility::GetWorkingDetailName(const UObject* WorldContextObject, const EPalWorkType WorkType, FText& outName) {
}

void UPalUIUtility::GetWorkerComment(const UObject* WorldContextObject, UPalIndividualCharacterHandle* targetHandle, FText& outName) {
}

void UPalUIUtility::GetWazaName(const UObject* WorldContextObject, EPalWazaID WazaID, FText& outName) {
}

void UPalUIUtility::GetWazaDesc(const UObject* WorldContextObject, EPalWazaID WazaID, FText& outDesc) {
}

void UPalUIUtility::GetWaitForWorkableDetailName(const UObject* WorldContextObject, const EPalWorkType WorkType, FText& outName) {
}

bool UPalUIUtility::GetUIInputActionRowHandle(const UObject* WorldContextObject, const FName& ActionName, FDataTableRowHandle& outHandle) {
    return false;
}

TArray<FPalUIMapObjectStatusIndicatorWorkSuitabilityDisplayData> UPalUIUtility::GetUIDisplayWorkSuitabilityDataByMapObjectId(const UObject* WorldContextObject, const FName& MapObjectId) {
    return TArray<FPalUIMapObjectStatusIndicatorWorkSuitabilityDisplayData>();
}

bool UPalUIUtility::GetUIDIsplayShotAtaackParameterInfo(const UObject* WorldContextObject, UPalIndividualCharacterParameter* IndividualParameter, FPalUIDisplayCharacterBaseParameterInfo& OutParameterInfo) {
    return false;
}

void UPalUIUtility::GetUIDisplayPalCondition(const UObject* WorldContextObject, TArray<EPalUIConditionType>& OutArray, UPalIndividualCharacterHandle* targetHandle) {
}

void UPalUIUtility::GetUIDisplayNewUnlockedBuildObjectFlagMap(const UObject* WorldContextObject, TMap<EPalBuildObjectTypeA, bool>& OutMap) {
}

bool UPalUIUtility::GetUIDIsplayHPParameterInfo(const UObject* WorldContextObject, UPalIndividualCharacterParameter* IndividualParameter, FPalUIDisplayCharacterBaseParameterInfo& OutParameterInfo) {
    return false;
}

void UPalUIUtility::GetUIDisplayFavoriteBuildObjectList(const UObject* WorldContextObject, TMap<EPalBuildObjectTypeForUIDisplay, FPalBuildObjectDataSetTypeUIDisplay>& OutMap) {
}

bool UPalUIUtility::GetUIDIsplayDefenseParameterInfo(const UObject* WorldContextObject, UPalIndividualCharacterParameter* IndividualParameter, FPalUIDisplayCharacterBaseParameterInfo& OutParameterInfo) {
    return false;
}

bool UPalUIUtility::GetUIDIsplayCraftSpeedParameterInfo(const UObject* WorldContextObject, UPalIndividualCharacterParameter* IndividualParameter, FPalUIDisplayCharacterBaseParameterInfo& OutParameterInfo) {
    return false;
}

void UPalUIUtility::GetTechnologyDescription(const UObject* WorldContextObject, const FName& technologyName, FText& OutDescription) {
}

void UPalUIUtility::GetTeamMissionName(const UObject* WorldContextObject, const FName& MissionId, FText& OutMissionName) {
}

void UPalUIUtility::GetSortedPassiveSkillNameArray(const UObject* WorldContextObject, TArray<FString>& OutPassiveNameArray, TArray<FName>& OutPassiveIdArray) {
}

bool UPalUIUtility::GetSortedEssentialItemSlotArray_ForUIDisplay(const UObject* WorldContextObject, TArray<UPalItemSlot*>& OutArray) {
    return false;
}

void UPalUIUtility::GetSkinName(const UObject* WorldContextObject, const FName& SkinName, FText& OutSKinName) {
}

void UPalUIUtility::GetRelicStatusName(const UObject* WorldContextObject, const EPalRelicType RelicType, FText& OutText) {
}

void UPalUIUtility::GetRelicStatusDescription(const UObject* WorldContextObject, const EPalRelicType RelicType, FText& OutText) {
}

bool UPalUIUtility::GetRecipeProductIdByStaticItemId(const UObject* WorldContextObject, const FName StaticItemId, FName& OutProductItemId) {
    return false;
}

int32 UPalUIUtility::GetPlayerInframeRenderTargetResolution() {
    return 0;
}

void UPalUIUtility::GetPassiveSkillName(const UObject* WorldContextObject, const FName& PassiveSkillId, FText& outName) {
}

void UPalUIUtility::GetPartnerSkillName(const UObject* WorldContextObject, const FName& CharacterID, FText& OutText) {
}

void UPalUIUtility::GetPalShortDescription(const UObject* WorldContextObject, const FName& CharacterID, FText& outName) {
}

bool UPalUIUtility::GetPalRestrictItemID(const UObject* WorldContextObject, const FName& CharacterID, FName& ItemId) {
    return false;
}

void UPalUIUtility::GetPalLongDescription(const UObject* WorldContextObject, const FName& CharacterID, FText& outName) {
}

void UPalUIUtility::GetPalGenusCategoryName(const UObject* WorldContextObject, EPalGenusCategoryType GenusCategory, FText& outName) {
}

void UPalUIUtility::GetPalFirstActivatedInfo(const UObject* WorldContextObject, const FName& CharacterID, FText& outName) {
}

void UPalUIUtility::GetPalElementTypeName(const UObject* WorldContextObject, EPalElementType ElementType, FText& outName) {
}

int32 UPalUIUtility::GetPalConditionUrgency(const UObject* WorldContextObject, EPalUIConditionType Condition) {
    return 0;
}

void UPalUIUtility::GetPalConditionName(const UObject* WorldContextObject, const EPalUIConditionType ConditionType, FText& outName) {
}

void UPalUIUtility::GetPalConditionDesc(const UObject* WorldContextObject, const EPalUIConditionType ConditionType, FText& outDesc) {
}

FGuid UPalUIUtility::GetNextOwnedBaseCampIdForMapById(const UObject* WorldContextObject, const FGuid& CurrentBaseCampId) {
    return FGuid{};
}

FGuid UPalUIUtility::GetNextOwnedBaseCampIdForMap(const UObject* WorldContextObject, const FVector& WorldLocation, float SkipDistance) {
    return FGuid{};
}

int32 UPalUIUtility::GetMaxCharsPerLineForDialogue() {
    return 0;
}

FSlateBrush UPalUIUtility::GetMappedKeyIcon(const UObject* WorldContextObject, const FName InputActionName, ECommonInputType InputType, EPalKeyConfigAxisFilterType FilterType) {
    return FSlateBrush{};
}

void UPalUIUtility::GetMapObjectOperationResultText(const UObject* WorldContextObject, const EPalMapObjectOperationResult operationType, FText& outName) {
}

FName UPalUIUtility::GetMapObjectNameTextId(const UObject* WorldContextObject, const FName& MapObjectName) {
    return NAME_None;
}

void UPalUIUtility::GetMapObjectName(const UObject* WorldContextObject, const FName& MapObjectName, FText& outName) {
}

FSlateBrush UPalUIUtility::GetKeyIconByKey(const UObject* WorldContextObject, const FKey Key, ECommonInputType InputType) {
    return FSlateBrush{};
}

void UPalUIUtility::GetItemTypeAName(const UObject* WorldContextObject, const EPalItemTypeA ItemTypeA, FText& outName) {
}

void UPalUIUtility::GetItemName(const UObject* WorldContextObject, const FName& StaticItemId, FText& outName) {
}

void UPalUIUtility::GetItemDescription(const UObject* WorldContextObject, const FName& StaticItemId, FText& outName) {
}

void UPalUIUtility::GetInventoryCategoryName(const UObject* WorldContextObject, EPalPlayerInventoryType inventoryType, FText& outName) {
}

FText UPalUIUtility::GetGameClearDialogText(const UObject* WorldContextObject) {
    return FText::GetEmpty();
}

int32 UPalUIUtility::GetGameClearDialogLog4Value(const UObject* WorldContextObject) {
    return 0;
}

void UPalUIUtility::GetGameClearDialogLog3Values(const UObject* WorldContextObject, int32& OutDefeatedBossCount, int32& OutTotalBossCount) {
}

int32 UPalUIUtility::GetGameClearDialogLog2Value(const UObject* WorldContextObject) {
    return 0;
}

void UPalUIUtility::GetGameClearDialogLog1Values(const UObject* WorldContextObject, int32& OutCapturedSpeciesCount, int32& OutTotalSpeciesCount) {
}

void UPalUIUtility::GetFormatedFirstActivatedInfoTextFixedRank(const UObject* WorldContextObject, const FName& CharacterID, int32 Rank, FText& outFormatedText) {
}

void UPalUIUtility::GetFormatedFirstActivatedInfoText(const UObject* WorldContextObject, const FPalInstanceID& InstanceId, FText& outFormatedText) {
}

void UPalUIUtility::GetFilteredUIDisplayBuildObjectList(const UObject* WorldContextObject, const TMap<EPalBuildObjectTypeForUIDisplay, FPalBuildObjectDataSetTypeUIDisplay>& InMap, TMap<EPalBuildObjectTypeForUIDisplay, FPalBuildObjectDataSetTypeUIDisplay>& OutMap) {
}

void UPalUIUtility::GetDisplayNickName(const UObject* WorldContextObject, const FName CharacterID, const FName UniqueNPCID, FString& OutNickName) {
}

FPalUIPaldexFilterInfo UPalUIUtility::GetDefaultPaldeckFilterInfo(const UObject* WorldContextObject) {
    return FPalUIPaldexFilterInfo{};
}

FPalCharacterContainerSortInfo UPalUIUtility::GetDefaultCharacterContainerSortInfo(const UObject* WorldContextObject) {
    return FPalCharacterContainerSortInfo{};
}

void UPalUIUtility::GetBuildObjectUIDIsplayCategoryTextId(const UObject* WorldContextObject, const EPalBuildObjectTypeForUIDisplay DisplayType, FText& OutText) {
}

void UPalUIUtility::GetBuildObjectDesc(const UObject* WorldContextObject, const FName& buildObjectName, FText& outDesc) {
}

void UPalUIUtility::GetBuildObjectCategoryBName(const UObject* WorldContextObject, const EPalBuildObjectTypeB TypeB, FText& outName) {
}

void UPalUIUtility::GetBuildObjectCategoryAName(const UObject* WorldContextObject, const EPalBuildObjectTypeA TypeA, FText& outName) {
}

void UPalUIUtility::GetBaseCampEventName(const UObject* WorldContextObject, const EPalBaseCampWorkerEventType EventType, FText& outName) {
}

void UPalUIUtility::GetAllTagFromText(const UObject* WorldContextObject, const FText& targetText, TArray<FString>& outTagArray) {
}

void UPalUIUtility::GetAdditionalEffectName(const UObject* WorldContextObject, EPalAdditionalEffectType EffectType, FText& outName) {
}

UPalUserWidget* UPalUIUtility::FindOwningActivatableWidget(const UObject* WorldContextObject, const UWidget* Widget) {
    return NULL;
}

void UPalUIUtility::FilteringWorkSpaceRecipe(const UObject* WorldContextObject, const TArray<FName>& RecipeIDArray, TArray<FName>& OutFilteredArray) {
}

float UPalUIUtility::ConvertReviveTimerToUIDisplayRemainReviveTime(const UObject* WorldContextObject, float ReviveTimer, float ReviveSpeedMultiplier) {
    return 0.0f;
}

FColor UPalUIUtility::ConvertHexToColor(const FString& HexString) {
    return FColor{};
}

FString UPalUIUtility::ConvertFullWidthHexToHalfWidth(const FString& Input) {
    return TEXT("");
}

FString UPalUIUtility::ConvertColorToHex(const FColor& Color) {
    return TEXT("");
}

bool UPalUIUtility::CanDisplayTalentDetailUI(const UObject* WorldContextObject, UPalIndividualCharacterParameter* TargetCharacterParameter) {
    return false;
}

bool UPalUIUtility::CanDisplayBlueprintCategoryInBuildRadialMenu(const UObject* WorldContextObject) {
    return false;
}

void UPalUIUtility::AddNewLineTextLinguistically(int32 MaxCharsPerLine, const FString& InString, FString& OutString) {
}


