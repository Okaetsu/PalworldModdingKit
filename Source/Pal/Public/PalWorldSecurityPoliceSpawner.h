#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EPalOrganizationType.h"
#include "PalWorldSecurityWantedPoliceSettingData.h"
#include "PalWorldSecurityWantedStateInfo.h"
#include "PalWorldSecurityPoliceSpawner.generated.h"

class AActor;
class APalAIController;
class APalCharacter;
class APalPlayerState;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;

UCLASS(Blueprintable)
class PAL_API UPalWorldSecurityPoliceSpawner : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnPoliceDelegate, const FPalWorldSecurityWantedPoliceSettingData, PoliceData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRespawnPoliceDelegate, UPalIndividualCharacterHandle*, DespawnHandle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FReleaseWanted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPoliceInSightDelegate, bool, IsInSight, bool, IsWanted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FPoliceAlertStateDelegate, bool, IsAlerted, bool, IsFound, float, DiscoveryGaugeNormalized, float, DiscoveryGaugeRatePerSec, bool, IsWanted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDespawnPoliceDelegate, const TArray<UPalIndividualCharacterHandle*>&, DespawnHandles);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPoliceDelegate OnSpawnPolicesDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDespawnPoliceDelegate OnDespawnPolicesDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRespawnPoliceDelegate OnRespawnPoliceDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReleaseWanted OnReleaseWantedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoliceInSightDelegate OnPoliceInSightDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoliceAlertStateDelegate OnPoliceAlertStateDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPalIndividualCharacterHandle*, APalAIController*> SpawnedPolices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPalIndividualCharacterHandle*, int32> SpawnedPoliceWantedLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UPalIndividualCharacterHandle*> SpawnedCombatHelis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalPlayerState* CachedOwnerPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnPointNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnPointRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnMinRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnCheckDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnSearchStepRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnSearchStepRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnFailedCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LostSearchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoliceInSightDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiscoveryNearDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiscoveryFarDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiscoveryTimeToMaxNear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiscoveryTimeToMaxFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiscoveryDecayPerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiscoveryCrouchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatHeliSpawnHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatHeliSpawnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatHeliSpawnMinRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatHeliInSightDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatHeliRespawnCheckDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatHeliRespawnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatHeliDiscoveryNearDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatHeliDiscoveryFarDistance;
    
public:
    UPalWorldSecurityPoliceSpawner();

    UFUNCTION(BlueprintCallable)
    void TickSpawner(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetupOwner(AActor* OwnerActor);
    
    UFUNCTION(BlueprintCallable)
    void SetDropOffInProgress(bool bInProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReporterChangeAction(APalCharacter* Reporter, APalCharacter* Criminal);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWantedPlayerCountChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnWanted(UPalIndividualCharacterHandle* CriminalHandle, FPalWorldSecurityWantedStateInfo WantedStateInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnReleaseWanted(UPalIndividualCharacterHandle* CriminalHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnPoliceInSightChanged_Client(bool IsInSight, bool IsWanted);
    
    UFUNCTION(BlueprintCallable)
    void OnPoliceAlertStateChanged_Client(bool IsAlerted, bool IsFound, float DiscoveryGaugeNormalized, float DiscoveryGaugeRatePerSec, bool IsWanted);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOwnerDead(UPalIndividualCharacterParameter* IndividualParameter);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerCharacterDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitializedNPC(APalAIController* NPCAIController);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInitializedCharacter(APalCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRespawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPoliceFound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPoliceAlerted() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APalAIController*> GetSpawnedPoliceControllers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterHandle* GetOwnerHandle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetOwnerCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLostSearchTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDiscoveryGaugeNormalized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentLostSearchTimer() const;
    
    UFUNCTION(BlueprintCallable)
    bool FindSpawnLocation(const FVector& PlayerLocation, TArray<FVector>& OutLocations);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinderChangeAction(APalCharacter* Reporter, APalCharacter* WantedPlayer, EPalOrganizationType Organization);
    
    UFUNCTION(BlueprintCallable)
    bool FindCombatHeliSpawnLocation(const FVector& PlayerLocation, int32 NumLocations, TArray<FVector>& OutLocations);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckPoliceAIActionState(APalAIController* CheckPolice);
    
    UFUNCTION(BlueprintCallable)
    void AddPolice(UPalIndividualCharacterHandle* PoliceHandle, APalAIController* AIController, bool bIsCombatHeli);
    
};

