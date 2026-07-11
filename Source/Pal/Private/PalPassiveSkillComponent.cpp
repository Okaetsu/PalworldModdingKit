#include "PalPassiveSkillComponent.h"
#include "Net/UnrealNetwork.h"

UPalPassiveSkillComponent::UPalPassiveSkillComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalPassiveSkillComponent::SetupSkillFromSelf(UObject* OwnerObject, const TArray<FName>& skillList) {
}

void UPalPassiveSkillComponent::SetDisablePassiveSkill(FName flagName, bool isDisable) {
}

void UPalPassiveSkillComponent::ServerRemoveDebugPassiveSkillType_Implementation(EPalPassiveSkillEffectType Type) {
}

void UPalPassiveSkillComponent::ServerClearDebugSkillInfos_Implementation() {
}

void UPalPassiveSkillComponent::ServerAddDebugPassiveSkillType_Implementation(EPalPassiveSkillEffectType Type, float Value) {
}

void UPalPassiveSkillComponent::OverrideDamageInfoBySkill(FPalDamageInfo& inoutDamageInfo) {
}

void UPalPassiveSkillComponent::OnUpdateCharacterRank(int32 NowRank, int32 OldRank) {
}

void UPalPassiveSkillComponent::OnStartSkillEffect(EPalPassiveSkillEffectType EffectType, float Value) {
}

void UPalPassiveSkillComponent::OnSetSkillEffectWithOwner(EPalPassiveSkillEffectType EffectType, const UObject* effectOwner) {
}

void UPalPassiveSkillComponent::OnRep_SkillInfos() {
}

void UPalPassiveSkillComponent::OnRep_DebugSkillInfos() {
}

void UPalPassiveSkillComponent::OnInitializedCharacter(APalCharacter* OwnerCharacter) {
}

void UPalPassiveSkillComponent::OnEndSkillEffect(EPalPassiveSkillEffectType EffectType) {
}

void UPalPassiveSkillComponent::OnClearSkillEffectWithOwner(EPalPassiveSkillEffectType EffectType, const UObject* effectOwner) {
}

void UPalPassiveSkillComponent::OnChangeSkillEffectValue(EPalPassiveSkillEffectType EffectType, float Value) {
}

bool UPalPassiveSkillComponent::IsDisablePassiveSkill() const {
    return false;
}

bool UPalPassiveSkillComponent::HasSkill(EPalPassiveSkillEffectType Type, bool containEquip) {
    return false;
}

UPalStatusBase* UPalPassiveSkillComponent::GetStatusByGranterAndPassiveEffect(const FPalInstanceID& InGranterInstanceID, const FPalPassiveSkillEffect& InEffect) const {
    return NULL;
}

TArray<FPalPassiveSkillEffectInfos> UPalPassiveSkillComponent::GetSkillInfos() const {
    return TArray<FPalPassiveSkillEffectInfos>();
}

TArray<FPalPassiveSkillEffect> UPalPassiveSkillComponent::GetPassiveSkillsByGranterInstanceID(const FPalInstanceID& InGranterInstanceID) const {
    return TArray<FPalPassiveSkillEffect>();
}

float UPalPassiveSkillComponent::GetParameterWithPassiveSkillEffectByWeaponCondition(float originalValue, EPalPassiveSkillEffectType EffectType, const FPalPassivePartnerSkillItemParameter& ItemParam) {
    return 0.0f;
}

float UPalPassiveSkillComponent::GetParameterWithPassiveSkillEffect(float originalValue, EPalPassiveSkillEffectType EffectType, bool containEquip) {
    return 0.0f;
}

EPalCurveBall UPalPassiveSkillComponent::GetCurveBallTypePassiveEffectByPlayerEquip() {
    return EPalCurveBall::None;
}

float UPalPassiveSkillComponent::GetCaptureLevelUp(const AActor* TargetPal, bool bIsSneakBonus) {
    return 0.0f;
}

TMap<EPalAdditionalEffectType, float> UPalPassiveSkillComponent::GetAddAdditionalEffectMap() {
    return TMap<EPalAdditionalEffectType, float>();
}

void UPalPassiveSkillComponent::ClearSkill(UObject* OwnerObject) {
}

void UPalPassiveSkillComponent::AddSpecialAttackRateInfo(TArray<FPalSpecialAttackRateInfo>& SpecialAttackRateInfos, const AActor* Defender) {
}

void UPalPassiveSkillComponent::AddSkillFromSpawner(UObject* OwnerObject, const TArray<FName>& skillList) {
}

void UPalPassiveSkillComponent::AddSkillFromSelf(UObject* OwnerObject, const TArray<FName>& skillList) {
}

void UPalPassiveSkillComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalPassiveSkillComponent, SkillInfos);
    DOREPLIFETIME(UPalPassiveSkillComponent, DebugSkillInfos);
}


