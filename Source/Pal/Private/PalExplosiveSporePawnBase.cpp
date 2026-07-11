#include "PalExplosiveSporePawnBase.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

APalExplosiveSporePawnBase::APalExplosiveSporePawnBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->OwnerVolume = NULL;
    this->PointIndex = -1;
    this->Root = (USceneComponent*)RootComponent;
    this->SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
    this->ExplodeCollision = CreateDefaultSubobject<USphereComponent>(TEXT("ExplodeCollision"));
    this->VisualRoot = CreateDefaultSubobject<USceneComponent>(TEXT("VisualRoot"));
    this->VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualMesh"));
    this->bWarningActive = false;
    this->bServerActive = true;
    this->bLocalHitTriggered = false;
    this->ExplodeCollision->SetupAttachment(RootComponent);
    this->SphereCollision->SetupAttachment(RootComponent);
    this->VisualMesh->SetupAttachment(VisualRoot);
    this->VisualRoot->SetupAttachment(RootComponent);
}

void APalExplosiveSporePawnBase::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Sweep) {
}

void APalExplosiveSporePawnBase::Multicast_SetWarningActive_Implementation(bool bNewWarningActive) {
}

void APalExplosiveSporePawnBase::Multicast_OnExplode_Implementation() {
}

void APalExplosiveSporePawnBase::InitFromFieldVolume(APalSporeFieldVolumeBase* InOwnerVolume, int32 InPointIndex, const FVector& FieldCenterWS, const FVector& FieldExtentWS, float InMarginCm) {
}





