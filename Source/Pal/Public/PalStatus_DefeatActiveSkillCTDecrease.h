#pragma once
#include "CoreMinimal.h"
#include "PalStatus_DefeatTriggerBase.h"
#include "PalStatus_DefeatActiveSkillCTDecrease.generated.h"

UCLASS(Blueprintable)
class UPalStatus_DefeatActiveSkillCTDecrease : public UPalStatus_DefeatTriggerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DecreaseRate;
    
public:
    UPalStatus_DefeatActiveSkillCTDecrease();

};

