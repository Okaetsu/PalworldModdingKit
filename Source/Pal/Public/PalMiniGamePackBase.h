#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "PalMiniGamePackBase.generated.h"

class UPalHUDDispatchParameterBase;
class UPalUserWidgetStackableUI;

UCLASS(Abstract, Blueprintable)
class PAL_API UPalMiniGamePackBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetStackableUI> MiniGameWidgetClass;
    
    UPalMiniGamePackBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPalHUDDispatchParameterBase* CreateDispatchParameter(UObject* Outer);
    
};

