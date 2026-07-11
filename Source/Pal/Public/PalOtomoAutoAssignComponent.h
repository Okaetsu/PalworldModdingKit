#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalOtomoAutoAssignComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalOtomoAutoAssignComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalOtomoAutoAssignComponent(const FObjectInitializer& ObjectInitializer);

};

