#pragma once
#include "CoreMinimal.h"
#include "PalDeadInfo.h"
#include "PalStatus_StackBuffBase.h"
#include "PalStatus_DefeatStackBuff.generated.h"

UCLASS(Blueprintable)
class UPalStatus_DefeatStackBuff : public UPalStatus_StackBuffBase {
    GENERATED_BODY()
public:
    UPalStatus_DefeatStackBuff();

private:
    UFUNCTION(BlueprintCallable)
    void OnDefeatCharacterHandler(const FPalDeadInfo& DeadInfo);
    
};

