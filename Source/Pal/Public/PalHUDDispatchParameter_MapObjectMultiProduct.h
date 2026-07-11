#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_MapObjectMultiProduct.generated.h"

class UPalUIMapObjectMultiProductModel;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_MapObjectMultiProduct : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalUIMapObjectMultiProductModel* Model;
    
    UPalHUDDispatchParameter_MapObjectMultiProduct();

};

