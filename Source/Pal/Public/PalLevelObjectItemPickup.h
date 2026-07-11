#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemPickupData.h"
#include "PalLevelObjectObtainable.h"
#include "PalLevelObjectItemPickup.generated.h"

UCLASS(Blueprintable)
class PAL_API APalLevelObjectItemPickup : public APalLevelObjectObtainable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemPickupData ItemPickupRowName;
    
public:
    APalLevelObjectItemPickup(const FObjectInitializer& ObjectInitializer);

};

