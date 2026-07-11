#include "PalBuildObjectMultiProduct.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "PalMapObjectMultiProductModel.h"

APalBuildObjectMultiProduct::APalBuildObjectMultiProduct(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ConcreteModelClass = UPalMapObjectMultiProductModel::StaticClass();
    this->VisualChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("VisualChildActorComponent"));
    this->VisualChildActorComponent->SetupAttachment(RootComponent);
}


void APalBuildObjectMultiProduct::PlayAnimationOnProductModeChanged_Multicast_Implementation() {
}

void APalBuildObjectMultiProduct::OnSetConcreteModelAfterAvailable(UPalMapObjectConcreteModelBase* ConcreteModel) {
}


