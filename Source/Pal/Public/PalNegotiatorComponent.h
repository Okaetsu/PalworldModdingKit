#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalInvaderCancelResult.h"
#include "PalDeadInfo.h"
#include "PalNegotiatorComponent.generated.h"

class APalCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNegotiatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCancelInvader);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCancelInvader OnCancelInvader;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyBeforeInvadeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutDestroyDelaySeconds;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 InvaderCancelCost;
    
public:
    UPalNegotiatorComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Setup();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnTeleportBaseCampToAll(const FVector& Location, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDead(FPalDeadInfo DeadInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerCaptured(APalCharacter* SelfCharacter, APalCharacter* Attacker);
    
public:
    UFUNCTION(BlueprintCallable)
    EPalInvaderCancelResult CancelInvader(const FGuid& RequestPlayerUId);
    
};

