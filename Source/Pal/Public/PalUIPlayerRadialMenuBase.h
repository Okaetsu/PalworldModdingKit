#pragma once
#include "CoreMinimal.h"
#include "PalItemSlotId.h"
#include "PalUserWidget.h"
#include "PalUIPlayerRadialMenuBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIPlayerRadialMenuBase : public UPalUserWidget {
    GENERATED_BODY()
public:
    UPalUIPlayerRadialMenuBase();
private:
    UFUNCTION()
    void SelectedFeed(const FPalItemSlotId& ItemSlotId, const int64 itemNum);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OpenOtomoFeedInventory();
    
    UFUNCTION(BlueprintCallable)
    void LaunchPhotoMode();
    
};

