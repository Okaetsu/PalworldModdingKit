#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PalBuildObject.h"
#include "PalBuildObjectClinic.generated.h"

UCLASS(Blueprintable)
class PAL_API APalBuildObjectClinic : public APalBuildObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference WalkAroundVolumeRef;
    
public:
    APalBuildObjectClinic(const FObjectInitializer& ObjectInitializer);

};

