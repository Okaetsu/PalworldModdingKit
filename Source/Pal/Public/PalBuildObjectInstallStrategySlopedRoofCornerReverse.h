#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectInstallStrategyBase.h"
#include "PalBuildObjectInstallStrategySlopedRoofCornerReverse.generated.h"

class APalBuildObject;

UCLASS(Blueprintable)
class PAL_API UPalBuildObjectInstallStrategySlopedRoofCornerReverse : public UPalBuildObjectInstallStrategyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalBuildObject* HitBuildObjectCache;
    
public:
    UPalBuildObjectInstallStrategySlopedRoofCornerReverse();

};

