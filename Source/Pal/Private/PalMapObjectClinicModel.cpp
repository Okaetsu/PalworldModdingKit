#include "PalMapObjectClinicModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectClinicModel::UPalMapObjectClinicModel() {
    this->CurrentSicknessSuppressionRate = 0.00f;
    this->CurrentSanitySuppressionRate = 0.00f;
    this->CurrentHygieneStarLevelRaw = 0;
    this->CurrentAssignedMedicineLv = 0;
    this->MaxHygieneStarLevel = 3;
}

void UPalMapObjectClinicModel::OnUpdateAssignedCharacter(UPalWorkBase* Work) {
}

void UPalMapObjectClinicModel::OnUnassignedCharacter_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& IndividualId) {
}

void UPalMapObjectClinicModel::OnRep_CurrentSicknessSuppressionRate() {
}

void UPalMapObjectClinicModel::OnRep_CurrentSanitySuppressionRate() {
}

void UPalMapObjectClinicModel::OnRep_CurrentHygieneStarLevelRaw() {
}

void UPalMapObjectClinicModel::OnRep_CurrentAssignedMedicineLv() {
}

void UPalMapObjectClinicModel::OnAssignWork_ServerInternal(UPalWorkBase* Work, UPalWorkAssign* WorkAssign) {
}

float UPalMapObjectClinicModel::GetSicknessSuppressionRateFor(EPalBaseCampWorkerSickType SickType) const {
    return 0.0f;
}

int32 UPalMapObjectClinicModel::GetMaxHygieneStarLevel() const {
    return 0;
}

float UPalMapObjectClinicModel::GetCurrentSicknessSuppressionRate() const {
    return 0.0f;
}

float UPalMapObjectClinicModel::GetCurrentSanitySuppressionRate() const {
    return 0.0f;
}

int32 UPalMapObjectClinicModel::GetCurrentHygieneStarLevelRaw() const {
    return 0;
}

int32 UPalMapObjectClinicModel::GetCurrentAssignedMedicineLv() const {
    return 0;
}

UPalMapObjectBaseCampPassiveEffectClinicParameterComponent* UPalMapObjectClinicModel::GetClinicParameterComponent() const {
    return NULL;
}

int32 UPalMapObjectClinicModel::GetAssignedMedicineLevel() const {
    return 0;
}

UPalIndividualCharacterParameter* UPalMapObjectClinicModel::GetAssignedCharacterParameter() const {
    return NULL;
}

void UPalMapObjectClinicModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectClinicModel, CurrentSicknessSuppressionRate);
    DOREPLIFETIME(UPalMapObjectClinicModel, CurrentSanitySuppressionRate);
    DOREPLIFETIME(UPalMapObjectClinicModel, CurrentHygieneStarLevelRaw);
    DOREPLIFETIME(UPalMapObjectClinicModel, CurrentAssignedMedicineLv);
    DOREPLIFETIME(UPalMapObjectClinicModel, MaxHygieneStarLevel);
}


