#include "DiscordClient.h"

UDiscordClient::UDiscordClient() {
}

void UDiscordClient::UpdateToken(EDiscordAuthorizationTokenType tokenType, const FString& Token, const FDiscordClientUpdateTokenCallbackDynamic& Callback) {
}

void UDiscordClient::UpdateRichPresence(UDiscordActivity* activity, const FDiscordClientUpdateRichPresenceCallbackDynamic& cb) {
}

void UDiscordClient::UpdateProvisionalAccountDisplayName(const FString& Name, const FDiscordClientUpdateProvisionalAccountDisplayNameCallbackDynamic& Callback) {
}

void UDiscordClient::UnmergeIntoProvisionalAccount(FDiscordUniqueID ApplicationId, EDiscordAuthenticationExternalAuthType externalAuthType, const FString& externalAuthToken, const FDiscordClientUnmergeIntoProvisionalAccountCallbackDynamic& Callback) {
}

void UDiscordClient::UnlinkChannelFromLobby(FDiscordUniqueID LobbyId, const FDiscordClientLinkOrUnlinkChannelCallbackDynamic& Callback) {
}

void UDiscordClient::UnblockUser(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb) {
}

FString UDiscordClient::ThreadToString(EDiscordClientThread Type) {
    return TEXT("");
}

FString UDiscordClient::StatusToString(EDiscordClientStatus Type) {
    return TEXT("");
}

UDiscordCall* UDiscordClient::StartCallWithAudioCallbacks(FDiscordUniqueID LobbyId, const FDiscordClientUserAudioReceivedCallbackDynamic& receivedCb, const FDiscordClientUserAudioCapturedCallbackDynamic& capturedCb) {
    return NULL;
}

UDiscordCall* UDiscordClient::StartCall(FDiscordUniqueID ChannelId) {
    return NULL;
}

bool UDiscordClient::ShowAudioRoutePicker() {
    return false;
}

void UDiscordClient::SetVoiceParticipantChangedCallback(const FDiscordClientVoiceParticipantChangedCallbackDynamic& cb) {
}

void UDiscordClient::SetVoiceLogDir(const FString& Path, EDiscordLoggingSeverity minSeverity) {
}

void UDiscordClient::SetUserUpdatedCallback(const FDiscordClientUserUpdatedCallbackDynamic& cb) {
}

void UDiscordClient::SetTokenExpirationCallback(const FDiscordClientTokenExpirationCallbackDynamic& Callback) {
}

void UDiscordClient::SetThreadPriority(EDiscordClientThread thread, int32 Priority) {
}

void UDiscordClient::SetStatusChangedCallback(const FDiscordClientOnStatusChangedDynamic& cb) {
}

bool UDiscordClient::SetSpeakerMode(bool speakerMode) {
    return false;
}

void UDiscordClient::SetShowingChat(bool showingChat) {
}

void UDiscordClient::SetSelfMuteAll(bool Mute) {
}

void UDiscordClient::SetSelfDeafAll(bool deaf) {
}

void UDiscordClient::SetRelationshipGroupsUpdatedCallback(const FDiscordClientRelationshipGroupsUpdatedCallbackDynamic& cb) {
}

void UDiscordClient::SetRelationshipDeletedCallback(const FDiscordClientRelationshipDeletedCallbackDynamic& cb) {
}

void UDiscordClient::SetRelationshipCreatedCallback(const FDiscordClientRelationshipCreatedCallbackDynamic& cb) {
}

void UDiscordClient::SetOutputVolume(float outputVolume) {
}

void UDiscordClient::SetOutputDevice(const FString& DeviceID, const FDiscordClientSetOutputDeviceCallbackDynamic& cb) {
}

void UDiscordClient::SetOpusHardwareCoding(bool encode, bool decode) {
}

void UDiscordClient::SetOnlineStatus(EDiscordStatusType Status, const FDiscordClientUpdateStatusCallbackDynamic& Callback) {
}

void UDiscordClient::SetNoiseSuppression(bool on) {
}

void UDiscordClient::SetNoiseCancellation(bool on) {
}

void UDiscordClient::SetNoAudioInputThreshold(float dBFSThreshold) {
}

void UDiscordClient::SetNoAudioInputCallback(const FDiscordClientNoAudioInputCallbackDynamic& Callback) {
}

void UDiscordClient::SetMessageUpdatedCallback(const FDiscordClientMessageUpdatedCallbackDynamic& cb) {
}

void UDiscordClient::SetMessageDeletedCallback(const FDiscordClientMessageDeletedCallbackDynamic& cb) {
}

void UDiscordClient::SetMessageCreatedCallback(const FDiscordClientMessageCreatedCallbackDynamic& cb) {
}

bool UDiscordClient::SetLogDir(const FString& Path, EDiscordLoggingSeverity minSeverity) {
    return false;
}

void UDiscordClient::SetLobbyUpdatedCallback(const FDiscordClientLobbyUpdatedCallbackDynamic& cb) {
}

void UDiscordClient::SetLobbyMemberUpdatedCallback(const FDiscordClientLobbyMemberUpdatedCallbackDynamic& cb) {
}

void UDiscordClient::SetLobbyMemberRemovedCallback(const FDiscordClientLobbyMemberRemovedCallbackDynamic& cb) {
}

void UDiscordClient::SetLobbyMemberAddedCallback(const FDiscordClientLobbyMemberAddedCallbackDynamic& cb) {
}

void UDiscordClient::SetLobbyDeletedCallback(const FDiscordClientLobbyDeletedCallbackDynamic& cb) {
}

void UDiscordClient::SetLobbyCreatedCallback(const FDiscordClientLobbyCreatedCallbackDynamic& cb) {
}

void UDiscordClient::SetInputVolume(float inputVolume) {
}

void UDiscordClient::SetInputDevice(const FString& DeviceID, const FDiscordClientSetInputDeviceCallbackDynamic& cb) {
}

void UDiscordClient::SetHttpRequestTimeout(int32 httpTimeoutInMilliseconds) {
}

void UDiscordClient::SetGameWindowPid(int32 pid) {
}

void UDiscordClient::SetEngineManagedAudioSession(bool isEngineManaged) {
}

void UDiscordClient::SetEchoCancellation(bool on) {
}

void UDiscordClient::SetDeviceChangeCallback(const FDiscordClientDeviceChangeCallbackDynamic& Callback) {
}

void UDiscordClient::SetAutomaticGainControl(bool on) {
}

void UDiscordClient::SetAuthorizeDeviceScreenClosedCallback(const FDiscordClientAuthorizeDeviceScreenClosedCallbackDynamic& cb) {
}

void UDiscordClient::SetApplicationId(FDiscordUniqueID ApplicationId) {
}

void UDiscordClient::SetAecDump(bool on) {
}

void UDiscordClient::SetActivityJoinWithApplicationCallback(const FDiscordClientActivityJoinWithApplicationCallbackDynamic& cb) {
}

void UDiscordClient::SetActivityJoinCallback(const FDiscordClientActivityJoinCallbackDynamic& cb) {
}

void UDiscordClient::SetActivityInviteUpdatedCallback(const FDiscordClientActivityInviteCallbackDynamic& cb) {
}

void UDiscordClient::SetActivityInviteCreatedCallback(const FDiscordClientActivityInviteCallbackDynamic& cb) {
}

void UDiscordClient::SendUserMessageWithMetadata(FDiscordUniqueID RecipientId, const FString& Content, const TMap<FString, FString>& Metadata, const FDiscordClientSendUserMessageCallbackDynamic& cb) {
}

void UDiscordClient::SendUserMessage(FDiscordUniqueID RecipientId, const FString& Content, const FDiscordClientSendUserMessageCallbackDynamic& cb) {
}

void UDiscordClient::SendLobbyMessageWithMetadata(FDiscordUniqueID LobbyId, const FString& Content, const TMap<FString, FString>& Metadata, const FDiscordClientSendUserMessageCallbackDynamic& cb) {
}

void UDiscordClient::SendLobbyMessage(FDiscordUniqueID LobbyId, const FString& Content, const FDiscordClientSendUserMessageCallbackDynamic& cb) {
}

void UDiscordClient::SendGameFriendRequestById(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb) {
}

void UDiscordClient::SendGameFriendRequest(const FString& Username, const FDiscordClientSendFriendRequestCallbackDynamic& cb) {
}

void UDiscordClient::SendDiscordFriendRequestById(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb) {
}

void UDiscordClient::SendDiscordFriendRequest(const FString& Username, const FDiscordClientSendFriendRequestCallbackDynamic& cb) {
}

void UDiscordClient::SendActivityJoinRequestReply(UDiscordActivityInvite* Invite, const FDiscordClientSendActivityInviteCallbackDynamic& cb) {
}

void UDiscordClient::SendActivityJoinRequest(FDiscordUniqueID UserId, const FDiscordClientSendActivityInviteCallbackDynamic& cb) {
}

void UDiscordClient::SendActivityInvite(FDiscordUniqueID UserId, const FString& Content, const FDiscordClientSendActivityInviteCallbackDynamic& cb) {
}

TArray<UDiscordUserHandle*> UDiscordClient::SearchFriendsByUsername(const FString& searchStr) {
    return TArray<UDiscordUserHandle*>();
}

void UDiscordClient::RevokeToken(FDiscordUniqueID ApplicationId, const FString& Token, const FDiscordClientRevokeTokenCallbackDynamic& Callback) {
}

void UDiscordClient::RemoveGameFriend(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb) {
}

void UDiscordClient::RemoveDiscordAndGameFriend(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb) {
}

void UDiscordClient::RemoveAuthorizeRequestCallback() {
}

void UDiscordClient::RejectGameFriendRequest(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb) {
}

void UDiscordClient::RejectDiscordFriendRequest(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb) {
}

bool UDiscordClient::RegisterLaunchSteamApplication(FDiscordUniqueID ApplicationId, int32 steamAppId) {
    return false;
}

bool UDiscordClient::RegisterLaunchCommand(FDiscordUniqueID ApplicationId, const FString& Command) {
    return false;
}

void UDiscordClient::RegisterAuthorizeRequestCallback(const FDiscordClientAuthorizeRequestCallbackDynamic& Callback) {
}

void UDiscordClient::RefreshToken(FDiscordUniqueID ApplicationId, const FString& NewRefreshToken, const FDiscordClientTokenExchangeCallbackDynamic& Callback) {
}

void UDiscordClient::ProvisionalUserMergeCompleted(bool Success) {
}

void UDiscordClient::OpenMessageInDiscord(FDiscordUniqueID MessageId, const FDiscordClientProvisionalUserMergeRequiredCallbackDynamic& provisionalUserMergeRequiredCallback, const FDiscordClientOpenMessageInDiscordCallbackDynamic& Callback) {
}

void UDiscordClient::OpenConnectedGamesSettingsInDiscord(const FDiscordClientOpenConnectedGamesSettingsInDiscordCallbackDynamic& Callback) {
}

void UDiscordClient::OpenAuthorizeDeviceScreen(FDiscordUniqueID ClientId, const FString& userCode) {
}

void UDiscordClient::LinkChannelToLobby(FDiscordUniqueID LobbyId, FDiscordUniqueID ChannelId, const FDiscordClientLinkOrUnlinkChannelCallbackDynamic& Callback) {
}

void UDiscordClient::LeaveLobby(FDiscordUniqueID LobbyId, const FDiscordClientLeaveLobbyCallbackDynamic& Callback) {
}

void UDiscordClient::JoinLinkedLobbyGuild(FDiscordUniqueID LobbyId, const FDiscordClientProvisionalUserMergeRequiredCallbackDynamic& provisionalUserMergeRequiredCallback, const FDiscordClientJoinLinkedLobbyGuildCallbackDynamic& Callback) {
}

void UDiscordClient::IsDiscordAppInstalled(const FDiscordClientIsDiscordAppInstalledCallbackDynamic& Callback) {
}

bool UDiscordClient::IsAuthenticated() {
    return false;
}

void UDiscordClient::InitWithOptions(UDiscordClientCreateOptions* Options) {
}

void UDiscordClient::InitWithBases(const FString& ApiBase, const FString& WebBase) {
}

void UDiscordClient::Init() {
}

int32 UDiscordClient::GetVersionPatch() {
    return 0;
}

int32 UDiscordClient::GetVersionMinor() {
    return 0;
}

int32 UDiscordClient::GetVersionMajor() {
    return 0;
}

FString UDiscordClient::GetVersionHash() {
    return TEXT("");
}

void UDiscordClient::GetUserMessagesWithLimit(FDiscordUniqueID RecipientId, int32 Limit, const FDiscordClientUserMessagesWithLimitCallbackDynamic& cb) {
}

void UDiscordClient::GetUserMessageSummaries(const FDiscordClientUserMessageSummariesCallbackDynamic& cb) {
}

void UDiscordClient::GetUserGuilds(const FDiscordClientGetUserGuildsCallbackDynamic& cb) {
}

UDiscordUserHandle* UDiscordClient::GetUser(FDiscordUniqueID UserId) {
    return NULL;
}

void UDiscordClient::GetTokenFromProvisionalMerge(FDiscordUniqueID ApplicationId, const FString& code, const FString& codeVerifier, const FString& redirectUri, EDiscordAuthenticationExternalAuthType externalAuthType, const FString& externalAuthToken, const FDiscordClientTokenExchangeCallbackDynamic& Callback) {
}

void UDiscordClient::GetTokenFromDeviceProvisionalMerge(UDiscordDeviceAuthorizationArgs* Args, EDiscordAuthenticationExternalAuthType externalAuthType, const FString& externalAuthToken, const FDiscordClientTokenExchangeCallbackDynamic& Callback) {
}

void UDiscordClient::GetTokenFromDevice(UDiscordDeviceAuthorizationArgs* Args, const FDiscordClientTokenExchangeCallbackDynamic& Callback) {
}

void UDiscordClient::GetToken(FDiscordUniqueID ApplicationId, const FString& code, const FString& codeVerifier, const FString& redirectUri, const FDiscordClientTokenExchangeCallbackDynamic& Callback) {
}

EDiscordClientStatus UDiscordClient::GetStatus() {
    return EDiscordClientStatus::Disconnected;
}

bool UDiscordClient::GetSelfMuteAll() {
    return false;
}

bool UDiscordClient::GetSelfDeafAll() {
    return false;
}

TArray<UDiscordRelationshipHandle*> UDiscordClient::GetRelationshipsByGroup(EDiscordRelationshipGroupType GroupType) {
    return TArray<UDiscordRelationshipHandle*>();
}

TArray<UDiscordRelationshipHandle*> UDiscordClient::GetRelationships() {
    return TArray<UDiscordRelationshipHandle*>();
}

UDiscordRelationshipHandle* UDiscordClient::GetRelationshipHandle(FDiscordUniqueID UserId) {
    return NULL;
}

void UDiscordClient::GetProvisionalToken(FDiscordUniqueID ApplicationId, EDiscordAuthenticationExternalAuthType externalAuthType, const FString& externalAuthToken, const FDiscordClientTokenExchangeCallbackDynamic& Callback) {
}

float UDiscordClient::GetOutputVolume() {
    return 0.0f;
}

void UDiscordClient::GetOutputDevices(const FDiscordClientGetOutputDevicesCallbackDynamic& cb) {
}

UDiscordMessageHandle* UDiscordClient::GetMessageHandle(FDiscordUniqueID MessageId) {
    return NULL;
}

void UDiscordClient::GetLobbyMessagesWithLimit(FDiscordUniqueID LobbyId, int32 Limit, const FDiscordClientGetLobbyMessagesCallbackDynamic& cb) {
}

TArray<FDiscordUniqueID> UDiscordClient::GetLobbyIds() {
    return TArray<FDiscordUniqueID>();
}

UDiscordLobbyHandle* UDiscordClient::GetLobbyHandle(FDiscordUniqueID LobbyId) {
    return NULL;
}

float UDiscordClient::GetInputVolume() {
    return 0.0f;
}

void UDiscordClient::GetInputDevices(const FDiscordClientGetInputDevicesCallbackDynamic& cb) {
}

void UDiscordClient::GetGuildChannels(FDiscordUniqueID GuildId, const FDiscordClientGetGuildChannelsCallbackDynamic& cb) {
}

void UDiscordClient::GetDiscordClientConnectedUser(FDiscordUniqueID ApplicationId, const FDiscordClientGetDiscordClientConnectedUserCallbackDynamic& Callback) {
}

FString UDiscordClient::GetDefaultPresenceScopes() {
    return TEXT("");
}

FString UDiscordClient::GetDefaultCommunicationScopes() {
    return TEXT("");
}

FString UDiscordClient::GetDefaultAudioDeviceId() {
    return TEXT("");
}

UDiscordUserHandle* UDiscordClient::GetCurrentUserV2() {
    return NULL;
}

UDiscordUserHandle* UDiscordClient::GetCurrentUser() {
    return NULL;
}

void UDiscordClient::GetCurrentOutputDevice(const FDiscordClientGetCurrentOutputDeviceCallbackDynamic& cb) {
}

void UDiscordClient::GetCurrentInputDevice(const FDiscordClientGetCurrentInputDeviceCallbackDynamic& cb) {
}

UDiscordChannelHandle* UDiscordClient::GetChannelHandle(FDiscordUniqueID ChannelId) {
    return NULL;
}

TArray<UDiscordCall*> UDiscordClient::GetCalls() {
    return TArray<UDiscordCall*>();
}

UDiscordCall* UDiscordClient::GetCall(FDiscordUniqueID ChannelId) {
    return NULL;
}

FDiscordUniqueID UDiscordClient::GetApplicationId() {
    return FDiscordUniqueID{};
}

void UDiscordClient::FetchCurrentUser(EDiscordAuthorizationTokenType tokenType, const FString& Token, const FDiscordClientFetchCurrentUserCallbackDynamic& Callback) {
}

void UDiscordClient::ExchangeChildToken(const FString& parentApplicationToken, FDiscordUniqueID childApplicationId, const FDiscordClientExchangeChildTokenCallbackDynamic& Callback) {
}

FString UDiscordClient::ErrorToString(EDiscordClientError Type) {
    return TEXT("");
}

void UDiscordClient::EndCalls(const FDiscordClientEndCallsCallbackDynamic& Callback) {
}

void UDiscordClient::EndCall(FDiscordUniqueID ChannelId, const FDiscordClientEndCallCallbackDynamic& Callback) {
}

void UDiscordClient::EditUserMessage(FDiscordUniqueID RecipientId, FDiscordUniqueID MessageId, const FString& Content, const FDiscordClientEditUserMessageCallbackDynamic& cb) {
}

void UDiscordClient::Drop() {
}

void UDiscordClient::Disconnect() {
}

void UDiscordClient::DeleteUserMessage(FDiscordUniqueID RecipientId, FDiscordUniqueID MessageId, const FDiscordClientDeleteUserMessageCallbackDynamic& cb) {
}

void UDiscordClient::CreateOrJoinLobbyWithMetadata(const FString& secret, const TMap<FString, FString>& lobbyMetadata, const TMap<FString, FString>& memberMetadata, const FDiscordClientCreateOrJoinLobbyCallbackDynamic& Callback) {
}

void UDiscordClient::CreateOrJoinLobby(const FString& secret, const FDiscordClientCreateOrJoinLobbyCallbackDynamic& Callback) {
}

UDiscordAuthorizationCodeVerifier* UDiscordClient::CreateAuthorizationCodeVerifier() {
    return NULL;
}

void UDiscordClient::Connect() {
}

void UDiscordClient::CloseAuthorizeDeviceScreen() {
}

void UDiscordClient::ClearRichPresence() {
}

bool UDiscordClient::CanOpenMessageInDiscord(FDiscordUniqueID MessageId) {
    return false;
}

void UDiscordClient::CancelGameFriendRequest(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb) {
}

void UDiscordClient::CancelDiscordFriendRequest(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb) {
}

void UDiscordClient::BlockUser(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb) {
}

void UDiscordClient::Authorize(UDiscordAuthorizationArgs* Args, const FDiscordClientAuthorizationCallbackDynamic& Callback) {
}

void UDiscordClient::AddVoiceLogCallback(const FDiscordClientLogCallbackDynamic& Callback, EDiscordLoggingSeverity minSeverity) {
}

void UDiscordClient::AddLogCallback(const FDiscordClientLogCallbackDynamic& Callback, EDiscordLoggingSeverity minSeverity) {
}

void UDiscordClient::AcceptGameFriendRequest(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb) {
}

void UDiscordClient::AcceptDiscordFriendRequest(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb) {
}

void UDiscordClient::AcceptActivityInvite(UDiscordActivityInvite* Invite, const FDiscordClientAcceptActivityInviteCallbackDynamic& cb) {
}

void UDiscordClient::AbortGetTokenFromDevice() {
}

void UDiscordClient::AbortAuthorize() {
}


