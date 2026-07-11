#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PalStatusHUDQueryInterface.generated.h"

UINTERFACE(Blueprintable)
class UPalStatusHUDQueryInterface : public UInterface {
    GENERATED_BODY()
};

class IPalStatusHUDQueryInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetRemainingTime_ForHUD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetHUDStackCount_ForHUD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDuration_ForHUD() const;
    
};

