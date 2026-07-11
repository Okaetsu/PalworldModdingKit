#pragma once
#include "CoreMinimal.h"
#include "PalStatusBase.h"
#include "PalStatusPassiveSkillNamesPerRank.h"
#include "PalStatus_PassiveSkillGrantBase.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class PAL_API UPalStatus_PassiveSkillGrantBase : public UPalStatusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalStatusPassiveSkillNamesPerRank> AssignSkillNamesPerRank;
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> TrackedTargets;
    
public:
    UPalStatus_PassiveSkillGrantBase();

protected:
    UFUNCTION(BlueprintCallable)
    bool SetupPassiveSkillsByOwnerRank(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    bool SetupPassiveSkills(AActor* TargetActor, const TArray<FName>& SkillNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetSkillNamesByRank(int32 Rank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOwnerRank() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearPassiveSkillsFromTarget(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllPassiveSkills();
    
};

