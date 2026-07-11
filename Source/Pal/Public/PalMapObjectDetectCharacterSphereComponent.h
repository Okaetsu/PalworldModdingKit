#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "PalMapObjectDetectCharacterSphereComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectDetectCharacterSphereComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UPalMapObjectDetectCharacterSphereComponent(const FObjectInitializer& ObjectInitializer);

};

