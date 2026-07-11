#include "PalWildlifeSanctuaryArea.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

APalWildlifeSanctuaryArea::APalWildlifeSanctuaryArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SanctuarySphere"));
    this->Sphere = (USphereComponent*)RootComponent;
    this->CurrentAlertState = EPalWildlifeSanctuaryAlertState::Normal;
    this->CombatBufferDistance = 12000.00f;
}

void APalWildlifeSanctuaryArea::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void APalWildlifeSanctuaryArea::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void APalWildlifeSanctuaryArea::OnDroneReceivedDamage(FPalDamageResult DamageResult) {
}

void APalWildlifeSanctuaryArea::On_CurrentAlertState() {
}

void APalWildlifeSanctuaryArea::NotifyPlayerDetected(APalPlayerCharacter* Player) {
}

bool APalWildlifeSanctuaryArea::IsLocationInsideCombatZone(const FVector& Location) const {
    return false;
}

bool APalWildlifeSanctuaryArea::IsLocationInside(const FVector& Location) const {
    return false;
}

TArray<APalPlayerCharacter*> APalWildlifeSanctuaryArea::GetInPlayers() const {
    return TArray<APalPlayerCharacter*>();
}

TArray<APalPlayerCharacter*> APalWildlifeSanctuaryArea::GetDetectedPlayers() const {
    return TArray<APalPlayerCharacter*>();
}

float APalWildlifeSanctuaryArea::GetCombatRange() const {
    return 0.0f;
}

AActor* APalWildlifeSanctuaryArea::FindDroneAimTarget(APalCharacter* DroneActor, float Range, AActor* CurrentTarget) {
    return NULL;
}

void APalWildlifeSanctuaryArea::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalWildlifeSanctuaryArea, CurrentAlertState);
}


