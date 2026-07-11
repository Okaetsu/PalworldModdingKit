#include "PalDiscordClient.h"

UPalDiscordClient::UPalDiscordClient() {
    this->GameState = NULL;
    this->NetDriver = NULL;
    this->LocalPlayerState = NULL;
    this->Discord = NULL;
    this->codeVerifier = NULL;
    this->Call = NULL;
    this->CurrentInputDevice = NULL;
    this->CurrentActivity = NULL;
}

void UPalDiscordClient::Unmute(const UDiscordRelationshipHandle* Friend) {
}

void UPalDiscordClient::UnlinkAccount() {
}

void UPalDiscordClient::Unblock(const UDiscordRelationshipHandle* Friend) {
}

bool UPalDiscordClient::SetVoiceChatInputDevice(const FString& DeviceID) {
    return false;
}

void UPalDiscordClient::SendMessage(const UDiscordRelationshipHandle* Friend, const FString& Message) {
}

void UPalDiscordClient::RequestInputDevices() {
}

void UPalDiscordClient::Prepare() {
}

void UPalDiscordClient::OnStatusChanged(EDiscordClientStatus Status, EDiscordClientError Error, int32 errorDetail) {
}

void UPalDiscordClient::OnJoin(const FString& joinSecret) {
}

void UPalDiscordClient::OnEndedCall() {
}

void UPalDiscordClient::Mute(const UDiscordRelationshipHandle* Friend) {
}

void UPalDiscordClient::LinkAccount() {
}

bool UPalDiscordClient::IsMute(const UDiscordRelationshipHandle* Friend) const {
    return false;
}

bool UPalDiscordClient::IsLinkedAccount() const {
    return false;
}

bool UPalDiscordClient::IsBlock(const UDiscordRelationshipHandle* Friend) const {
    return false;
}

void UPalDiscordClient::Invite(const UDiscordRelationshipHandle* Friend) {
}

bool UPalDiscordClient::GetVoiceChatGaugeState(const FString& DiscordUserId, bool& bOutListenMuted, bool& bOutSpeakerMuted, bool& bOutSpeaking) const {
    return false;
}

void UPalDiscordClient::GetFriends(TArray<UDiscordRelationshipHandle*>& Friends) {
}

EDiscordClientStatus UPalDiscordClient::GetDiscordClientStatus() const {
    return EDiscordClientStatus::Disconnected;
}

FString UPalDiscordClient::GetDefaultInputDeviceId() const {
    return TEXT("");
}

FString UPalDiscordClient::GetCurrentInputDeviceId() const {
    return TEXT("");
}

TArray<FPalDiscordInputDeviceInfo> UPalDiscordClient::GetCachedInputDevices() const {
    return TArray<FPalDiscordInputDeviceInfo>();
}

void UPalDiscordClient::ConnectServerByAddress(const FString& Address, int32 Port) {
}

bool UPalDiscordClient::CanUseVoiceChat() const {
    return false;
}

bool UPalDiscordClient::CanUseNormalAccountLinking() const {
    return false;
}

bool UPalDiscordClient::CanInvite(const UDiscordRelationshipHandle* Friend) const {
    return false;
}

void UPalDiscordClient::Block(const UDiscordRelationshipHandle* Friend) {
}


