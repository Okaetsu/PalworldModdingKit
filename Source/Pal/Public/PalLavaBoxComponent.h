#pragma once
#include "CoreMinimal.h"
#include "PalStatusBoxComponent.h"
#include "PalLavaBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalLavaBoxComponent : public UPalStatusBoxComponent {
    GENERATED_BODY()
public:
    UPalLavaBoxComponent(const FObjectInitializer& ObjectInitializer);

};

