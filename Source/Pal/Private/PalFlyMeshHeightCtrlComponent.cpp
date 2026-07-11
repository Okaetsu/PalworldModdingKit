#include "PalFlyMeshHeightCtrlComponent.h"
#include "Net/UnrealNetwork.h"

UPalFlyMeshHeightCtrlComponent::UPalFlyMeshHeightCtrlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlingAdditionalHeight = 0.00f;
    this->HighFlingAddtionalHeight = 0.00f;
    this->bEnableHoverCapsule = false;
    this->bDisableRideLanding = false;
    this->FlyingCapsuleHalfHeight = 0.00f;
    this->FlyingCapsuleRadius = 0.00f;
    this->HoverExtendInterpTime = 0.20f;
    this->bHoldFlyingCapsuleOnDismount = false;
    this->bStopExtendByHeadHit = false;
    this->bDebugHoverCapsuleLog = false;
    this->State = EPalFlyHeightType::Stop;
    this->bIsHighFling = false;
    this->bIsHighFlingCache = false;
    this->bSkipWildHighFlingForNPCOtomoSpawn = false;
    this->bDisabledBattleModeFlyingChange = false;
    this->SK = NULL;
}

void UPalFlyMeshHeightCtrlComponent::ToLand_All_Implementation(float Duration) {
}

void UPalFlyMeshHeightCtrlComponent::ToLand(float Duration) {
}

void UPalFlyMeshHeightCtrlComponent::ToFly_All_Implementation(float Duration) {
}

void UPalFlyMeshHeightCtrlComponent::ToFly(float Duration) {
}

void UPalFlyMeshHeightCtrlComponent::SetupMesh() {
}

void UPalFlyMeshHeightCtrlComponent::OnUpdatePlayerHp(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP) {
}

void UPalFlyMeshHeightCtrlComponent::OnRep_bIsHighFling() {
}

void UPalFlyMeshHeightCtrlComponent::OnMovementModeChanged(UPalCharacterMovementComponent* Component, TEnumAsByte<EMovementMode> PrevMode, TEnumAsByte<EMovementMode> NewMode, EPalCharacterMovementCustomMode PrevCustomMode, EPalCharacterMovementCustomMode NewCustomMode) {
}

void UPalFlyMeshHeightCtrlComponent::OnInitializedCharacter(APalCharacter* OwnerCharacter) {
}

void UPalFlyMeshHeightCtrlComponent::OnDead(FPalDeadInfo Info) {
}

void UPalFlyMeshHeightCtrlComponent::OnChangeBattleMode(bool bIsBattleMode) {
}

bool UPalFlyMeshHeightCtrlComponent::IsRideLandingDisabled() const {
    return false;
}

bool UPalFlyMeshHeightCtrlComponent::IsFlying() const {
    return false;
}

void UPalFlyMeshHeightCtrlComponent::HighFlyingStart_Implementation() {
}

void UPalFlyMeshHeightCtrlComponent::HighFlingEnd_Server() {
}

void UPalFlyMeshHeightCtrlComponent::HighFlingEnd_Implementation() {
}

float UPalFlyMeshHeightCtrlComponent::GetDefaultMeshLocationZ() {
    return 0.0f;
}

void UPalFlyMeshHeightCtrlComponent::Debug_ForceHighFlingEnd() {
}

void UPalFlyMeshHeightCtrlComponent::Debug_DisabledBattleModeFlyingChange() {
}

void UPalFlyMeshHeightCtrlComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalFlyMeshHeightCtrlComponent, bIsHighFling);
}


