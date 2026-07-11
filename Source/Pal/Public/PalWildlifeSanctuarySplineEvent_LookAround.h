#pragma once
#include "CoreMinimal.h"
#include "PalWildlifeSanctuarySplineEventBase.h"
#include "PalWildlifeSanctuarySplineEvent_LookAround.generated.h"

UCLASS(Blueprintable)
class UPalWildlifeSanctuarySplineEvent_LookAround : public UPalWildlifeSanctuarySplineEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPalWildlifeSanctuarySplineEvent_LookAround();

};

