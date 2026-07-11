#pragma once
#include "CoreMinimal.h"
#include "EPalPassiveSkillEffectType.h"
#include "EPalVisualEffectID.h"
#include "PalStatusBase.h"
#include "PalStatusHUDQueryInterface.h"
#include "PalStatusPassiveEffectQueryInterface.h"
#include "PalStatus_StackBuffBase.generated.h"

class AActor;
class APalCharacter;
class APalMonsterCharacter;
class APalPlayerCharacter;

UCLASS(Abstract, Blueprintable)
class UPalStatus_StackBuffBase : public UPalStatusBase, public IPalStatusPassiveEffectQueryInterface, public IPalStatusHUDQueryInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalPassiveSkillEffectType TargetEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalVisualEffectID VisualEffectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DecayPerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResetTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecayIntervalSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInstantClearOnExpiry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StackCount, meta=(AllowPrivateAccess=true))
    int32 StackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RemainingTime, meta=(AllowPrivateAccess=true))
    float RemainingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DecayTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDecaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEffectActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OneStackBuffRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalPlayerCharacter> CachedPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalMonsterCharacter> CachedRidePal;
    
public:
    UPalStatus_StackBuffBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_StackCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_RemainingTime();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerRideHandler(AActor* RideActor);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerGetOffHandler(AActor* RideActor);
    
    UFUNCTION(BlueprintCallable)
    void OnOtomoActiveChangedHandler(APalCharacter* Otomo, bool IsActive);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_OnStackChanged(int32 NewStackCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_OnStackBuffDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_OnStackBuffActivated();
    

    // Fix for true pure virtual functions not being implemented
};

