#pragma once
#include "CoreMinimal.h"
#include "OnPalSelectedDelegateDelegate.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_ArenaPalSelect.generated.h"

class UPalArenaSequencer;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_ArenaPalSelect : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalArenaSequencer* ArenaSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnPalSelectedDelegate OnPalSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsSoloMode;
    
    UPalHUDDispatchParameter_ArenaPalSelect();

};

