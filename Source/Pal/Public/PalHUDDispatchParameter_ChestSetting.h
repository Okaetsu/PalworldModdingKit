#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameter_MapObject.h"
#include "PalHUDDispatchParameter_ChestSetting.generated.h"

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_ChestSetting : public UPalHUDDispatchParameter_MapObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SecurityTabFirst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanEditSecurity;
    
    UPalHUDDispatchParameter_ChestSetting();

};

