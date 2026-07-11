#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBaseCampRecoverHungryChildBase.h"
#include "PalLaunchRecoveryActionInterface.h"
#include "PalAIActionBaseCampRecoverHungryApproachToFoodBox.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalAIActionBaseCampRecoverHungryApproachToFoodBox : public UPalAIActionBaseCampRecoverHungryChildBase, public IPalLaunchRecoveryActionInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LaunchRecoveryMaxFailCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContinuousStuckTimeoutSeconds;
    
public:
    UPalAIActionBaseCampRecoverHungryApproachToFoodBox();


    // Fix for true pure virtual functions not being implemented
};

