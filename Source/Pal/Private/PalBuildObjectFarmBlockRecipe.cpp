#include "PalBuildObjectFarmBlockRecipe.h"
#include "Components/SceneComponent.h"

APalBuildObjectFarmBlockRecipe::APalBuildObjectFarmBlockRecipe(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->CropSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("CropSpawnPoint"));
    this->GrowupFX = NULL;
    this->CropActor = NULL;
    this->CropSpawnPoint->SetupAttachment(RootComponent);
}

void APalBuildObjectFarmBlockRecipe::OnUpdateState(EPalFarmCropState PreviousState, EPalFarmCropState NextState) {
}

void APalBuildObjectFarmBlockRecipe::OnChangeCropDataId(FName CropDataId) {
}


