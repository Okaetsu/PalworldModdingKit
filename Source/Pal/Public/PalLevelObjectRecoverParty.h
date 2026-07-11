#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractableLevelObjectInterface.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalLevelObjectActor.h"
#include "PalMapObjectDropItemData.h"
#include "PalRecoverPartyCooldownEntry.h"
#include "PalLevelObjectRecoverParty.generated.h"

class AActor;
class APalCharacter;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UNiagaraSystem;
class UPalLevelObjectRecoveryPartyCooldownCheckProcessor;

UCLASS(Blueprintable)
class PAL_API APalLevelObjectRecoverParty : public APalLevelObjectActor, public IPalInteractiveObjectIndicatorInterface, public IPalInteractableLevelObjectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IPalInteractiveObjectComponentInterface> InteractComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectDropItemData> ObtainItemInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RecoveryStartLogTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CooldownEntries, meta=(AllowPrivateAccess=true))
    TArray<FPalRecoverPartyCooldownEntry> ReplicatedCooldownEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalLevelObjectRecoveryPartyCooldownCheckProcessor* SelfPlayerCooldownCheckProcessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* RecoveryPlayerCharacterNiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* RecoveryPalCharacterNiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalCharacter*> RecoveredCharacters_ServerOnly;
    
public:
    APalLevelObjectRecoverParty(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CooldownEntries();
    
    UFUNCTION(BlueprintCallable)
    void OnCooldownEndSelfPlayer(UPalLevelObjectRecoveryPartyCooldownCheckProcessor* InProcessor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnCooldownSelfPlayer() const;
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ExecutedRecoveryPlayer_Multicast(FGuid InPlayerUId, const TArray<APalCharacter*>& InRecoveredPalCharacters);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStartCooldownSelfPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnEndCooldownSelfPlayer();
    

    // Fix for true pure virtual functions not being implemented
};

