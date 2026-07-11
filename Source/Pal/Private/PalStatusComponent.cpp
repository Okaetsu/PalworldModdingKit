#include "PalStatusComponent.h"
#include "Net/UnrealNetwork.h"

UPalStatusComponent::UPalStatusComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalStatusComponent::SomeStatus_ToAll_Implementation(EPalStatusID statusID, FStatusDynamicParameter Param) {
}

void UPalStatusComponent::SetDisableAddStatusIDs(TArray<EPalStatusID> StatusIDs) {
}

void UPalStatusComponent::ResetDisableAddStatusIDs() {
}

void UPalStatusComponent::RemoveStatusInvoker(const FGuid& InvokerID) {
}

void UPalStatusComponent::RemoveStatus_ToServer_Implementation(EPalStatusID statusID, int32 issuerID) {
}

void UPalStatusComponent::RemoveStatus(EPalStatusID statusID) {
}

void UPalStatusComponent::RemoveAll() {
}

void UPalStatusComponent::OnStartPassiveSkill(EPalPassiveSkillEffectType EffectType, float Value) {
}

void UPalStatusComponent::OnRep_ExecutionStatusList() {
}

void UPalStatusComponent::OnEndPassiveSkill(EPalPassiveSkillEffectType EffectType) {
}

void UPalStatusComponent::OnChangeActiveActor(bool bInIsActive) {
}

UPalStatusBase* UPalStatusComponent::GetExecutionStatus(EPalStatusID statusID) {
    return NULL;
}

TArray<EPalStatusID> UPalStatusComponent::GetDisableAddStatusIDs() const {
    return TArray<EPalStatusID>();
}

void UPalStatusComponent::EndPlay(const TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void UPalStatusComponent::BeginPlay() {
}

void UPalStatusComponent::AddStatusParameter(EPalStatusID statusID, FStatusDynamicParameter Param) {
}

void UPalStatusComponent::AddStatusInvokerParameter(EPalStatusID statusID, FStatusDynamicParameter Param, const FGuid& InvokerID) {
}

void UPalStatusComponent::AddStatusInvoker(EPalStatusID statusID, const FGuid& InvokerID) {
}

void UPalStatusComponent::AddStatus_ToServer_Implementation(EPalStatusID statusID, FStatusDynamicParameter Param, int32 issuerID) {
}

void UPalStatusComponent::AddStatus_ToClient_Implementation(EPalStatusID statusID, FStatusDynamicParameter Param) {
}

void UPalStatusComponent::AddStatus(EPalStatusID statusID) {
}

void UPalStatusComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalStatusComponent, ExecutionStatusList);
}


