#include "PalCharacterStatusOperation.h"

UPalCharacterStatusOperation::UPalCharacterStatusOperation() {
}

FName UPalCharacterStatusOperation::GetStatusPointNameByRelicType(EPalRelicType Type) {
    return NAME_None;
}

TMap<FName, int32> UPalCharacterStatusOperation::GetReturnItemsForResetCharacterStatusAll(const UObject* WorldContextObject, const UPalIndividualCharacterParameter* TargetIndividualParameter) {
    return TMap<FName, int32>();
}

int32 UPalCharacterStatusOperation::GetRequiredRelicCountForLocalPlayer(const UObject* WorldContextObject, EPalRelicType RelicType) {
    return 0;
}

int32 UPalCharacterStatusOperation::GetRequiredMoneyCountForResetLocalPlayer(const UObject* WorldContextObject) {
    return 0;
}

int32 UPalCharacterStatusOperation::GetRequiredMoneyCountForResetCharacterStatusAll(const UObject* WorldContextObject, UPalIndividualCharacterHandle* targetHandle) {
    return 0;
}

int32 UPalCharacterStatusOperation::GetRequiredMoneyCountForResetCharacterStatus(const UObject* WorldContextObject, UPalIndividualCharacterHandle* targetHandle, const EPalCharacterStatusOperationName StatusName) {
    return 0;
}

void UPalCharacterStatusOperation::GetRequiredItemForStatusUp_OneRank(const UObject* WorldContextObject, int32 CurrentRank, FName& ItemId, int32& ItemCount) {
}

void UPalCharacterStatusOperation::GetRequiredItemCountForCharacterStatus(const UObject* WorldContextObject, UPalIndividualCharacterParameter* TargetParameter, const TMap<EPalCharacterStatusOperationName, int32> StatusMap, TMap<FName, int32>& RequiredItems) {
}

float UPalCharacterStatusOperation::GetRelicEffectRate(const UObject* WorldContextObject, EPalRelicType RelicType, int32 Rank) {
    return 0.0f;
}

int32 UPalCharacterStatusOperation::GetCurrentStatusRankByRelicTypeForLocalPlayer(const UObject* WorldContextObject, EPalRelicType RelicType) {
    return 0;
}

int32 UPalCharacterStatusOperation::GetCurrentStatusRank(const UPalIndividualCharacterParameter* TargetIndividualParameter, const EPalCharacterStatusOperationName StatusName) {
    return 0;
}

int32 UPalCharacterStatusOperation::GetCurrentLocalPlayerTotalStatusPoint(const UObject* WorldContextObject, EPalRelicType RelicType) {
    return 0;
}

int32 UPalCharacterStatusOperation::CalcRequiredRelicCountForLocalPlayer(const UObject* WorldContextObject, EPalRelicType RelicType, const int32 ToRank) {
    return 0;
}


