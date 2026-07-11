#pragma once
#include "CoreMinimal.h"
#include "PalDeadInfo.h"
#include "PalStatusBase.h"
#include "PalStatus_DefeatTriggerBase.generated.h"

class AActor;
class APalCharacter;
class APalMonsterCharacter;
class APalPlayerCharacter;

UCLASS(Abstract, Blueprintable)
class UPalStatus_DefeatTriggerBase : public UPalStatusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalPlayerCharacter> CachedPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalMonsterCharacter> CachedActiveOtomo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> LastProcessedDeadActor;
    
public:
    UPalStatus_DefeatTriggerBase();

private:
    UFUNCTION(BlueprintCallable)
    void OnOtomoActiveChangedHandler(APalCharacter* Otomo, bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void OnDefeatCharacterHandler(const FPalDeadInfo& DeadInfo);
    
};

