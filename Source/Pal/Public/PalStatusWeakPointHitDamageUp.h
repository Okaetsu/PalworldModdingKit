#pragma once
#include "CoreMinimal.h"
#include "PalDamageResult.h"
#include "PalStatusBase.h"
#include "PalStatusWeakPointHitDamageUp.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalStatusWeakPointHitDamageUp : public UPalStatusBase {
    GENERATED_BODY()
public:
    UPalStatusWeakPointHitDamageUp();

private:
    UFUNCTION(BlueprintCallable)
    void OnInflictDamageHandler(const FPalDamageResult& DamageResult);
    
};

