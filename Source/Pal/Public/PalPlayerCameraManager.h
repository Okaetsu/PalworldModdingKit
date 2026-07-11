#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "PalPlayerCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class PAL_API APalPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    APalPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

};

