#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInstanceID.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "Templates/SubclassOf.h"
#include "PalCapturedCage.generated.h"

class APalAIController;
class APalCapturedCage;
class APalCharacter;
class APalPlayerCharacter;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API APalCapturedCage : public AActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, APalCapturedCage*, Self);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FieldKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalAIController> ControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DespawnRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnedPalId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnedPalLevel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsRequestedInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsDisableInteractive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsInSpawnedRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDisabledLottery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterHandle* SpawnedPalHandle;
    
public:
    APalCapturedCage(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SpawnPal(FName InPalID, int32 InPalLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideKeyName(FName Key);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableInteractive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetCageByOutside_BP();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ResetCage_ToAll();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestInteract(APalPlayerCharacter* Attacker);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCreateHandle(FPalInstanceID ID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void LotteryAndSpawnPal();
    
    UFUNCTION(BlueprintCallable)
    APalCharacter* GetSpawnedPal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EPalInteractiveObjectIndicatorType GetIndicatorType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName GetCampSpawnerName() const;
    

    // Fix for true pure virtual functions not being implemented
};

