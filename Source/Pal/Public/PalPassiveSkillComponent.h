#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPalAdditionalEffectType.h"
#include "EPalCurveBall.h"
#include "EPalPassiveSkillEffectType.h"
#include "EPalStatusID.h"
#include "FlagContainer.h"
#include "PalDamageInfo.h"
#include "PalInstanceID.h"
#include "PalPassivePartnerSkillItemParameter.h"
#include "PalPassiveRegeneArrayWrapper.h"
#include "PalPassiveSkillEffect.h"
#include "PalPassiveSkillEffectInfos.h"
#include "PalPendingRegeneRemove.h"
#include "PalPendingStatusRemove.h"
#include "PalSpecialAttackRateInfo.h"
#include "StatusDynamicParameter.h"
#include "PalPassiveSkillComponent.generated.h"

class AActor;
class APalCharacter;
class UObject;
class UPalStatusBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalPassiveSkillComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpdateSkillEffect, EPalPassiveSkillEffectType, EffectType, const UObject*, effectOwner);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStartSkillEffect, EPalPassiveSkillEffectType, EffectType, float, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndSkillEffect, EPalPassiveSkillEffectType, EffectType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeSkillEffectValue, EPalPassiveSkillEffectType, EffectType, float, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeDisablePassiveSkill, bool, isDisable, bool, IsAllReset);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartSkillEffect OnStartSkillEffectDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeSkillEffectValue OnChangeSkillEffectValueDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndSkillEffect OnEndSkillEffectDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateSkillEffect OnSetSkillEffectDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateSkillEffect OnClearSkillEffectDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SkillInfos, meta=(AllowPrivateAccess=true))
    TArray<FPalPassiveSkillEffectInfos> SkillInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalPassiveSkillEffectInfos> SkillInfosMirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer PassiveDisableFlag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UObject>, FPalPassiveRegeneArrayWrapper> RegenePassiveMap;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalPassiveSkillEffectType, TWeakObjectPtr<UObject>> StatusEffectOwnerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalPassiveSkillEffectType, FStatusDynamicParameter> LastAppliedStatusParamMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalPassiveSkillEffectType, FPalPendingStatusRemove> PendingStatusRemovalMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalPendingRegeneRemove> PendingRegeneRemovals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DebugSkillInfos, meta=(AllowPrivateAccess=true))
    TArray<FPalPassiveSkillEffectInfos> DebugSkillInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalPassiveSkillEffectInfos> DebugSkillInfosMirror;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalPassiveSkillEffectType, EPalStatusID> SkillStatusMap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeDisablePassiveSkill OnChangeDisablePassiveSkill;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalPassiveSkillEffectType> DisablePassiveTypes;
    
public:
    UPalPassiveSkillComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetupSkillFromSelf(UObject* OwnerObject, const TArray<FName>& skillList);
    
    UFUNCTION(BlueprintCallable)
    void SetDisablePassiveSkill(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRemoveDebugPassiveSkillType(EPalPassiveSkillEffectType Type);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerClearDebugSkillInfos();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAddDebugPassiveSkillType(EPalPassiveSkillEffectType Type, float Value);
    
    UFUNCTION(BlueprintCallable)
    void OverrideDamageInfoBySkill(FPalDamageInfo& inoutDamageInfo);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateCharacterRank(int32 NowRank, int32 OldRank);
    
    UFUNCTION(BlueprintCallable)
    void OnStartSkillEffect(EPalPassiveSkillEffectType EffectType, float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnSetSkillEffectWithOwner(EPalPassiveSkillEffectType EffectType, const UObject* effectOwner);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SkillInfos();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DebugSkillInfos();
    
    UFUNCTION(BlueprintCallable)
    void OnInitializedCharacter(APalCharacter* OwnerCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnEndSkillEffect(EPalPassiveSkillEffectType EffectType);
    
    UFUNCTION(BlueprintCallable)
    void OnClearSkillEffectWithOwner(EPalPassiveSkillEffectType EffectType, const UObject* effectOwner);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeSkillEffectValue(EPalPassiveSkillEffectType EffectType, float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisablePassiveSkill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSkill(EPalPassiveSkillEffectType Type, bool containEquip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalStatusBase* GetStatusByGranterAndPassiveEffect(const FPalInstanceID& InGranterInstanceID, const FPalPassiveSkillEffect& InEffect) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalPassiveSkillEffectInfos> GetSkillInfos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalPassiveSkillEffect> GetPassiveSkillsByGranterInstanceID(const FPalInstanceID& InGranterInstanceID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetParameterWithPassiveSkillEffectByWeaponCondition(float originalValue, EPalPassiveSkillEffectType EffectType, const FPalPassivePartnerSkillItemParameter& ItemParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetParameterWithPassiveSkillEffect(float originalValue, EPalPassiveSkillEffectType EffectType, bool containEquip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalCurveBall GetCurveBallTypePassiveEffectByPlayerEquip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCaptureLevelUp(const AActor* TargetPal, bool bIsSneakBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EPalAdditionalEffectType, float> GetAddAdditionalEffectMap();
    
    UFUNCTION(BlueprintCallable)
    void ClearSkill(UObject* OwnerObject);
    
    UFUNCTION(BlueprintCallable)
    void AddSpecialAttackRateInfo(TArray<FPalSpecialAttackRateInfo>& SpecialAttackRateInfos, const AActor* Defender);
    
    UFUNCTION(BlueprintCallable)
    void AddSkillFromSpawner(UObject* OwnerObject, const TArray<FName>& skillList);
    
    UFUNCTION(BlueprintCallable)
    void AddSkillFromSelf(UObject* OwnerObject, const TArray<FName>& skillList);
    
};

