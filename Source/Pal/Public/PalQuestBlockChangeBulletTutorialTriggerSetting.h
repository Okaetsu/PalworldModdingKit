#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalQuestBlockChangeBulletTutorialTriggerSetting.generated.h"

USTRUCT(BlueprintType)
struct FPalQuestBlockChangeBulletTutorialTriggerSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_ItemData> TriggerBulletItems;
    
    PAL_API FPalQuestBlockChangeBulletTutorialTriggerSetting();
};

