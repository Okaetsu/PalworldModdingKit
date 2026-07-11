#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectBaseCampPassiveEffectSanityParameterComponent.h"
#include "PalMapObjectBaseCampPassiveEffectSanityWatchtowerParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectBaseCampPassiveEffectSanityWatchtowerParameterComponent : public UPalMapObjectBaseCampPassiveEffectSanityParameterComponent {
    GENERATED_BODY()
public:
    UPalMapObjectBaseCampPassiveEffectSanityWatchtowerParameterComponent(const FObjectInitializer& ObjectInitializer);

};

