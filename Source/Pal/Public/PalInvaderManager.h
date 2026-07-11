#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EPalLogType.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalIncidentBroadcastParameter.h"
#include "PalInvaderSaveData.h"
#include "PalInvaderStartPointInfo.h"
#include "PalWorldSubsystem.h"
#include "PalInvaderManager.generated.h"

class AActor;
class APalInvaderInfo;
class UDataTable;
class UObject;
class UPalIncidentBase;
class UPalIncidentDynamicParameterInvader;
class UPalInvaderBaseCampObserver;
class UPalInvaderIncidentBase;
class UPalInvaderPathFinder;

UCLASS(Blueprintable)
class PAL_API UPalInvaderManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStartWaveDelegate, APalInvaderInfo*, SelfInvaderInfo, int32, NewWaveCount);
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(AActor*, FSpawnDummyNavInvokerDelegate, FTransform, Transform);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCreatedInvaderInfoDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInvaderWaveTimeupDelegate, const FPalIncidentBroadcastParameter&, Parameter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInvaderStartDelegate, const FPalIncidentBroadcastParameter&, Parameter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInvaderOnDeclarationDelegate, const FDateTime&, StartRealTime);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInvaderOnArrivedDelegate, const FPalIncidentBroadcastParameter&, Parameter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInvaderEndDelegate, const FPalIncidentBroadcastParameter&, Parameter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEndWaveDelegate, APalInvaderInfo*, SelfInvaderInfo, int32, EndWaveCount);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnDummyNavInvokerDelegate SpawnDummyNavInvokerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInvaderOnDeclarationDelegate OnInvaderDeclarationDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInvaderStartDelegate OnInvaderStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInvaderEndDelegate OnInvaderEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInvaderOnArrivedDelegate OnInvaderArrivedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInvaderWaveTimeupDelegate OnInvaderWaveTimeupDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartWaveDelegate OnStartWaveDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndWaveDelegate OnEndWaveDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreatedInvaderInfoDelegate OnCreatedInvaderInfoDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NegotiatorRowName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalInvaderStartPointInfo> InvadeStartLocationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalInvaderBaseCampObserver*> Observers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalInvaderIncidentBase*> Incidents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid StartInvaderLogId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalInvaderSaveData> InvaderSaveDataMapCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalInvaderInfo* InvaderInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GiftSuccessItemRangeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* InvaderCancelCostTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* InvaderEnemyDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalInvaderPathFinder* PathFinder;
    
public:
    UPalInvaderManager();
    UFUNCTION(BlueprintCallable)
    void VisitorTravelTest();
    
    UFUNCTION(BlueprintCallable)
    void VisitorTravelLog(EPalLogType logType);
    
    UFUNCTION(BlueprintCallable)
    void StartInvaderMarchRandom();
    
    UFUNCTION(BlueprintCallable)
    void StartInvaderMarchForBaseCamp(FGuid campID);
    
    UFUNCTION(BlueprintCallable)
    void StartInvaderMarchAll();
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnDummyNavInvoker(const FTransform& Transform);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPalInvaderIncidentBase* RequestIncidentVisitorNPC_BP(UObject* OccuredBaseCamp, UPalIncidentDynamicParameterInvader* Parameter);
    
private:
    UFUNCTION(BlueprintCallable)
    bool RequestIncidentVisitorNPC(const FGuid& Guid, UPalInvaderBaseCampObserver* Observer, bool IgnoreDeclaration);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPalInvaderIncidentBase* RequestIncidentInvaderEnemy_BP(UObject* OccuredBaseCamp, UPalIncidentDynamicParameterInvader* Parameter);
    
private:
    UFUNCTION(BlueprintCallable)
    bool RequestIncidentInvaderEnemy(const FGuid& Guid, UPalInvaderBaseCampObserver* Observer);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveInvaderIncident(UPalIncidentBase* Incident);
    
    UFUNCTION(BlueprintCallable)
    void OnStartWave(APalInvaderInfo* InInvaderInfo, int32 NewWaveCount);
    
    UFUNCTION(BlueprintCallable)
    void OnEndWave(APalInvaderInfo* InInvaderInfo, int32 EndWaveCount);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyCurrentWaveIfRunning();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalInvaderInfo* GetInvaderInfo() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BroadcastInvaderWaveTimeup(const FPalIncidentBroadcastParameter& Parameter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BroadcastInvaderStart(const FPalIncidentBroadcastParameter& Parameter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BroadcastInvaderEnd(const FPalIncidentBroadcastParameter& Parameter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BroadcastInvaderDeclaration(const FDateTime& StartRealTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BroadcastInvaderCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BroadcastInvaderArrived(const FPalIncidentBroadcastParameter& Parameter);
    

    // Fix for true pure virtual functions not being implemented
};

