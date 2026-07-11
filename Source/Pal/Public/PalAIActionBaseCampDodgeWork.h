#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBase.h"
#include "PalBaseCampWorkerWalkAroundDynamicInfo.h"
#include "PalBaseCampWorkerWalkAroundSettings.h"
#include "PalLaunchRecoveryActionInterface.h"
#include "PalAIActionBaseCampDodgeWork.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalAIActionBaseCampDodgeWork : public UPalAIActionBase, public IPalLaunchRecoveryActionInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalBaseCampWorkerWalkAroundSettings WalkAroundSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalBaseCampWorkerWalkAroundDynamicInfo WalkAroundDynamicInfo;
    
public:
    UPalAIActionBaseCampDodgeWork();


    // Fix for true pure virtual functions not being implemented
};

