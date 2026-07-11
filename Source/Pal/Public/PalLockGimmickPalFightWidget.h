#pragma once
#include "CoreMinimal.h"
#include "PalUserWidget.h"
#include "PalLockGimmickPalFightWidget.generated.h"

class APalLevelObject_LockGimmickPalFight;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class PAL_API UPalLockGimmickPalFightWidget : public UPalUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalLevelObject_LockGimmickPalFight> Gimmick;
    
public:
    UPalLockGimmickPalFightWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimerUpdated(int32 RemainSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimeOut();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRemainingEnemyCountChangedInternal(int32 Remaining, int32 Total);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemyCountUpdated(int32 RemainingCount, int32 TotalCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAllEnemiesEliminated();
    
    UFUNCTION(BlueprintCallable)
    void FinishClose();
    
};

