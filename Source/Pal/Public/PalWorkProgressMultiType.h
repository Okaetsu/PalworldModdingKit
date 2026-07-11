#pragma once
#include "CoreMinimal.h"
#include "EPalWorkSuitability.h"
#include "PalWorkProgress.h"
#include "PalWorkProgressEntry.h"
#include "PalWorkProgressSuitabilityInfo.h"
#include "PalWorkProgressSuitabilityInfoEntry.h"
#include "PalWorkProgressMultiType.generated.h"

class UPalWorkProgressMultiType;

UCLASS(Blueprintable)
class PAL_API UPalWorkProgressMultiType : public UPalWorkProgress {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWorkTypeProgressUpdateDelegate, UPalWorkProgressMultiType*, WorkProgress, EPalWorkSuitability, WorkSuitability);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProductionCompleteDelegate, UPalWorkProgressMultiType*, WorkProgress);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWorkTypeProgressUpdateDelegate OnWorkTypeProgressUpdateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProductionCompleteDelegate OnProductionCompleteDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ProgressEntries, meta=(AllowPrivateAccess=true))
    TArray<FPalWorkProgressEntry> ProgressEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SuitabilityInfoEntries, meta=(AllowPrivateAccess=true))
    TArray<FPalWorkProgressSuitabilityInfoEntry> SuitabilityInfoEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalWorkSuitability, FPalWorkProgressSuitabilityInfo> SuitabilityInfoMap;
    
public:
    UPalWorkProgressMultiType();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetMaxStorableProgress(EPalWorkSuitability WorkSuitability, float InMaxStorableProgress);
    
    UFUNCTION(BlueprintCallable)
    void SetAllMaxStorableProgress(float InMaxStorableProgress);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SuitabilityInfoEntries();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ProgressEntries();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWorkTypeAtCapacity(EPalWorkSuitability WorkSuitability) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAtCapacityForWorkType(EPalWorkSuitability WorkSuitability) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyWorkTypeAtCapacity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWorkType(EPalWorkSuitability WorkSuitability) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredRankForWorkType(EPalWorkSuitability WorkSuitability) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EPalWorkSuitability> GetRegisteredWorkTypes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgressRateForWorkType(EPalWorkSuitability WorkSuitability) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalWorkProgressEntry> GetProgressEntries() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckAndConsumeForProduction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllWorkTypesAtCapacity() const;
    
    UFUNCTION(BlueprintCallable)
    void AddProgressForWorkType(EPalWorkSuitability WorkSuitability, float Amount);
    
};

