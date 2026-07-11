#include "PalLevelGimmick_Icicle.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

APalLevelGimmick_Icicle::APalLevelGimmick_Icicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->DropTriggerComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("DropTriggerComponent"));
    this->CosmeticIcicleClass = NULL;
    this->IcicleBulletClass = NULL;
    this->CosmeticIcicleCountMin = 2;
    this->CosmeticIcicleCountMax = 5;
    this->WaitDeploySec = 10.00f;
    this->WaveDurationSecMin = 5.00f;
    this->WaveDurationSecMax = 5.00f;
    this->WaveIntervalSecMin = 5.00f;
    this->WaveIntervalSecMax = 5.00f;
    this->BulletSpawnIntervalSecMin = 0.50f;
    this->BulletSpawnIntervalSecMax = 1.00f;
    this->OneDropCountMin = 1;
    this->OneDropCountMax = 3;
    this->IcicleSpawnTraceUpDistance = 5000.00f;
    this->IcicleSpawnLocationOffsetZ = -50.00f;
    this->PickUpItemSpawnProbability = 0.10f;
    this->PickUpItemCleanupDelaySec = 120.00f;
    this->PickUpItemMaxSpawnCountPerWave = 2;
    this->DropTriggerComponent->SetupAttachment(RootComponent);
}

void APalLevelGimmick_Icicle::OnRep_ReplicatedDeployData(const FPalLevelGimmick_Icicle_ReplicatedDeployData& OldData) {
}

void APalLevelGimmick_Icicle::MulticastSpawnIcicleBulletAtLocation_Implementation(const TArray<FVector>& Locations) {
}

void APalLevelGimmick_Icicle::MulticastSpawnIcicleBulletAtCosmeticIcicleLocation_Implementation(const TArray<int32>& Indices) {
}

void APalLevelGimmick_Icicle::MulticastOnDropStart_Implementation(float WaveDurationSec) {
}

void APalLevelGimmick_Icicle::EventOnIcicleBulletDestroy(UPrimitiveComponent* HitComp, AActor* OtherCharacter, UPrimitiveComponent* OtherComp, const FHitResult& Hit) {
}

void APalLevelGimmick_Icicle::EventOnFinishedSpawnPickUpItemMapObject(FGuid InstanceId, const EPalMapObjectOperationResult Result) {
}

void APalLevelGimmick_Icicle::EventOnDropTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void APalLevelGimmick_Icicle::EventOnDropTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit) {
}

void APalLevelGimmick_Icicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalLevelGimmick_Icicle, ReplicatedDeployData);
}


