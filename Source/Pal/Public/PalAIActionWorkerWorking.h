#pragma once
#include "CoreMinimal.h"
#include "EPalWorkType.h"
#include "PalAIActionWorkerChildBase.h"
#include "PalLaunchRecoveryActionInterface.h"
#include "PalAIActionWorkerWorking.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPalAIActionWorkerWorking : public UPalAIActionWorkerChildBase, public IPalLaunchRecoveryActionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalWorkType CurrentWorkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnSpeedToTarget;
    
public:
    UPalAIActionWorkerWorking();


    // Fix for true pure virtual functions not being implemented
};

