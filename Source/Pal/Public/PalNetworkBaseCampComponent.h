#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalBaseCampModuleType.h"
#include "EPalLogType.h"
#include "EPalWorkSuitability.h"
#include "PalCharacterSlotId.h"
#include "PalContainerId.h"
#include "PalInstanceID.h"
#include "PalItemId.h"
#include "PalItemSlotId.h"
#include "PalKillLogDisplayData.h"
#include "PalMealLogDisplayData.h"
#include "PalMonsterControllerBaseCampLogContent.h"
#include "PalNetArchive.h"
#include "PalNetworkBaseCampComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkBaseCampComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid BurningBaseCampLogId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> BurningBaseCampIds;
    
public:
    UPalNetworkBaseCampComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestUnassignWorkInBaseCamp_ToServer(const FGuid& BaseCampId, const FGuid& WorkId, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSwapWorkerSlot_ToServer(const FGuid& BaseCampId, const FPalCharacterSlotId& SlotIdA, const FPalCharacterSlotId& SlotIdB, const FGuid& ByMapObjectInstanceId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestReplicateBaseCampWork_ToServer(const FGuid& BaseCampId, const bool bReplicate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestReplicateBaseCampItemStackInfo_ToServer(const FGuid& BaseCampId, const bool bReplicate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestMoveWorkerToPalBox_ToServer(const FGuid& BaseCampId, const FPalCharacterSlotId& SlotId, const int32 CurrentPage, const FGuid& ByMapObjectInstanceId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestMoveItemToInventory_ToServer(const FGuid& BaseCampId, const FPalItemId& ItemId, const int32 Num);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestMoveInventoryItemToBaseCamp_ToServer(const TArray<FPalItemSlotId>& InventoryItemSlotIds, const FGuid& BaseCampId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestMoveCharacterToWorker_ToServer(const FGuid& BaseCampId, const FPalCharacterSlotId& SlotId, const FPalContainerId& ToContainerId, const FGuid& ByMapObjectInstanceId);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestModule_Server_void(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestModule_Server_int32(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, int32 Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestModule_Server_FVector(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, FVector Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestModule_Server_FPalNetArchive(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestModule_Server_bool(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, bool Value);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestFixedAssignWorkInBaseCamp_ToServer(const FGuid& BaseCampId, const FGuid& WorkId, const FPalInstanceID& IndividualId);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestChangeWorkSuitability_ToServer(const FPalInstanceID& TargetIndividualId, const EPalWorkSuitability WorkSuitability, const bool bOn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestChangeBaseCampBattle_ToServer(const FPalInstanceID& TargetIndividualId, const bool bOn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Request_Server_void(const FGuid& BaseCampId, const FName FunctionName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Request_Server_int32(const FGuid& BaseCampId, const FName FunctionName, int32 Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Request_Server_FVector(const FGuid& BaseCampId, const FName FunctionName, FVector Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Request_Server_FPalNetArchive(const FGuid& BaseCampId, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Request_Server_bool(const FGuid& BaseCampId, const FName FunctionName, bool Value);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RemoveBaseCampBurningLog_Client(const FGuid& BaseCampId);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyModule_RequestClient_void(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyModule_RequestClient_int32(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, int32 Value);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyModule_RequestClient_FVector(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, FVector Value);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyModule_RequestClient_FPalNetArchive(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyModule_RequestClient_bool(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, bool Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyModule_Multicast_void(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyModule_Multicast_int32(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, int32 Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyModule_Multicast_FVector(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, FVector Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyModule_Multicast_FPalNetArchive(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyModule_Multicast_bool(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, bool Value);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Notify_RequestClient_void(const FGuid& BaseCampId, const FName FunctionName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Notify_RequestClient_int32(const FGuid& BaseCampId, const FName FunctionName, int32 Value);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Notify_RequestClient_FVector(const FGuid& BaseCampId, const FName FunctionName, FVector Value);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Notify_RequestClient_FPalNetArchive(const FGuid& BaseCampId, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Notify_RequestClient_bool(const FGuid& BaseCampId, const FName FunctionName, bool Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Notify_Multicast_void(const FGuid& BaseCampId, const FName FunctionName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Notify_Multicast_int32(const FGuid& BaseCampId, const FName FunctionName, int32 Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Notify_Multicast_FVector(const FGuid& BaseCampId, const FName FunctionName, FVector Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Notify_Multicast_FPalNetArchive(const FGuid& BaseCampId, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Notify_Multicast_bool(const FGuid& BaseCampId, const FName FunctionName, bool Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void BroadcastRemoveBaseCampBurningLog_Server(const FGuid& BaseCampId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void BroadcastBaseCampWorkerMealLog_Server(const FPalMealLogDisplayData& DisplayData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void BroadcastBaseCampWorkerLog_Server(EPalLogType DisplayLogType, const FPalInstanceID& WorkerCharacterInstanceId, const FName& EventDataID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void BroadcastBaseCampWorkerFriendshipRankupLog_Server(const FGuid& BaseCampId, const FPalInstanceID& IndividualId, const bool bIsFirstRankup);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void BroadcastBaseCampLog_Server(const FPalMonsterControllerBaseCampLogContent& LogContent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void BroadcastAddBaseCampBurningLog_Server(const FGuid& BaseCampId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddBaseCampWorkerLowSanityLog_Client(const FPalInstanceID& WorkerCharacterInstanceId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddBaseCampWorkerLog_Client(EPalLogType DisplayLogType, const FPalInstanceID& WorkerCharacterInstanceId, const FName& EventDataID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddBaseCampWorkerFriendshipRankupLog_Client(const FPalInstanceID& IndividualId, const bool bIsFirstRankup);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddBaseCampWorkerDeathLog_Client(const FPalKillLogDisplayData& DeathLogDisplayData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddBaseCampLog_Client(const FPalMonsterControllerBaseCampLogContent& LogContent);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddBaseCampBurningLog_Client(const FGuid& BaseCampId);
    
};

