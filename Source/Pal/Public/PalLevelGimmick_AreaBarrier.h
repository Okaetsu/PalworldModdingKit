#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "PalLevelGimmick_AreaBarrier_ViewModel.h"
#include "PalLevelObjectActor.h"
#include "PalLevelGimmick_AreaBarrier.generated.h"

class AActor;
class APalPlayerState;
class UAkAudioEvent;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable)
class PAL_API APalLevelGimmick_AreaBarrier : public APalLevelObjectActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference BoxComponentRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TeleportStartSE;
    
public:
    APalLevelGimmick_AreaBarrier(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDataChanged(const FPalLevelGimmick_AreaBarrier_ViewModel& InViewModel);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleLockStateChanged(const FName InLockId, bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void HandleCompleteSyncPlayer(APalPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void HandleBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<USceneComponent*> GetTeleportPoints() const;
    
};

