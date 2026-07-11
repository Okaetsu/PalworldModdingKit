#include "PalInvaderIncidentBase.h"

UPalInvaderIncidentBase::UPalInvaderIncidentBase() {
    this->InvaderType = EPalInvaderType::None;
    this->InvaderDataTable = NULL;
    this->InvaderRewardTable = NULL;
    this->MonsterAIControllerClass = NULL;
    this->EnemyAIControllerClass = NULL;
    this->bUseFindPaths = false;
    this->bCanExecute = false;
    this->Squad = NULL;
    this->bIsArrived = false;
    this->bIsOrganizationGroup = false;
    this->PathFinder = NULL;
}

void UPalInvaderIncidentBase::StartInvader() {
}


bool UPalInvaderIncidentBase::SelectInvaders(int32 Grade, EPalBiomeType Biome, TArray<FPalInvaderSpawnCharacterParameter>& OutInvaderMember) {
    return false;
}

void UPalInvaderIncidentBase::RemoveGroupCharacter(UPalIndividualCharacterHandle* RemoveIndividualHandle) {
}

void UPalInvaderIncidentBase::OnWaveTimeup_Implementation() {
}

void UPalInvaderIncidentBase::OnStartInvade_Implementation() {
}

void UPalInvaderIncidentBase::OnInvaderArrived_Implementation() {
}

void UPalInvaderIncidentBase::OnEndInvade_Implementation() {
}

void UPalInvaderIncidentBase::OnCharacterInitializedForShow(APalCharacter* InCharacter) {
}

bool UPalInvaderIncidentBase::IsGroupCharacter(UPalIndividualCharacterHandle* IndividualHandle) const {
    return false;
}

void UPalInvaderIncidentBase::HideCharacterUntilInitialized(UPalIndividualCharacterHandle* IndividualHandle) {
}

int32 UPalInvaderIncidentBase::GetVisitorNPCReturnTimeMinutes() const {
    return 0;
}

UPalBaseCampModel* UPalInvaderIncidentBase::GetTargetCampModel() const {
    return NULL;
}



void UPalInvaderIncidentBase::GetChosenInvaderGroupName(FText& OutText) const {
}

int32 UPalInvaderIncidentBase::GetCandidateStartLocations(TArray<FVector>& Result) {
    return 0;
}

void UPalInvaderIncidentBase::GetBroadcastParameter(FPalIncidentBroadcastParameter& outParameter) {
}

int32 UPalInvaderIncidentBase::GetAliveInvaderNum() const {
    return 0;
}



void UPalInvaderIncidentBase::AddInvaderOtomo(APalAIController* OtomoAIController) {
}

void UPalInvaderIncidentBase::AddGroupCharacter(UPalIndividualCharacterHandle* AddIndividualHandle, EPalCharacterLocationType LocationType) {
}

void UPalInvaderIncidentBase::AddCharacterLocation(const FPalInstanceID& IndividualId, EPalCharacterLocationType LocationType) {
}


