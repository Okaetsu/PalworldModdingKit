#pragma once
#include "CoreMinimal.h"
#include "PalWildlifeSanctuarySplineEventBase.h"
#include "PalWildlifeSanctuarySplineEvent_Stop.generated.h"

UCLASS(Blueprintable)
class UPalWildlifeSanctuarySplineEvent_Stop : public UPalWildlifeSanctuarySplineEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopDuration;
    
    UPalWildlifeSanctuarySplineEvent_Stop();

};

