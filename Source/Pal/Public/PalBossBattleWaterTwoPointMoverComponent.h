#pragma once
#include "CoreMinimal.h"
#include "PalTwoPointMoverComponent.h"
#include "PalBossBattleWaterTwoPointMoverComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalBossBattleWaterTwoPointMoverComponent : public UPalTwoPointMoverComponent {
    GENERATED_BODY()
public:
    UPalBossBattleWaterTwoPointMoverComponent(const FObjectInitializer& ObjectInitializer);

};

