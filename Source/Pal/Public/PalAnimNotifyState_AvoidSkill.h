#pragma once
#include "CoreMinimal.h"
#include "PalAnimNotifyState_AvoidTime.h"
#include "PalAnimNotifyState_AvoidSkill.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PAL_API UPalAnimNotifyState_AvoidSkill : public UPalAnimNotifyState_AvoidTime {
    GENERATED_BODY()
public:
    UPalAnimNotifyState_AvoidSkill();

};

