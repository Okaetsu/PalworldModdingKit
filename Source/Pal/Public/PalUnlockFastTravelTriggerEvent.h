#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalUnlockFastTravelTriggerEvent.generated.h"

UCLASS(Blueprintable)
class UPalUnlockFastTravelTriggerEvent : public UObject {
    GENERATED_BODY()
public:
    UPalUnlockFastTravelTriggerEvent();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerEvent();
    
};

