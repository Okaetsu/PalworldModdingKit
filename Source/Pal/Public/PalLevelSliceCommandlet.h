#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "PalLevelSliceCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class PAL_API UPalLevelSliceCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UPalLevelSliceCommandlet();

};

