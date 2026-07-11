#pragma once
#include "CoreMinimal.h"
#include "EPalFarmCropState.h"
#include "PalBuildObject.h"
#include "PalBuildObjectFarmBlockRecipe.generated.h"

class APalMapObjectFarmCrop;
class UNiagaraSystem;
class USceneComponent;

UCLASS(Blueprintable)
class PAL_API APalBuildObjectFarmBlockRecipe : public APalBuildObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CropSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* GrowupFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalMapObjectFarmCrop* CropActor;
    
public:
    APalBuildObjectFarmBlockRecipe(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateState(EPalFarmCropState PreviousState, EPalFarmCropState NextState);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeCropDataId(FName CropDataId);
    
};

