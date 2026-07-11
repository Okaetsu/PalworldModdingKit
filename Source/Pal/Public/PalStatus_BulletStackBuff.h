#pragma once
#include "CoreMinimal.h"
#include "PalDamageResult.h"
#include "PalStatus_StackBuffBase.h"
#include "PalStatus_BulletStackBuff.generated.h"

UCLASS(Blueprintable)
class UPalStatus_BulletStackBuff : public UPalStatus_StackBuffBase {
    GENERATED_BODY()
public:
    UPalStatus_BulletStackBuff();

private:
    UFUNCTION(BlueprintCallable)
    void OnInflictDamageHandler(const FPalDamageResult& DamageResult);
    
};

