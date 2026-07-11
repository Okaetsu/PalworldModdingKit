#pragma once
#include "CoreMinimal.h"
#include "Components/DecalComponent.h"
#include "PalMapObjectSpawnerWeakPointDecalComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectSpawnerWeakPointDecalComponent : public UDecalComponent {
    GENERATED_BODY()
public:
    UPalMapObjectSpawnerWeakPointDecalComponent(const FObjectInitializer& ObjectInitializer);

};

