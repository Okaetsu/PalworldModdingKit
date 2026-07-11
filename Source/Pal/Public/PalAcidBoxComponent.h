#pragma once
#include "CoreMinimal.h"
#include "PalStatusBoxComponent.h"
#include "PalAcidBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalAcidBoxComponent : public UPalStatusBoxComponent {
    GENERATED_BODY()
public:
    UPalAcidBoxComponent(const FObjectInitializer& ObjectInitializer);

};

