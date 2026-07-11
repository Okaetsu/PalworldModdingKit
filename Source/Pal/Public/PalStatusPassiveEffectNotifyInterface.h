#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PalPassiveEffectTriggerInfo.h"
#include "PalStatusPassiveEffectNotifyInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPalStatusPassiveEffectNotifyInterface : public UInterface {
    GENERATED_BODY()
};

class IPalStatusPassiveEffectNotifyInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPassiveEffectTriggered(FPalPassiveEffectTriggerInfo TriggerInfo);
    
};

