#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalKingWhaleBattlePhase.h"
#include "EPalStatusID.h"
#include "EPalWazaID.h"
#include "PalAICombatModule_Wild.h"
#include "PalInstanceID.h"
#include "PalKingWhaleBattlePhaseChangedDelegate.h"
#include "PalKingWhalePhaseWazaList.h"
#include "Templates/SubclassOf.h"
#include "PalAICombatModule_KingWhale_Wild.generated.h"

class AActor;
class APalCharacter;
class UPalActionBase;

UCLASS(Abstract, Blueprintable)
class PAL_API UPalAICombatModule_KingWhale_Wild : public UPalAICombatModule_Wild {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleEndDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalKingWhaleBattlePhase, float> PhaseHPRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalKingWhaleBattlePhase, FPalKingWhalePhaseWazaList> PhaseWazaList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, EPalWazaID> InterruptWazaMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Phase1_AggroRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalKingWhaleBattlePhase, TSubclassOf<AActor>> PhaseVolumeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReturnWazaRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalActionBase> ReturnWazaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalKingWhaleBattlePhase, EPalStatusID> PhaseStatusMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalKingWhaleBattlePhase CurrentBattlePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInterruptWaza;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastInterruptHPRate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalKingWhaleBattlePhaseChanged OnBattlePhaseChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector SpawnedLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* VolumeActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSharedCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SharedCaptureRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CaptureReplaceSourceCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CaptureReplaceTargetCharacterID;
    
public:
    UPalAICombatModule_KingWhale_Wild();

private:
    UFUNCTION(BlueprintCallable)
    void OnIndividualCreated_ServerInternal(FPalInstanceID CreatedPalInstanceID);
    
    UFUNCTION(BlueprintCallable)
    void OnCaptured_ServerInternal(APalCharacter* CapturedCharacter, APalCharacter* Attacker);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInterruptWaza() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalKingWhaleBattlePhase GetCurrentBattlePhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBattleOriginLocation() const;
    
    UFUNCTION(BlueprintCallable)
    bool FindNextWaza(const FVector CenterLocation, TSubclassOf<UPalActionBase>& OutWaza, EPalWazaID& OutWazaID, bool& IsInterrupt);
    
};

