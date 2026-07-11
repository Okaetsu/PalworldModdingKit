#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalQuestBlock.h"
#include "PalQuestBlockChangeBulletTutorialTriggerSetting.h"
#include "PalQuestBlock_ChangeBulletTutorialTrigger.generated.h"

class UPalItemContainer;

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_ChangeBulletTutorialTrigger : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalDataTableRowName_ItemData, FPalQuestBlockChangeBulletTutorialTriggerSetting> TriggerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> ObtainedWeaponMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> ObtainedBulletMap;
    
public:
    UPalQuestBlock_ChangeBulletTutorialTrigger();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdatedInventoryContainer(UPalItemContainer* Container);
    
};

