#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalUIFarmBlockRecipeCropInfo.h"
#include "PalUIMapObjectFarmBlockRecipeModel.generated.h"

class UPalMapObjectFarmBlockRecipeModel;

UCLASS(Blueprintable)
class PAL_API UPalUIMapObjectFarmBlockRecipeModel : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalMapObjectFarmBlockRecipeModel> OwnerModel;
    
public:
    UPalUIMapObjectFarmBlockRecipeModel();

    UFUNCTION(BlueprintCallable)
    void SelectCropDataId(FName CropDataId);
    
    UFUNCTION(BlueprintCallable)
    void RequestSelectCrop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentCropDataId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalUIFarmBlockRecipeCropInfo> GetAvailableCropInfos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRequestSelectCrop() const;
    
};

