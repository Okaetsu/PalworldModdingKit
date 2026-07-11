#pragma once
#include "CoreMinimal.h"
#include "PalWildlifeSanctuaryAlertStateListenerResisterInfo.generated.h"

class IPalWildlifeSanctuaryAlertStateListenerInterface;
class UPalWildlifeSanctuaryAlertStateListenerInterface;

USTRUCT(BlueprintType)
struct FPalWildlifeSanctuaryAlertStateListenerResisterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IPalWildlifeSanctuaryAlertStateListenerInterface> Interface;
    
    PAL_API FPalWildlifeSanctuaryAlertStateListenerResisterInfo();
};

