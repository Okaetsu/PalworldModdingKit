#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EPalPassiveSkillEffectType.h"
#include "PalStatusPassiveEffectQueryInterface.generated.h"

UINTERFACE(Blueprintable)
class UPalStatusPassiveEffectQueryInterface : public UInterface {
    GENERATED_BODY()
};

class IPalStatusPassiveEffectQueryInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TryGetPassiveEffectOverride(EPalPassiveSkillEffectType EffectType, float originalValue, float& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPassiveEffectAllowed(EPalPassiveSkillEffectType EffectType) const;
    
};

