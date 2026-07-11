#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalInteractLockSettingComponentCustomMsgIdChooser.generated.h"

UCLASS(Blueprintable)
class UPalInteractLockSettingComponentCustomMsgIdChooser : public UObject {
    GENERATED_BODY()
public:
    UPalInteractLockSettingComponentCustomMsgIdChooser();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetCustomMsgId() const;
    
};

