#pragma once
#include "CoreMinimal.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalDamageResult.h"
#include "PalDeadInfo.h"
#include "PalInflictDamageNotifyInterface.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalItemSlotId.h"
#include "PalNPC.h"
#include "PalMonsterCharacter.generated.h"

class AActor;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UAkAudioEvent;
class UMaterialInterface;
class UPalCharacterLiftupObjectComponent;
class UPalHUDDispatchParameterBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class PAL_API APalMonsterCharacter : public APalNPC, public IPalInteractiveObjectIndicatorInterface, public IPalInflictDamageNotifyInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMonsterInflictDamageDelegate, const FPalDamageResult&, DamageResult);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMonsterDefeatCharacterDelegate, const FPalDeadInfo&, DeadInfo);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IPalInteractiveObjectComponentInterface> InteractiveObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPalCharacterLiftupObjectComponent* LiftupObjectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RideMoveAkEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMonsterInflictDamageDelegate OnInflictDamageDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMonsterDefeatCharacterDelegate OnDefeatCharacterDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OriginalMaterials;
    
public:
    APalMonsterCharacter(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void SelectedFeedingItem(const FPalItemSlotId& ItemSlotId, const int64 Num);
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshSkin(bool bIsActive);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedOrderWorkerRadialMenu(UPalHUDDispatchParameterBase* Parameter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLiftupObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USkeletalMeshComponent* GetRideNPCMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAkAudioEvent* GetRideMoveAkEvent() const;
    

    // Fix for true pure virtual functions not being implemented
};

