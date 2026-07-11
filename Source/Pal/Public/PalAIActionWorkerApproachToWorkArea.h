#pragma once
#include "CoreMinimal.h"
#include "PalAIActionWorkerChildBase.h"
#include "PalLaunchRecoveryActionInterface.h"
#include "PalAIActionWorkerApproachToWorkArea.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPalAIActionWorkerApproachToWorkArea : public UPalAIActionWorkerChildBase, public IPalLaunchRecoveryActionInterface {
    GENERATED_BODY()
public:
    UPalAIActionWorkerApproachToWorkArea();


    // Fix for true pure virtual functions not being implemented
};

