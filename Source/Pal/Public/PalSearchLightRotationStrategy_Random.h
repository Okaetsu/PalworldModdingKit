#pragma once
#include "CoreMinimal.h"
#include "PalSearchLightRotationStrategy.h"
#include "PalSearchLightRotationStrategy_Random.generated.h"

UCLASS(Blueprintable)
class UPalSearchLightRotationStrategy_Random : public UPalSearchLightRotationStrategy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntervalSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxYawRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPitchRange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
public:
    UPalSearchLightRotationStrategy_Random();

};

