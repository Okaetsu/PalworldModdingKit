#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EPalPassiveSkillEffectType.h"
#include "EPalStatusID.h"
#include "PalStatusInvokerInfo.h"
#include "StatusDynamicParameter.h"
#include "Templates/SubclassOf.h"
#include "PalStatusComponent.generated.h"

class UPalStatusBase;
class UPalStatusComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalStatusComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRemoveStatus, const UPalStatusComponent*, StatusComponent, EPalStatusID, statusID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAddStatus, const UPalStatusComponent*, StatusComponent, EPalStatusID, statusID, UPalStatusBase*, Status);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalStatusID, TSubclassOf<UPalStatusBase>> StatusMap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAddStatus OnAddStatus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemoveStatus OnRemoveStatus;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ExecutionStatusList, meta=(AllowPrivateAccess=true))
    TArray<UPalStatusBase*> ExecutionStatusList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalStatusBase*> ExecutionStatusListCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EPalStatusID> DisableAddStatusIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalStatusInvokerInfo> AddStatusInvokerMap;
    
public:
    UPalStatusComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SomeStatus_ToAll(EPalStatusID statusID, FStatusDynamicParameter Param);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDisableAddStatusIDs(TArray<EPalStatusID> StatusIDs);
    
    UFUNCTION(BlueprintCallable)
    void ResetDisableAddStatusIDs();
    
    UFUNCTION(BlueprintCallable)
    void RemoveStatusInvoker(const FGuid& InvokerID);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RemoveStatus_ToServer(EPalStatusID statusID, int32 issuerID);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveStatus(EPalStatusID statusID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAll();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStartPassiveSkill(EPalPassiveSkillEffectType EffectType, float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExecutionStatusList();
    
    UFUNCTION(BlueprintCallable)
    void OnEndPassiveSkill(EPalPassiveSkillEffectType EffectType);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeActiveActor(bool bInIsActive);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalStatusBase* GetExecutionStatus(EPalStatusID statusID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EPalStatusID> GetDisableAddStatusIDs() const;
    
    UFUNCTION(BlueprintCallable)
    void EndPlay(const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void BeginPlay();
    
    UFUNCTION(BlueprintCallable)
    void AddStatusParameter(EPalStatusID statusID, FStatusDynamicParameter Param);
    
    UFUNCTION(BlueprintCallable)
    void AddStatusInvokerParameter(EPalStatusID statusID, FStatusDynamicParameter Param, const FGuid& InvokerID);
    
    UFUNCTION(BlueprintCallable)
    void AddStatusInvoker(EPalStatusID statusID, const FGuid& InvokerID);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddStatus_ToServer(EPalStatusID statusID, FStatusDynamicParameter Param, int32 issuerID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void AddStatus_ToClient(EPalStatusID statusID, FStatusDynamicParameter Param);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddStatus(EPalStatusID statusID);
    
};

