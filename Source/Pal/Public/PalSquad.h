#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalDeadInfo.h"
#include "PalInstanceID.h"
#include "PalSquad.generated.h"

class AActor;
class APalAISquadLeashActor;
class UPalAIBlackboardBase;

UCLASS(Blueprintable)
class PAL_API UPalSquad : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSomeOneDeadDelegate, FPalDeadInfo, DeadInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemovedSquadMemberDelegate, AActor*, RemovedMember);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCombatPropagationDelegate, AActor*, StartActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAddedSquadMemberDelegate, AActor*, AddedMember);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEscapePropagationDelegate, AActor*, StartActor, AActor*, TargetActor);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAddedSquadMemberDelegate OnAddedSquadMemberDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemovedSquadMemberDelegate OnRemovedSquadMemberDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSomeOneDeadDelegate OnSomeOneDeadDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCombatPropagationDelegate OnCombatPropagationDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEscapePropagationDelegate OnEscapePropagationDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalInstanceID LeaderId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalInstanceID> MemberIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalAIBlackboardBase* LeaderBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalAISquadLeashActor* LeashActor;
    
public:
    UPalSquad();

    UFUNCTION(BlueprintCallable)
    void UpdateLeader(FPalInstanceID NextLeader);
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveWhenDestoryActor(AActor* DestoryActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMemberID(TArray<FPalInstanceID>& OutList);
    
    UFUNCTION(BlueprintCallable)
    void EscapeStart(AActor* StartActor, AActor* Target);
    
private:
    UFUNCTION(BlueprintCallable)
    void DeadAndUpdateLeader(FPalDeadInfo DeadInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void CombatStart(AActor* StartActor);
    
    UFUNCTION(BlueprintCallable)
    void AddCharacter(FPalInstanceID PalInstanceID);
    
};

