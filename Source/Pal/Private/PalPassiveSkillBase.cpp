#include "PalPassiveSkillBase.h"

UPalPassiveSkillBase::UPalPassiveSkillBase() {
    this->isReserving = true;
    this->bIsRestricted = false;
    this->bRequireWorkerWorkingPassiveSkill = false;
    this->bIsWorking = false;
    this->bIsBoundToTimeChange = false;
    this->CurrentRank = 0;
}

void UPalPassiveSkillBase::OnWorkerAssignChanged(UPalCharacterParameterComponent* Parameter) {
}

void UPalPassiveSkillBase::OnUpdateOtomoSlotWithActor(int32 SlotIndex, UPalIndividualCharacterHandle* LastHandle) {
}

void UPalPassiveSkillBase::OnUpdateOtomoHolder(APalCharacter* Character) {
}

void UPalPassiveSkillBase::OnUpdateInventoryContainer(UPalItemContainer* Container) {
}

void UPalPassiveSkillBase::OnUpdateBaseCampId(const FGuid& BaseCampId) {
}

void UPalPassiveSkillBase::OnRideInactivated() {
}

void UPalPassiveSkillBase::OnRideActivated() {
}

void UPalPassiveSkillBase::OnReserveInactivated() {
}

void UPalPassiveSkillBase::OnReserveActivated() {
}

void UPalPassiveSkillBase::OnRemoveWorker(UPalIndividualCharacterHandle* RemoveCharacterHandle) {
}

void UPalPassiveSkillBase::OnInactivatedAsWorker() {
}

void UPalPassiveSkillBase::OnInactivatedAsOtomoHolder() {
}

void UPalPassiveSkillBase::OnInactivatedAsOtomo() {
}

void UPalPassiveSkillBase::OnGetOffRide(AActor* RideActor) {
}

void UPalPassiveSkillBase::OnChangeSprint(UPalCharacterMovementComponent* Component, bool IsInSprint) {
}

void UPalPassiveSkillBase::OnChangeOtomoActive(APalCharacter* Otomo, bool IsActive) {
}

void UPalPassiveSkillBase::OnChangeDisablePassiveSkill(bool isDisable, bool IsAllReset) {
}

void UPalPassiveSkillBase::OnChangeDayTime() {
}

void UPalPassiveSkillBase::OnChangeDashSwim(UPalCharacterMovementComponent* Component, bool IsInDashSwim) {
}

void UPalPassiveSkillBase::OnChangeBattleMode(bool bIsBattleMode) {
}

void UPalPassiveSkillBase::OnAddNewWorker(UPalIndividualCharacterHandle* AddCharacterHandle) {
}

void UPalPassiveSkillBase::OnActivatedAsWorker() {
}

void UPalPassiveSkillBase::OnActivatedAsOtomoHolder() {
}

void UPalPassiveSkillBase::OnActivatedAsOtomo() {
}

void UPalPassiveSkillBase::ObserveWorking() {
}

bool UPalPassiveSkillBase::IsRestricted() const {
    return false;
}

void UPalPassiveSkillBase::Initialize(const TArray<FPalPassiveSkills>& _PassiveSkills) {
}

void UPalPassiveSkillBase::InactivateWorkingSkill() {
}

TArray<FName> UPalPassiveSkillBase::GetPassiveSkillList() const {
    return TArray<FName>();
}

APalCharacter* UPalPassiveSkillBase::GetOwner() const {
    return NULL;
}

int32 UPalPassiveSkillBase::GetOtomoRank() const {
    return 0;
}

void UPalPassiveSkillBase::AllResetPassiveSkill() {
}


