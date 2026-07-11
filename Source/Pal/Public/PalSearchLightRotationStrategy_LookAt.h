#pragma once
#include "CoreMinimal.h"
#include "PalSearchLightRotationStrategy.h"
#include "PalSearchLightRotationStrategy_LookAt.generated.h"

UCLASS(Blueprintable)
class UPalSearchLightRotationStrategy_LookAt : public UPalSearchLightRotationStrategy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
public:
    UPalSearchLightRotationStrategy_LookAt();

};

