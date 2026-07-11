#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalLevelObjectActor.h"
#include "PalLevelObject_LockGimmickBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API APalLevelObject_LockGimmickBase : public APalLevelObjectActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bCleared, meta=(AllowPrivateAccess=true))
    bool bCleared;
    
public:
    APalLevelObject_LockGimmickBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_bCleared();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGimmickCleared();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDataChanged();
    
    UFUNCTION(BlueprintCallable)
    void MarkAsCleared();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCleared() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void EventOnGimmickStateChanged(const FGuid& GimmickId, bool bInCleared);
    
};

