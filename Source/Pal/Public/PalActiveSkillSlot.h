#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalWazaID.h"
#include "FloatContainer.h"
#include "PalActiveSkillSlot.generated.h"

class AActor;
class UPalActiveSkill;
class UPalIndividualCharacterParameter;

UCLASS(Blueprintable)
class UPalActiveSkillSlot : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SelfActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UPalActiveSkill*> SkillMap;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalWazaID, UPalActiveSkill*> StoredSkillMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsEndInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFloatContainer CoolDownSpeedRateMap;
    
public:
    UPalActiveSkillSlot();

    UFUNCTION(BlueprintCallable)
    void UpdateCoolTime(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StopCoolTime(int32 SlotId);
    
    UFUNCTION(BlueprintCallable)
    void SetTransient(int32 SlotId, bool NewIsTransient);
    
    UFUNCTION(BlueprintCallable)
    void SetSkill(int32 SlotId, EPalWazaID WazaType);
    
    UFUNCTION(BlueprintCallable)
    void SetCoolTimeRate(FName Key, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void ResumeCoolTime(int32 SlotId);
    
    UFUNCTION(BlueprintCallable)
    void RestartCoolTime_ByWazaID(EPalWazaID WazaID);
    
    UFUNCTION(BlueprintCallable)
    void RestartCoolTime(int32 SlotId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSkill(int32 SlotId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RayCheck(int32 SlotId, AActor* TargetActor) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeEquipWaza(UPalIndividualCharacterParameter* IndividualParameter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidSkill(int32 SlotId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTransient(int32 SlotId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNearMaxRange_PawnTrace(int32 SlotId, AActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNearMaxRange_AndRayCheck(int32 SlotId, AActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNearMaxRange(int32 SlotId, AActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFarMinRange(int32 SlotId, AActor* TargetActor) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCoolTimeFinish_ByWazaID(const EPalWazaID WazaID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCoolTimeFinish(int32 SlotId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConditionSatisfy(int32 SlotId, AActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable)
    void InitObject(AActor* ActorSelf);
    
    UFUNCTION(BlueprintPure)
    EPalWazaID GetWazaType(int32 SlotId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<int32, UPalActiveSkill*> GetSkillMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinRange(int32 SlotId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMiddleRange(int32 SlotId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxRange(int32 SlotId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHeightDiff(int32 SlotId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetEnableSlotIDs(AActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCoolTimeRate(int32 SlotId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCoolTime(int32 SlotId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBackstepRange(int32 SlotId, AActor* TargetActor) const;
    
    UFUNCTION(BlueprintPure)
    int32 FindSlotIndexByWazaID(EPalWazaID WazaID);
    
    UFUNCTION(BlueprintCallable)
    int32 FindSlotIDForWildPal(AActor* TargetActor, const TArray<EPalWazaID> TempIgnoreWazaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindMostEffectiveSlotID(AActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable)
    int32 FindFarthestSlotID_IgnoreSlotID(int32 IgnoreID);
    
    UFUNCTION(BlueprintPure)
    int32 ChoiceEnableSlotIDByRandom(AActor* TargetActor, const TArray<EPalWazaID> TempIgnoreWazaId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUse(int32 SlotId, AActor* TargetActor) const;
    
};

