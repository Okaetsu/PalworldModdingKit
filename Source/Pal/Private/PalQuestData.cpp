#include "PalQuestData.h"
#include "Net/UnrealNetwork.h"

UPalQuestData::UPalQuestData() {
    this->QuestBlockIndex = -1;
    this->bPlayOrderEffect = true;
    this->bPlayCompleteEffect = true;
}

void UPalQuestData::TakeAdditionalReward_Implementation() {
}

void UPalQuestData::OnUpdatedQuestBlock_ServerInternal(UPalQuestBlock* UpdatedBlock) {
}

void UPalQuestData::OnRequestReturnBlock_ServerInternal(UPalQuestBlock* UpdatedBlock) {
}

void UPalQuestData::OnRep_QuestId() {
}

void UPalQuestData::OnRep_QuestBlockIndex() {
}

void UPalQuestData::OnRep_CurrentBlock() {
}

void UPalQuestData::OnCompletedQuestBlock_ServerInternal(UPalQuestBlock* CompletedBlock) {
}

void UPalQuestData::LoadQuestBlockForUI(const int32 Index) {
}

void UPalQuestData::InitializeForUI(const FGuid& InOwnerPlayerUId, const FName& InQuestName) {
}

void UPalQuestData::GetSortedQuestBlocksForUI(TArray<UPalQuestBlock*>& OutBlocks) const {
}

void UPalQuestData::GetQuestNameText(FText& OutText) const {
}

TArray<FName> UPalQuestData::GetQuestNameMsgIdRowNames() const {
    return TArray<FName>();
}

TArray<FName> UPalQuestData::GetQuestIdRowNames() const {
    return TArray<FName>();
}

FName UPalQuestData::GetQuestId() const {
    return NAME_None;
}

void UPalQuestData::GetQuestDescriptionText(FText& OutText) const {
}

TArray<FName> UPalQuestData::GetQuestDescriptionMsgIdRowNames() const {
    return TArray<FName>();
}

void UPalQuestData::GetQuestBlocks(TArray<UPalQuestBlock*>& OutBlocks) const {
}

FGuid UPalQuestData::GetOwnerPlayerUId() const {
    return FGuid{};
}

FPalCommonQuestRewardData UPalQuestData::GetCustomDisplayRewardData_Implementation() {
    return FPalCommonQuestRewardData{};
}

void UPalQuestData::GetCommonRewardData(FPalCommonQuestRewardData& OutData) {
}

void UPalQuestData::FormatQuestTitleText_Implementation(const FText& InOriginalText, FText& OutText) const {
}

void UPalQuestData::FormatQuestDescriptionText_Implementation(const FText& InOriginalText, FText& OutText) const {
}

void UPalQuestData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalQuestData, NowQuestBlocks);
    DOREPLIFETIME(UPalQuestData, QuestBlockIndex);
    DOREPLIFETIME(UPalQuestData, QuestId);
}


