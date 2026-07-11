#include "PalInvaderInfo.h"
#include "Net/UnrealNetwork.h"

APalInvaderInfo::APalInvaderInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->InvadeGrade = 0;
    this->bIsFirstWaveStarted = false;
    this->WaveMax = 0;
    this->CurrentWave = 0;
}

bool APalInvaderInfo::IsWaveTimeup() const {
    return false;
}

bool APalInvaderInfo::IsWaveClear() const {
    return false;
}

bool APalInvaderInfo::IsRelativePlayer(const FGuid PlayerUId) const {
    return false;
}

int32 APalInvaderInfo::GetWaveMax() const {
    return 0;
}

float APalInvaderInfo::GetRemainWaveIntervalEndRealTimeSeconds() const {
    return 0.0f;
}

float APalInvaderInfo::GetRemainWaveEndRealTimeSeconds() const {
    return 0.0f;
}

float APalInvaderInfo::GetRemainInvadeStartRealTimeSeconds() const {
    return 0.0f;
}

int32 APalInvaderInfo::GetCurrentWave() const {
    return 0;
}

FGuid APalInvaderInfo::GetBaseCampId() const {
    return FGuid{};
}

void APalInvaderInfo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalInvaderInfo, StartRealTime);
    DOREPLIFETIME(APalInvaderInfo, BaseCampId);
    DOREPLIFETIME(APalInvaderInfo, InvadeGrade);
    DOREPLIFETIME(APalInvaderInfo, bIsFirstWaveStarted);
    DOREPLIFETIME(APalInvaderInfo, WaveMax);
    DOREPLIFETIME(APalInvaderInfo, CurrentWave);
    DOREPLIFETIME(APalInvaderInfo, WaveEndRealTime);
    DOREPLIFETIME(APalInvaderInfo, WaveIntervalEndRealTime);
    DOREPLIFETIME(APalInvaderInfo, BroadcastGroupId);
}


