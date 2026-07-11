#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectFarmBlockV2Model.h"
#include "PalNetArchive.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectFarmBlockRecipeModel.generated.h"

class UPalMapObjectFarmBlockRecipeStateBehaviourMachine;
class UPalUserWidgetOverlayUI;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectFarmBlockRecipeModel : public UPalMapObjectFarmBlockV2Model {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateCropDataIdDelegate, FName, CropDataId);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateCropDataIdDelegate OnUpdateCropDataIdDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> AvailableCropDataIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMapObjectFarmBlockRecipeStateBehaviourMachine* RecipeStateBehaviourMachine;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> MenuUIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CropDataIdForNotify, meta=(AllowPrivateAccess=true))
    FName CropDataIdForNotify;
    
public:
    UPalMapObjectFarmBlockRecipeModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void SelectCrop_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CropDataIdForNotify();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetAvailableCropDataIds() const;
    
};

