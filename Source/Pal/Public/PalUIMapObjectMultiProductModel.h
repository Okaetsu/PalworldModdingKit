#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalUIMultiProductModeInfo.h"
#include "PalUIMapObjectMultiProductModel.generated.h"

class UPalMapObjectMultiProductModel;

UCLASS(Blueprintable)
class PAL_API UPalUIMapObjectMultiProductModel : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalMapObjectMultiProductModel> OwnerModel;
    
public:
    UPalUIMapObjectMultiProductModel();

    UFUNCTION(BlueprintCallable)
    void SelectProductId(FName ProductId);
    
    UFUNCTION(BlueprintCallable)
    void RequestSelectMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentProductId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalUIMultiProductModeInfo> GetAvailableModeInfos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRequestSelectMode() const;
    
};

