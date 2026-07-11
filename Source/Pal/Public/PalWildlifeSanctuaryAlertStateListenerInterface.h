#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EPalWildlifeSanctuaryAlertState.h"
#include "PalWildlifeSanctuaryAlertStateListenerInterface.generated.h"

class APalPlayerCharacter;

UINTERFACE(Blueprintable)
class UPalWildlifeSanctuaryAlertStateListenerInterface : public UInterface {
    GENERATED_BODY()
};

class IPalWildlifeSanctuaryAlertStateListenerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldMaintainAlertWhilePresent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAlertStateChanged(EPalWildlifeSanctuaryAlertState NewState, APalPlayerCharacter* DetectedPlayer);
    
};

