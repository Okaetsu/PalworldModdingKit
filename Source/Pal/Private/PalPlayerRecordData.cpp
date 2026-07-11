#include "PalPlayerRecordData.h"
#include "Net/UnrealNetwork.h"

UPalPlayerRecordData::UPalPlayerRecordData() {
    this->bCaptureCompletionRelicFixupDone = false;
    this->PalCaptureCountBonusCount_Tier1_Old = 0;
    this->PalCaptureCountBonusCount_Tier2_Old = 0;
    this->PalCaptureCountBonusCount_Tier3_Old = 0;
}

void UPalPlayerRecordData::OnRep_RelicNumArray() {
}

void UPalPlayerRecordData::OnRep_EnteringStageInstanceId() {
}

void UPalPlayerRecordData::OnCompleteBuild_ServerInternal(UPalMapObjectModel* MapObjectModel) {
}

int32 UPalPlayerRecordData::GetUnlockedPaldexCount() const {
    return 0;
}

int32 UPalPlayerRecordData::GetTotalPalCaptureCount() const {
    return 0;
}

int32 UPalPlayerRecordData::GetRelicPossessNumByType(EPalRelicType Type) const {
    return 0;
}

int32 UPalPlayerRecordData::GetRelicLevelByType(EPalRelicType Type) const {
    return 0;
}

float UPalPlayerRecordData::GetRelicEffectRateByType(EPalRelicType Type) const {
    return 0.0f;
}

int32 UPalPlayerRecordData::GetNormalBossDefeatCount() const {
    return 0;
}

int32 UPalPlayerRecordData::GetFoundedAreaNum() const {
    return 0;
}

int32 UPalPlayerRecordData::GetBonusExpTableIndex() const {
    return 0;
}

void UPalPlayerRecordData::GetAllRelicPossessNum(TMap<EPalRelicType, int32>& OutMap) const {
}

void UPalPlayerRecordData::ForwardTowerBossDefeatFlagUpdated(FName Key, bool NewValue) {
}

void UPalPlayerRecordData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalPlayerRecordData, OwnerPlayerUId);
    DOREPLIFETIME(UPalPlayerRecordData, TowerBossDefeatFlag);
    DOREPLIFETIME(UPalPlayerRecordData, TowerBossDefeatCount);
    DOREPLIFETIME(UPalPlayerRecordData, NormalBossDefeatFlag);
    DOREPLIFETIME(UPalPlayerRecordData, RaidBossDefeatCount);
    DOREPLIFETIME(UPalPlayerRecordData, SpecificBossDefeatFlag);
    DOREPLIFETIME(UPalPlayerRecordData, BossDefeatCount);
    DOREPLIFETIME(UPalPlayerRecordData, PredatorDefeatCount);
    DOREPLIFETIME(UPalPlayerRecordData, TribeCaptureCount);
    DOREPLIFETIME(UPalPlayerRecordData, PalCaptureCount);
    DOREPLIFETIME(UPalPlayerRecordData, PalCaptureBonusCount);
    DOREPLIFETIME(UPalPlayerRecordData, PalButcherCount);
    DOREPLIFETIME(UPalPlayerRecordData, PaldeckUnlockFlag);
    DOREPLIFETIME(UPalPlayerRecordData, PalCaptureBonusExpTableIndex);
    DOREPLIFETIME(UPalPlayerRecordData, NpcBonusExpTableIndex);
    DOREPLIFETIME(UPalPlayerRecordData, AreaBonusExpTableIndex);
    DOREPLIFETIME(UPalPlayerRecordData, RelicBonusExpTableIndex);
    DOREPLIFETIME(UPalPlayerRecordData, NoteBonusExpTableIndex);
    DOREPLIFETIME(UPalPlayerRecordData, ItemPIckupBonusExpTableIndex);
    DOREPLIFETIME(UPalPlayerRecordData, FastTravelBonusExpTableIndex);
    DOREPLIFETIME(UPalPlayerRecordData, FindAreaFlag);
    DOREPLIFETIME(UPalPlayerRecordData, RelicObtainForInstanceFlag_CapturePower);
    DOREPLIFETIME(UPalPlayerRecordData, RelicObtainForInstanceFlag_HungerReduction);
    DOREPLIFETIME(UPalPlayerRecordData, RelicObtainForInstanceFlag_SwimSpeed);
    DOREPLIFETIME(UPalPlayerRecordData, RelicObtainForInstanceFlag_FoodDecayReduction);
    DOREPLIFETIME(UPalPlayerRecordData, RelicObtainForInstanceFlag_JumpPower);
    DOREPLIFETIME(UPalPlayerRecordData, RelicObtainForInstanceFlag_GliderSpeed);
    DOREPLIFETIME(UPalPlayerRecordData, RelicObtainForInstanceFlag_ClimbSpeed);
    DOREPLIFETIME(UPalPlayerRecordData, RelicObtainForInstanceFlag_StatusAilmentResist);
    DOREPLIFETIME(UPalPlayerRecordData, RelicObtainForInstanceFlag_StaminaReduction);
    DOREPLIFETIME(UPalPlayerRecordData, RelicObtainForInstanceFlag_SphereHoming);
    DOREPLIFETIME(UPalPlayerRecordData, RelicObtainForInstanceFlag_ExpBonus);
    DOREPLIFETIME(UPalPlayerRecordData, RelicObtainForInstanceFlag_RainbowPassiveRate);
    DOREPLIFETIME(UPalPlayerRecordData, RelicObtainForInstanceFlag_MoveSpeed);
    DOREPLIFETIME(UPalPlayerRecordData, RelicPossessNumArray);
    DOREPLIFETIME(UPalPlayerRecordData, NoteObtainForInstanceFlag);
    DOREPLIFETIME(UPalPlayerRecordData, ItemPickupObtainForInstanceFlag);
    DOREPLIFETIME(UPalPlayerRecordData, FastTravelPointUnlockFlag);
    DOREPLIFETIME(UPalPlayerRecordData, EnteringStageInstanceId);
    DOREPLIFETIME(UPalPlayerRecordData, BuildingObjectMapObjectInstanceIds);
    DOREPLIFETIME(UPalPlayerRecordData, CraftItemCount);
    DOREPLIFETIME(UPalPlayerRecordData, NormalDungeonClearCount);
    DOREPLIFETIME(UPalPlayerRecordData, FixedDungeonClearCount);
    DOREPLIFETIME(UPalPlayerRecordData, OilrigClearCount);
    DOREPLIFETIME(UPalPlayerRecordData, PalRankupCount);
    DOREPLIFETIME(UPalPlayerRecordData, CompletedEmoteNPCIDArray);
    DOREPLIFETIME(UPalPlayerRecordData, ArenaSoloClearCount);
    DOREPLIFETIME(UPalPlayerRecordData, NPCTalkCountMap);
    DOREPLIFETIME(UPalPlayerRecordData, InvokeNPCNetworkEventMap);
    DOREPLIFETIME(UPalPlayerRecordData, FishingCountMap);
    DOREPLIFETIME(UPalPlayerRecordData, FoundTreasureCount);
    DOREPLIFETIME(UPalPlayerRecordData, CampConqueredCount);
    DOREPLIFETIME(UPalPlayerRecordData, NpcItemTradeFlag);
    DOREPLIFETIME(UPalPlayerRecordData, PalDisplayNPCDataTableProgress);
    DOREPLIFETIME(UPalPlayerRecordData, NPCAchivementRewardFlag);
    DOREPLIFETIME(UPalPlayerRecordData, bFirstFishingComplete);
    DOREPLIFETIME(UPalPlayerRecordData, AreaBarrierUnlockFlags);
    DOREPLIFETIME(UPalPlayerRecordData, UnlockedWorldMapFlags);
    DOREPLIFETIME(UPalPlayerRecordData, MutationCount);
    DOREPLIFETIME(UPalPlayerRecordData, AwakeningCount);
    DOREPLIFETIME(UPalPlayerRecordData, bIsGameCleared);
    DOREPLIFETIME(UPalPlayerRecordData, Debug_EnteringStageDataLayerName);
    DOREPLIFETIME(UPalPlayerRecordData, Debug_LastEnteredStageDataLayerName);
}


