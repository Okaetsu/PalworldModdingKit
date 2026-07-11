#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Templates/SubclassOf.h"
#include "PalAnimNotifyState_CameraModifier.generated.h"

class UPalCameraModifier;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PAL_API UPalAnimNotifyState_CameraModifier : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalCameraModifier> CameraModifierClass;
    
public:
    UPalAnimNotifyState_CameraModifier();

};

