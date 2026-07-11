#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalDamageInfo.h"
#include "PalGimmickHPThreshold.h"
#include "PalOnGimmickDamagedDelegate.h"
#include "PalOnGimmickDepletedDelegate.h"
#include "PalOnGimmickHPChangedDelegate.h"
#include "PalOnGimmickThresholdReachedDelegate.h"
#include "PalGimmickDamageReactionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalGimmickDamageReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Hp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAcceptDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalGimmickHPThreshold> Thresholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FName> TriggeredThresholdNames;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOnGimmickDamaged OnDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOnGimmickHPChanged OnHPChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOnGimmickDepleted OnDepleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOnGimmickThresholdReached OnThresholdReached;
    
    UPalGimmickDamageReactionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetHP(float NewHP, bool bClearThresholdHistory);
    
    UFUNCTION(BlueprintCallable)
    void SetAcceptDamage(bool bEnable);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ProcessDamage(const FPalDamageInfo& Info);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetState(bool bResetHP, bool bClearThresholdHistory);
    
    UFUNCTION(BlueprintCallable)
    void ResetHPToMax(bool bClearThresholdHistory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDepleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 CalcDamageValue(const FPalDamageInfo& DamageInfo) const;
    
};

