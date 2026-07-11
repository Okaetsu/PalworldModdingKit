#include "PalNPCSpawnerBase.h"
#include "Templates/SubclassOf.h"

APalNPCSpawnerBase::APalNPCSpawnerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->bIsRunOnAnyThread = true;
    this->Ignore_DebugSettingDisable = false;
    this->Ignore_DistanceLocationReset = false;
    this->Ignore_FarCheck = false;
    this->bDoSpawnedTick = true;
    this->SpawnRadiusType = EPalSpawnRadiusType::S;
    this->bUseDirectionalSpawnCheck = true;
    this->MinMoveSpeedForDirectionalSpawn = 200.00f;
    this->LastMoveDirectionGraceTime = 1.00f;
    this->NearAlwaysSpawnRadiusScale = 0.25f;
    this->IdleSpawnRadiusScale = 0.25f;
    this->BaseSideWidthScale = 0.20f;
    this->HalfAngleDeg = 30.00f;
    this->MaxSideWidthScale = 0.75f;
    this->BackAllowance = 3000.00f;
    this->ForwardSpawnDistanceScale = 1.20f;
    this->CameraForwardSpawnDistanceScale = 0.80f;
    this->PalSpawnDistanceRate = 1.00f;
    this->CharacterBPPreloadDistance = 0.00f;
    this->CharacterBPPreloadReleaseDistance = 60000.00f;
    this->IsSquadBehaviour = true;
    this->LocationResetDistance_SpawnerToCharacterTooFar = 500000.00f;
    this->LocationResetHeight_SpawnerToCharacterTooLow = 50000.00f;
    this->NavInvokerComponent = NULL;
    this->IgnoreBaseCampCheck = false;
    this->OverwriteRayUpOffset = 0.00f;
    this->Squad = NULL;
    this->ImportanceType = EPalSpwnerImportanceType::Undefined;
    this->SpawnerRuleClass = NULL;
    this->SpawnerRuleObjectInServer = NULL;
}

void APalNPCSpawnerBase::Tick_Spawning(float DeltaTime) {
}

void APalNPCSpawnerBase::Tick_Spawned(float DeltaTime) {
}

void APalNPCSpawnerBase::Tick_Despawning(float DeltaTime) {
}


void APalNPCSpawnerBase::SetSpawnedFlag(bool NewIsSpawned) {
}

void APalNPCSpawnerBase::SetSpawnDisableFlag(const FName& Name, bool isDisable) {
}

void APalNPCSpawnerBase::SetOverwriteRayUpOffset(float InOffset) {
}

void APalNPCSpawnerBase::SetIgnoreRandomizer(bool bInIgnoreRandomizer) {
}

void APalNPCSpawnerBase::SetDisableBossSpawner_ToSaveData(FName KeyName) {
}

void APalNPCSpawnerBase::SetCheckRadius(float SpawnRadius, float DespawnRadius) {
}


void APalNPCSpawnerBase::RequestPreloadCharacterBPs() {
}


void APalNPCSpawnerBase::RequestDespawn() {
}

void APalNPCSpawnerBase::RequestDeleteGroup() {
}

void APalNPCSpawnerBase::RequestCreateGroupByOrganizationType(EPalOrganizationType OrganizationType) {
}

void APalNPCSpawnerBase::RequestCreateGroup(TArray<FName> CharacterIDList) {
}

void APalNPCSpawnerBase::Request_TickSpawningForGameThread(float DeltaTime) {
}

void APalNPCSpawnerBase::Request_TickSpawnedForGameThread(float DeltaTime) {
}

void APalNPCSpawnerBase::Request_TickDespawningForGameThread(float DeltaTime) {
}

void APalNPCSpawnerBase::RemoveGroupWhenDestoryActor(AActor* DestoryActor) {
}

void APalNPCSpawnerBase::RemoveGroupCharacter(UPalIndividualCharacterHandle* RemoveIndividualHandle) {
}

bool APalNPCSpawnerBase::RandomSpawnLocationByRadiusLineTraceWithWorldLocation(FVector& OutLocation, float Radius, float RayStartUpOffset, float RayEndDownOffset, const FVector& WorldPos, int32 SumSpawnNum, int32 SelfIndexInAll, bool IgnoreRaycast) {
    return false;
}

bool APalNPCSpawnerBase::RandomSpawnLocationByRadiusLineTrace(FVector& OutLocation, float Radius, float RayStartUpOffset, float RayEndDownOffset, int32 SumSpawnNum, int32 SelfIndexInAll, bool IgnoreRaycast) {
    return false;
}

void APalNPCSpawnerBase::ProcessBossDefeatInfo_ServerInternal(AActor* BossActor, FName SpawnerName) {
}

void APalNPCSpawnerBase::PathWalkNameSort(TArray<UObject*> WalkPoint, TArray<UObject*>& OutSortedWalkPoint) {
}



bool APalNPCSpawnerBase::IsSpawned() const {
    return false;
}

bool APalNPCSpawnerBase::IsSpawnDisable() const {
    return false;
}

bool APalNPCSpawnerBase::IsNearBaseCamp() {
    return false;
}

bool APalNPCSpawnerBase::IsIgnoreRandomizer() const {
    return false;
}

FGuid APalNPCSpawnerBase::GetWildGroupGuid() const {
    return FGuid{};
}

EPalSpawnRadiusType APalNPCSpawnerBase::GetSpawnRadiusType() const {
    return EPalSpawnRadiusType::S;
}

float APalNPCSpawnerBase::GetSpawnRadiusCM() const {
    return 0.0f;
}


int32 APalNPCSpawnerBase::GetSpawnNumRandom_OneTribe(FPalSpawnerOneTribeInfo Info) {
    return 0;
}

int32 APalNPCSpawnerBase::GetSpawnLevelRandom_OneTribe(FPalSpawnerOneTribeInfo Info) {
    return 0;
}



float APalNPCSpawnerBase::GetSpawnerRadiusByType() const {
    return 0.0f;
}


FString APalNPCSpawnerBase::GetSpawnDisableDebugInfo() const {
    return TEXT("");
}

TSubclassOf<APalCharacter> APalNPCSpawnerBase::GetPreloadedCharacterBPClass(FName CharacterID) const {
    return NULL;
}


int32 APalNPCSpawnerBase::GetMaxMonsterLevel_Implementation() const {
    return 0;
}

bool APalNPCSpawnerBase::GetIsServer() {
    return false;
}

bool APalNPCSpawnerBase::GetDisableBossSpawnerFlag_FromSaveData(FName KeyName) {
    return false;
}




EPalCheckSpawnResultType APalNPCSpawnerBase::CheckSpawnDistance(bool NewIsSpawned) {
    return EPalCheckSpawnResultType::Ignore;
}






void APalNPCSpawnerBase::AddGroupCharacterByGroupId(UPalIndividualCharacterHandle* AddIndividualHandle, const FGuid& GroupId, const FString& DebugName) {
}

void APalNPCSpawnerBase::AddGroupCharacter(UPalIndividualCharacterHandle* AddIndividualHandle) {
}


