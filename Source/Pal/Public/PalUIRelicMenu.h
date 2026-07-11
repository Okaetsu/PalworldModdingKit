#pragma once
#include "CoreMinimal.h"
#include "EPalRelicType.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIRelicMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIRelicMenu : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    UPalUIRelicMenu();

protected:
    UFUNCTION(BlueprintCallable)
    void RequestRankup(const TMap<EPalRelicType, int32>& RankupMap);
    
};

