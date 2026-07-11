#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPalCharacterStatusOperationName.h"
#include "EPalCharacterStatusOperationResult.h"
#include "EPalRelicType.h"
#include "PalCharacterStatusOperationResultDelegateDelegate.h"
#include "PalInstanceID.h"
#include "PalPlayerRankupRequestInfo.h"
#include "PalStatusAndRank.h"
#include "PalNetworkCharacterStatusOperationComponent.generated.h"

class APalCharacter;
class UObject;
class UPalIndividualCharacterHandle;
class UPalNetworkCharacterStatusOperationComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNetworkCharacterStatusOperationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalCharacterStatusOperationResultDelegate OnReceiveRequestResultDelegate;
    
    UPalNetworkCharacterStatusOperationComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestReviveCharacterFromDyingByPartnerSkill_ToServer(APalCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestReviveCharacterFromDyingByPartnerSkill(APalCharacter* Character);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestReviveCharacterFromDying_ToServer(APalCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestReviveCharacterFromDying(APalCharacter* Character);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestPlayerStatusUp_ToServer(EPalRelicType RelicType, int32 ToRank);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestPlayerStatusClear_ToServer(EPalRelicType RelicType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestPlayerRankUp_ToServer(const TArray<FPalPlayerRankupRequestInfo>& RankupInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestPlayerRankClear(EPalRelicType RelicType);
    
    UFUNCTION(BlueprintCallable)
    void RequestPlayerRankAdd(EPalRelicType RelicType, int32 ToRank);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestOtomoStatusPointClearAll_ToServer(const FPalInstanceID& IndividualId);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestOtomoStatusPointClearAll(const UPalIndividualCharacterHandle* IndividualHandle);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestOtomoStatusPointClear_ToServer(const FPalInstanceID& IndividualId, const EPalCharacterStatusOperationName StatusName);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestOtomoStatusPointClear(const UPalIndividualCharacterHandle* IndividualHandle, const EPalCharacterStatusOperationName StatusName);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestOtomoStatusPointAdd_ToServer(const FPalInstanceID& IndividualId, const TArray<FPalStatusAndRank>& ToStatusRank);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestOtomoStatusPointAdd(const UPalIndividualCharacterHandle* IndividualHandle, const TMap<EPalCharacterStatusOperationName, int32> ToStatusRank);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveOperationResult_ToClient(const EPalCharacterStatusOperationResult Result);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalNetworkCharacterStatusOperationComponent* NetCharacterStatusOperation(const UObject* WorldContextObject);
    
};

