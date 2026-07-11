#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampModulePassiveEffectProviderInterface.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectBaseCampPassiveEffectModel.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectBaseCampPassiveEffectModel : public UPalMapObjectConcreteModelBase, public IPalBaseCampModulePassiveEffectProviderInterface {
    GENERATED_BODY()
public:
    UPalMapObjectBaseCampPassiveEffectModel();


    // Fix for true pure virtual functions not being implemented
};

