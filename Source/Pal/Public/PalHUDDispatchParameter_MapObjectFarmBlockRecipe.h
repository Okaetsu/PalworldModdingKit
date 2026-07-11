#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_MapObjectFarmBlockRecipe.generated.h"

class UPalUIMapObjectFarmBlockRecipeModel;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_MapObjectFarmBlockRecipe : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalUIMapObjectFarmBlockRecipeModel* Model;
    
    UPalHUDDispatchParameter_MapObjectFarmBlockRecipe();

};

