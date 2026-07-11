#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalDamageResult.h"
#include "PalInteractableLevelObjectInterface.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalLevelGimmick_AreaBarrier_Lock_SpawnerOverrideInfo.h"
#include "PalLevelGimmick_AreaBarrier_Lock_ViewModel.h"
#include "PalLevelObjectActor.h"
#include "Templates/SubclassOf.h"
#include "PalLevelGimmick_AreaBarrier_Lock.generated.h"

class AActor;
class APalPlayerState;
class UPalActionBase;

UCLASS(Blueprintable)
class PAL_API APalLevelGimmick_AreaBarrier_Lock : public APalLevelObjectActor, public IPalInteractiveObjectIndicatorInterface, public IPalInteractableLevelObjectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid RelatedVolumeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractLongPushTimeSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalActionBase> InteractActionClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpawnerOverrideInfo, meta=(AllowPrivateAccess=true))
    FPalLevelGimmick_AreaBarrier_Lock_SpawnerOverrideInfo SpawnerOverrideInfo;
    
public:
    APalLevelGimmick_AreaBarrier_Lock(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SpawnerSetOverrideInfo_ServerInternal(FGuid InLockId, FGuid InRelatedVolumeId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SpawnerOverrideInfo();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDataChanged(const FPalLevelGimmick_AreaBarrier_Lock_ViewModel& InViewModel, bool bLockStateChanged);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetRelatedVolumeId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetLockId() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void EventOnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void EventOnStartInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void EventOnPlayerDamaged(FPalDamageResult DamageResult);
    
    UFUNCTION(BlueprintCallable)
    void EventOnLockStateChanged(const FName InLockId, bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void EventOnEndInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void EventOnCompleteSyncPlayer(APalPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void EventOnActiveVolumeChanged(const FGuid& VolumeId, bool bActivated);
    

    // Fix for true pure virtual functions not being implemented
};

