#pragma once
#include "CoreMinimal.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIPickingGame.generated.h"

class UPalPickingGameProcessor;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIPickingGame : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalPickingGameProcessor* MyPickingGameProcessor;
    
public:
    UPalUIPickingGame();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGameResult(const bool bResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPalPickingGameProcessor* RegisterPickinGameProcessor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalPickingGameProcessor* GetPickingGameProcessor() const;
    
};

