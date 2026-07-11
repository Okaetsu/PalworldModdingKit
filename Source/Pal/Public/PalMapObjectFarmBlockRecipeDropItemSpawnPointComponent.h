#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "PalMapObjectFarmBlockRecipeDropItemSpawnPointComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectFarmBlockRecipeDropItemSpawnPointComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UPalMapObjectFarmBlockRecipeDropItemSpawnPointComponent(const FObjectInitializer& ObjectInitializer);

};

