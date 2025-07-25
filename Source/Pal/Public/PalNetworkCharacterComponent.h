#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ActionDynamicParameter.h"
#include "EPalPalLoadoutApplyResult.h"
#include "PalArenaStartParameter.h"
#include "PalInstanceID.h"
#include "PalNPCTalkNotifyInfo.h"
#include "PalNetworkNPCTalkRequestData.h"
#include "PalNetworkNPCTalkResponseData.h"
#include "Templates/SubclassOf.h"
#include "PalNetworkCharacterComponent.generated.h"

class APalCharacter;
class APalPlayerCharacter;
class UObject;
class UPalActionBase;
class UPalIndividualCharacterParameter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkCharacterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkCharacterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestReflectAction_ToServer(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, meta=(WorldContext="WorldContextObject"))
    void RequestRecordCountReward_ToServer(const UObject* WorldContextObject, const FGuid PlayerUId, const FName& RequestRecordCountId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, meta=(WorldContext="WorldContextObject"))
    void RequestPalDisplayReward_ToServer(const UObject* WorldContextObject, const FGuid PlayerUId, const FName& RequestDisplayDataId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, meta=(WorldContext="WorldContextObject"))
    void RequestNPCEmoteReward_ToServer(const UObject* WorldContextObject, const FGuid PlayerUId, const FName FieldName, const FGuid& SaveId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestInvokeNetworkNPCTalkEvent(const FPalNetworkNPCTalkRequestData& NPCTalkRequestData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDoctorSurgi_ToServer(UPalIndividualCharacterParameter* TargetPal, bool IsSuccess);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, meta=(WorldContext="WorldContextObject"))
    void RequestCircumNpcItemTrade_ToServer(const UObject* WorldContextObject, const FGuid PlayerUId, const FName& RequestTradeDataId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestApplyPalLoadoutData_ToServer(const FGuid PlayerUId, const TArray<FPalInstanceID>& LoadoutPalIds);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReflectAction_ToClient(APalCharacter* Character, FActionDynamicParameter Param, TSubclassOf<UPalActionBase> actionClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyTalkStart_ToServer(APalPlayerCharacter* TalkPlayer, APalCharacter* TargetNPC);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyTalkEnd_ToServer(APalPlayerCharacter* TalkPlayer, APalCharacter* TargetNPC);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifySurgiResult_ToClient(UPalIndividualCharacterParameter* TargetPal, FName GetPassive, FName LostPassive, int32 TalentValue, bool IsPositive);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyPalLoadoutApplyResult_ToClient(const EPalPalLoadoutApplyResult Result);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyInvokeNetworkNPCTalkRequest(const FPalNetworkNPCTalkResponseData& NPCTalkResponseData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyCustomFunction_ToServer(APalPlayerCharacter* TalkPlayer, APalCharacter* TargetNPC, const FPalNPCTalkNotifyInfo& TalkNotifyInfo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ArenaStart_ToClient(const FPalArenaStartParameter& StartParam);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ArenaSetup_ToClient();
    
};

