#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalDebugTeleportPointOptions.h"
#include "PalDebugTeleportPoint.generated.h"

UCLASS(Blueprintable)
class PAL_API APalDebugTeleportPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDebugTeleportPointOptions StartPointOptions;
    
public:
    APalDebugTeleportPoint(const FObjectInitializer& ObjectInitializer);

};

