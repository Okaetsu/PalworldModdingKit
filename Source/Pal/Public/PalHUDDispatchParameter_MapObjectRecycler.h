#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_MapObjectRecycler.generated.h"

class UPalUIMapObjectRecyclerModel;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_MapObjectRecycler : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalUIMapObjectRecyclerModel* UIModel;
    
    UPalHUDDispatchParameter_MapObjectRecycler();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalUIMapObjectRecyclerModel* GetUIModel() const;
    
};

