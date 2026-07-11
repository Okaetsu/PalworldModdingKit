#pragma once
#include "CoreMinimal.h"
#include "PalUIPaldexFilterInfo.h"
#include "PalUIPaldex_DisplayInfo.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIPaldex.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIPaldex : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalUIPaldex_DisplayInfo> DisplayInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalUIPaldex_DisplayInfo> displayInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HideFilteringCharacterIdArray;
    
public:
    UPalUIPaldex();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalUIPaldex_DisplayInfo> GetFilteredDisplayInfoArray(const FPalUIPaldexFilterInfo& FilterInfo) const;
    
    UFUNCTION(BlueprintCallable)
    void CreateDisplayInfo();
    
};

