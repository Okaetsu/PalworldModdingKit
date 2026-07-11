#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "EPalMapObjectOperationResult.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalLevelGimmick_Icicle_ReplicatedDeployData.h"
#include "PalLevelObjectActor.h"
#include "Templates/SubclassOf.h"
#include "PalLevelGimmick_Icicle.generated.h"

class AActor;
class APalBullet;
class APalLevelGimmick_Icicle_CosmeticIcicle;
class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class PAL_API APalLevelGimmick_Icicle : public APalLevelObjectActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FODropStartelegate, float, WaveDurationSec);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* DropTriggerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalLevelGimmick_Icicle_CosmeticIcicle> CosmeticIcicleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalBullet> IcicleBulletClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CosmeticIcicleCountMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CosmeticIcicleCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitDeploySec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaveDurationSecMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaveDurationSecMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaveIntervalSecMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaveIntervalSecMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BulletSpawnIntervalSecMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BulletSpawnIntervalSecMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OneDropCountMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OneDropCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IcicleSpawnTraceUpDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D IcicleSpawnLocationXYRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IcicleSpawnLocationOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_MapObjectData PickUpItemMapObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickUpItemSpawnProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickUpItemCleanupDelaySec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PickUpItemMaxSpawnCountPerWave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FODropStartelegate OnDropStart;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedDeployData, meta=(AllowPrivateAccess=true))
    FPalLevelGimmick_Icicle_ReplicatedDeployData ReplicatedDeployData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalLevelGimmick_Icicle_CosmeticIcicle*> CosmeticIcicles;
    
public:
    APalLevelGimmick_Icicle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedDeployData(const FPalLevelGimmick_Icicle_ReplicatedDeployData& OldData);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastSpawnIcicleBulletAtLocation(const TArray<FVector>& Locations);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSpawnIcicleBulletAtCosmeticIcicleLocation(const TArray<int32>& Indices);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnDropStart(float WaveDurationSec);
    
    UFUNCTION(BlueprintCallable)
    void EventOnIcicleBulletDestroy(UPrimitiveComponent* HitComp, AActor* OtherCharacter, UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void EventOnFinishedSpawnPickUpItemMapObject(FGuid InstanceId, const EPalMapObjectOperationResult Result);
    
    UFUNCTION(BlueprintCallable)
    void EventOnDropTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void EventOnDropTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);
    
};

