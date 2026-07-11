#pragma once
#include "CoreMinimal.h"
#include "PalSearchLightRotationStrategy.h"
#include "PalSearchLightRotationStrategy_ReturnToInitial.generated.h"

UCLASS(Blueprintable)
class UPalSearchLightRotationStrategy_ReturnToInitial : public UPalSearchLightRotationStrategy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
public:
    UPalSearchLightRotationStrategy_ReturnToInitial();

};

