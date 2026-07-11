#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalDataTableRowName_NPCAppearFlagData.h"
#include "PalEnemyCampStatus.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalInstanceID.h"
#include "PalNPCSpawnInfo.h"
#include "Templates/SubclassOf.h"
#include "PalNPCManager.generated.h"

class AActor;
class APalAIController;
class APalCharacter;
class UDataTable;
class UNavigationQueryFilter;
class UPalIndividualCharacterHandle;
class UPalNPCTalkFlowAssetBase;
class UPalWildPalDrinkWaterSpotProvider;

UCLASS(Blueprintable)
class PAL_API UPalNPCManager : public UObject, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FNPCSpawnCallback, FPalInstanceID, ID);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> AIOnNavMeshFilterClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPalIndividualCharacterHandle*, FNPCSpawnCallback> CallbackMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPalIndividualCharacterHandle*, FPalNPCSpawnInfo> SpawnInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalWildPalDrinkWaterSpotProvider* DrinkWaterSpotProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> RespawnDisableFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> NPCAppearFlagName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalAIController> NPCAIControllerBaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* UniqueNPCDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NPCTalkFlowDataTable;
    
public:
    UPalNPCManager();

private:
    UFUNCTION(BlueprintCallable)
    void SpawNPCCallback(FPalInstanceID ID);
    
public:
    UFUNCTION(BlueprintCallable)
    UPalIndividualCharacterHandle* SpawnNPCForServer(FPalNPCSpawnInfo SpawnInfo, UPalNPCManager::FNPCSpawnCallback spawnCallback);
    
    UFUNCTION(BlueprintCallable)
    void SetTrueNPCAppearFlag(FPalDataTableRowName_NPCAppearFlagData flagName);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyCampStatus(FName KeyName, FPalEnemyCampStatus EnemyCampStatus);
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveGroupWhenDestoryActor(AActor* DestoryActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTransientTalkCount(const APalCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTalkable(const APalCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalNPCTalkFlowAssetBase* GetNPCTalkFlowAssetById(const FName& TalkId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalNPCTalkFlowAssetBase* GetNPCTalkFlowAsset(APalCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalEnemyCampStatus GetEnemyCampStatus(FName KeyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalWildPalDrinkWaterSpotProvider* GetDrinkWaterSpotProvider();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCharacterIDFromUniqueNPCID(FName UniqueNPCID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCharacterIDFromCharacterIDAndUniqueNPCID(FName CharacterID, FName UniqueNPCID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanSpawnByNPCAppearFlag(FPalDataTableRowName_NPCAppearFlagData flagName, bool FlagCondition);
    
private:
    UFUNCTION(BlueprintCallable)
    void AllResetBossRespawnFlag();
    

    // Fix for true pure virtual functions not being implemented
};

