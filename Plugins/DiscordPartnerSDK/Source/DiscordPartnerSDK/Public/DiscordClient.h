#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordClientAcceptActivityInviteCallbackDynamicDelegate.h"
#include "DiscordClientActivityInviteCallbackDynamicDelegate.h"
#include "DiscordClientActivityJoinCallbackDynamicDelegate.h"
#include "DiscordClientActivityJoinWithApplicationCallbackDynamicDelegate.h"
#include "DiscordClientAuthorizationCallbackDynamicDelegate.h"
#include "DiscordClientAuthorizeDeviceScreenClosedCallbackDynamicDelegate.h"
#include "DiscordClientAuthorizeRequestCallbackDynamicDelegate.h"
#include "DiscordClientCreateOrJoinLobbyCallbackDynamicDelegate.h"
#include "DiscordClientDeleteUserMessageCallbackDynamicDelegate.h"
#include "DiscordClientDeviceChangeCallbackDynamicDelegate.h"
#include "DiscordClientEditUserMessageCallbackDynamicDelegate.h"
#include "DiscordClientEndCallCallbackDynamicDelegate.h"
#include "DiscordClientEndCallsCallbackDynamicDelegate.h"
#include "DiscordClientExchangeChildTokenCallbackDynamicDelegate.h"
#include "DiscordClientFetchCurrentUserCallbackDynamicDelegate.h"
#include "DiscordClientGetCurrentInputDeviceCallbackDynamicDelegate.h"
#include "DiscordClientGetCurrentOutputDeviceCallbackDynamicDelegate.h"
#include "DiscordClientGetDiscordClientConnectedUserCallbackDynamicDelegate.h"
#include "DiscordClientGetGuildChannelsCallbackDynamicDelegate.h"
#include "DiscordClientGetInputDevicesCallbackDynamicDelegate.h"
#include "DiscordClientGetLobbyMessagesCallbackDynamicDelegate.h"
#include "DiscordClientGetOutputDevicesCallbackDynamicDelegate.h"
#include "DiscordClientGetUserGuildsCallbackDynamicDelegate.h"
#include "DiscordClientIsDiscordAppInstalledCallbackDynamicDelegate.h"
#include "DiscordClientJoinLinkedLobbyGuildCallbackDynamicDelegate.h"
#include "DiscordClientLeaveLobbyCallbackDynamicDelegate.h"
#include "DiscordClientLinkOrUnlinkChannelCallbackDynamicDelegate.h"
#include "DiscordClientLobbyCreatedCallbackDynamicDelegate.h"
#include "DiscordClientLobbyDeletedCallbackDynamicDelegate.h"
#include "DiscordClientLobbyMemberAddedCallbackDynamicDelegate.h"
#include "DiscordClientLobbyMemberRemovedCallbackDynamicDelegate.h"
#include "DiscordClientLobbyMemberUpdatedCallbackDynamicDelegate.h"
#include "DiscordClientLobbyUpdatedCallbackDynamicDelegate.h"
#include "DiscordClientLogCallbackDynamicDelegate.h"
#include "DiscordClientMessageCreatedCallbackDynamicDelegate.h"
#include "DiscordClientMessageDeletedCallbackDynamicDelegate.h"
#include "DiscordClientMessageUpdatedCallbackDynamicDelegate.h"
#include "DiscordClientNoAudioInputCallbackDynamicDelegate.h"
#include "DiscordClientOnStatusChangedDynamicDelegate.h"
#include "DiscordClientOpenConnectedGamesSettingsInDiscordCallbackDynamicDelegate.h"
#include "DiscordClientOpenMessageInDiscordCallbackDynamicDelegate.h"
#include "DiscordClientProvisionalUserMergeRequiredCallbackDynamicDelegate.h"
#include "DiscordClientRelationshipCreatedCallbackDynamicDelegate.h"
#include "DiscordClientRelationshipDeletedCallbackDynamicDelegate.h"
#include "DiscordClientRelationshipGroupsUpdatedCallbackDynamicDelegate.h"
#include "DiscordClientRevokeTokenCallbackDynamicDelegate.h"
#include "DiscordClientSendActivityInviteCallbackDynamicDelegate.h"
#include "DiscordClientSendFriendRequestCallbackDynamicDelegate.h"
#include "DiscordClientSendUserMessageCallbackDynamicDelegate.h"
#include "DiscordClientSetInputDeviceCallbackDynamicDelegate.h"
#include "DiscordClientSetOutputDeviceCallbackDynamicDelegate.h"
#include "DiscordClientTokenExchangeCallbackDynamicDelegate.h"
#include "DiscordClientTokenExpirationCallbackDynamicDelegate.h"
#include "DiscordClientUnmergeIntoProvisionalAccountCallbackDynamicDelegate.h"
#include "DiscordClientUpdateProvisionalAccountDisplayNameCallbackDynamicDelegate.h"
#include "DiscordClientUpdateRelationshipCallbackDynamicDelegate.h"
#include "DiscordClientUpdateRichPresenceCallbackDynamicDelegate.h"
#include "DiscordClientUpdateStatusCallbackDynamicDelegate.h"
#include "DiscordClientUpdateTokenCallbackDynamicDelegate.h"
#include "DiscordClientUserAudioCapturedCallbackDynamicDelegate.h"
#include "DiscordClientUserAudioReceivedCallbackDynamicDelegate.h"
#include "DiscordClientUserMessageSummariesCallbackDynamicDelegate.h"
#include "DiscordClientUserMessagesWithLimitCallbackDynamicDelegate.h"
#include "DiscordClientUserUpdatedCallbackDynamicDelegate.h"
#include "DiscordClientVoiceParticipantChangedCallbackDynamicDelegate.h"
#include "DiscordUniqueID.h"
#include "EDiscordAuthenticationExternalAuthType.h"
#include "EDiscordAuthorizationTokenType.h"
#include "EDiscordClientError.h"
#include "EDiscordClientStatus.h"
#include "EDiscordClientThread.h"
#include "EDiscordLoggingSeverity.h"
#include "EDiscordRelationshipGroupType.h"
#include "EDiscordStatusType.h"
#include "DiscordClient.generated.h"

class UDiscordActivity;
class UDiscordActivityInvite;
class UDiscordAuthorizationArgs;
class UDiscordAuthorizationCodeVerifier;
class UDiscordCall;
class UDiscordChannelHandle;
class UDiscordClientCreateOptions;
class UDiscordDeviceAuthorizationArgs;
class UDiscordLobbyHandle;
class UDiscordMessageHandle;
class UDiscordRelationshipHandle;
class UDiscordUserHandle;

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordClient : public UObject {
    GENERATED_BODY()
public:
    UDiscordClient();

    UFUNCTION(BlueprintCallable)
    void UpdateToken(EDiscordAuthorizationTokenType tokenType, const FString& Token, const FDiscordClientUpdateTokenCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRichPresence(UDiscordActivity* activity, const FDiscordClientUpdateRichPresenceCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void UpdateProvisionalAccountDisplayName(const FString& Name, const FDiscordClientUpdateProvisionalAccountDisplayNameCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void UnmergeIntoProvisionalAccount(FDiscordUniqueID ApplicationId, EDiscordAuthenticationExternalAuthType externalAuthType, const FString& externalAuthToken, const FDiscordClientUnmergeIntoProvisionalAccountCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void UnlinkChannelFromLobby(FDiscordUniqueID LobbyId, const FDiscordClientLinkOrUnlinkChannelCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void UnblockUser(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    static FString ThreadToString(EDiscordClientThread Type);
    
    UFUNCTION(BlueprintCallable)
    static FString StatusToString(EDiscordClientStatus Type);
    
    UFUNCTION(BlueprintCallable)
    UDiscordCall* StartCallWithAudioCallbacks(FDiscordUniqueID LobbyId, const FDiscordClientUserAudioReceivedCallbackDynamic& receivedCb, const FDiscordClientUserAudioCapturedCallbackDynamic& capturedCb);
    
    UFUNCTION(BlueprintCallable)
    UDiscordCall* StartCall(FDiscordUniqueID ChannelId);
    
    UFUNCTION(BlueprintCallable)
    bool ShowAudioRoutePicker();
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceParticipantChangedCallback(const FDiscordClientVoiceParticipantChangedCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceLogDir(const FString& Path, EDiscordLoggingSeverity minSeverity);
    
    UFUNCTION(BlueprintCallable)
    void SetUserUpdatedCallback(const FDiscordClientUserUpdatedCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SetTokenExpirationCallback(const FDiscordClientTokenExpirationCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void SetThreadPriority(EDiscordClientThread thread, int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    void SetStatusChangedCallback(const FDiscordClientOnStatusChangedDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    bool SetSpeakerMode(bool speakerMode);
    
    UFUNCTION(BlueprintCallable)
    void SetShowingChat(bool showingChat);
    
    UFUNCTION(BlueprintCallable)
    void SetSelfMuteAll(bool Mute);
    
    UFUNCTION(BlueprintCallable)
    void SetSelfDeafAll(bool deaf);
    
    UFUNCTION(BlueprintCallable)
    void SetRelationshipGroupsUpdatedCallback(const FDiscordClientRelationshipGroupsUpdatedCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SetRelationshipDeletedCallback(const FDiscordClientRelationshipDeletedCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SetRelationshipCreatedCallback(const FDiscordClientRelationshipCreatedCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SetOutputVolume(float outputVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetOutputDevice(const FString& DeviceID, const FDiscordClientSetOutputDeviceCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SetOpusHardwareCoding(bool encode, bool decode);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineStatus(EDiscordStatusType Status, const FDiscordClientUpdateStatusCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void SetNoiseSuppression(bool on);
    
    UFUNCTION(BlueprintCallable)
    void SetNoiseCancellation(bool on);
    
    UFUNCTION(BlueprintCallable)
    void SetNoAudioInputThreshold(float dBFSThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SetNoAudioInputCallback(const FDiscordClientNoAudioInputCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void SetMessageUpdatedCallback(const FDiscordClientMessageUpdatedCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SetMessageDeletedCallback(const FDiscordClientMessageDeletedCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SetMessageCreatedCallback(const FDiscordClientMessageCreatedCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    bool SetLogDir(const FString& Path, EDiscordLoggingSeverity minSeverity);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyUpdatedCallback(const FDiscordClientLobbyUpdatedCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyMemberUpdatedCallback(const FDiscordClientLobbyMemberUpdatedCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyMemberRemovedCallback(const FDiscordClientLobbyMemberRemovedCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyMemberAddedCallback(const FDiscordClientLobbyMemberAddedCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyDeletedCallback(const FDiscordClientLobbyDeletedCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyCreatedCallback(const FDiscordClientLobbyCreatedCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SetInputVolume(float inputVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetInputDevice(const FString& DeviceID, const FDiscordClientSetInputDeviceCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SetHttpRequestTimeout(int32 httpTimeoutInMilliseconds);
    
    UFUNCTION(BlueprintCallable)
    void SetGameWindowPid(int32 pid);
    
    UFUNCTION(BlueprintCallable)
    void SetEngineManagedAudioSession(bool isEngineManaged);
    
    UFUNCTION(BlueprintCallable)
    void SetEchoCancellation(bool on);
    
    UFUNCTION(BlueprintCallable)
    void SetDeviceChangeCallback(const FDiscordClientDeviceChangeCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void SetAutomaticGainControl(bool on);
    
    UFUNCTION(BlueprintCallable)
    void SetAuthorizeDeviceScreenClosedCallback(const FDiscordClientAuthorizeDeviceScreenClosedCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SetApplicationId(FDiscordUniqueID ApplicationId);
    
    UFUNCTION(BlueprintCallable)
    void SetAecDump(bool on);
    
    UFUNCTION(BlueprintCallable)
    void SetActivityJoinWithApplicationCallback(const FDiscordClientActivityJoinWithApplicationCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SetActivityJoinCallback(const FDiscordClientActivityJoinCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SetActivityInviteUpdatedCallback(const FDiscordClientActivityInviteCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SetActivityInviteCreatedCallback(const FDiscordClientActivityInviteCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SendUserMessageWithMetadata(FDiscordUniqueID RecipientId, const FString& Content, const TMap<FString, FString>& Metadata, const FDiscordClientSendUserMessageCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SendUserMessage(FDiscordUniqueID RecipientId, const FString& Content, const FDiscordClientSendUserMessageCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SendLobbyMessageWithMetadata(FDiscordUniqueID LobbyId, const FString& Content, const TMap<FString, FString>& Metadata, const FDiscordClientSendUserMessageCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SendLobbyMessage(FDiscordUniqueID LobbyId, const FString& Content, const FDiscordClientSendUserMessageCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SendGameFriendRequestById(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SendGameFriendRequest(const FString& Username, const FDiscordClientSendFriendRequestCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SendDiscordFriendRequestById(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SendDiscordFriendRequest(const FString& Username, const FDiscordClientSendFriendRequestCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SendActivityJoinRequestReply(UDiscordActivityInvite* Invite, const FDiscordClientSendActivityInviteCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SendActivityJoinRequest(FDiscordUniqueID UserId, const FDiscordClientSendActivityInviteCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void SendActivityInvite(FDiscordUniqueID UserId, const FString& Content, const FDiscordClientSendActivityInviteCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    TArray<UDiscordUserHandle*> SearchFriendsByUsername(const FString& searchStr);
    
    UFUNCTION(BlueprintCallable)
    void RevokeToken(FDiscordUniqueID ApplicationId, const FString& Token, const FDiscordClientRevokeTokenCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameFriend(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDiscordAndGameFriend(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAuthorizeRequestCallback();
    
    UFUNCTION(BlueprintCallable)
    void RejectGameFriendRequest(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void RejectDiscordFriendRequest(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterLaunchSteamApplication(FDiscordUniqueID ApplicationId, int32 steamAppId);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterLaunchCommand(FDiscordUniqueID ApplicationId, const FString& Command);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAuthorizeRequestCallback(const FDiscordClientAuthorizeRequestCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void RefreshToken(FDiscordUniqueID ApplicationId, const FString& NewRefreshToken, const FDiscordClientTokenExchangeCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void ProvisionalUserMergeCompleted(bool Success);
    
    UFUNCTION(BlueprintCallable)
    void OpenMessageInDiscord(FDiscordUniqueID MessageId, const FDiscordClientProvisionalUserMergeRequiredCallbackDynamic& provisionalUserMergeRequiredCallback, const FDiscordClientOpenMessageInDiscordCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void OpenConnectedGamesSettingsInDiscord(const FDiscordClientOpenConnectedGamesSettingsInDiscordCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void OpenAuthorizeDeviceScreen(FDiscordUniqueID ClientId, const FString& userCode);
    
    UFUNCTION(BlueprintCallable)
    void LinkChannelToLobby(FDiscordUniqueID LobbyId, FDiscordUniqueID ChannelId, const FDiscordClientLinkOrUnlinkChannelCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void LeaveLobby(FDiscordUniqueID LobbyId, const FDiscordClientLeaveLobbyCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void JoinLinkedLobbyGuild(FDiscordUniqueID LobbyId, const FDiscordClientProvisionalUserMergeRequiredCallbackDynamic& provisionalUserMergeRequiredCallback, const FDiscordClientJoinLinkedLobbyGuildCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void IsDiscordAppInstalled(const FDiscordClientIsDiscordAppInstalledCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    bool IsAuthenticated();
    
    UFUNCTION(BlueprintCallable)
    void InitWithOptions(UDiscordClientCreateOptions* Options);
    
    UFUNCTION(BlueprintCallable)
    void InitWithBases(const FString& ApiBase, const FString& WebBase);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetVersionPatch();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetVersionMinor();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetVersionMajor();
    
    UFUNCTION(BlueprintCallable)
    static FString GetVersionHash();
    
    UFUNCTION(BlueprintCallable)
    void GetUserMessagesWithLimit(FDiscordUniqueID RecipientId, int32 Limit, const FDiscordClientUserMessagesWithLimitCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void GetUserMessageSummaries(const FDiscordClientUserMessageSummariesCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void GetUserGuilds(const FDiscordClientGetUserGuildsCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    UDiscordUserHandle* GetUser(FDiscordUniqueID UserId);
    
    UFUNCTION(BlueprintCallable)
    void GetTokenFromProvisionalMerge(FDiscordUniqueID ApplicationId, const FString& code, const FString& codeVerifier, const FString& redirectUri, EDiscordAuthenticationExternalAuthType externalAuthType, const FString& externalAuthToken, const FDiscordClientTokenExchangeCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void GetTokenFromDeviceProvisionalMerge(UDiscordDeviceAuthorizationArgs* Args, EDiscordAuthenticationExternalAuthType externalAuthType, const FString& externalAuthToken, const FDiscordClientTokenExchangeCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void GetTokenFromDevice(UDiscordDeviceAuthorizationArgs* Args, const FDiscordClientTokenExchangeCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void GetToken(FDiscordUniqueID ApplicationId, const FString& code, const FString& codeVerifier, const FString& redirectUri, const FDiscordClientTokenExchangeCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    EDiscordClientStatus GetStatus();
    
    UFUNCTION(BlueprintCallable)
    bool GetSelfMuteAll();
    
    UFUNCTION(BlueprintCallable)
    bool GetSelfDeafAll();
    
    UFUNCTION(BlueprintCallable)
    TArray<UDiscordRelationshipHandle*> GetRelationshipsByGroup(EDiscordRelationshipGroupType GroupType);
    
    UFUNCTION(BlueprintCallable)
    TArray<UDiscordRelationshipHandle*> GetRelationships();
    
    UFUNCTION(BlueprintCallable)
    UDiscordRelationshipHandle* GetRelationshipHandle(FDiscordUniqueID UserId);
    
    UFUNCTION(BlueprintCallable)
    void GetProvisionalToken(FDiscordUniqueID ApplicationId, EDiscordAuthenticationExternalAuthType externalAuthType, const FString& externalAuthToken, const FDiscordClientTokenExchangeCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    float GetOutputVolume();
    
    UFUNCTION(BlueprintCallable)
    void GetOutputDevices(const FDiscordClientGetOutputDevicesCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    UDiscordMessageHandle* GetMessageHandle(FDiscordUniqueID MessageId);
    
    UFUNCTION(BlueprintCallable)
    void GetLobbyMessagesWithLimit(FDiscordUniqueID LobbyId, int32 Limit, const FDiscordClientGetLobbyMessagesCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    TArray<FDiscordUniqueID> GetLobbyIds();
    
    UFUNCTION(BlueprintCallable)
    UDiscordLobbyHandle* GetLobbyHandle(FDiscordUniqueID LobbyId);
    
    UFUNCTION(BlueprintCallable)
    float GetInputVolume();
    
    UFUNCTION(BlueprintCallable)
    void GetInputDevices(const FDiscordClientGetInputDevicesCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void GetGuildChannels(FDiscordUniqueID GuildId, const FDiscordClientGetGuildChannelsCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void GetDiscordClientConnectedUser(FDiscordUniqueID ApplicationId, const FDiscordClientGetDiscordClientConnectedUserCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    static FString GetDefaultPresenceScopes();
    
    UFUNCTION(BlueprintCallable)
    static FString GetDefaultCommunicationScopes();
    
    UFUNCTION(BlueprintCallable)
    static FString GetDefaultAudioDeviceId();
    
    UFUNCTION(BlueprintCallable)
    UDiscordUserHandle* GetCurrentUserV2();
    
    UFUNCTION(BlueprintCallable)
    UDiscordUserHandle* GetCurrentUser();
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentOutputDevice(const FDiscordClientGetCurrentOutputDeviceCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentInputDevice(const FDiscordClientGetCurrentInputDeviceCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    UDiscordChannelHandle* GetChannelHandle(FDiscordUniqueID ChannelId);
    
    UFUNCTION(BlueprintCallable)
    TArray<UDiscordCall*> GetCalls();
    
    UFUNCTION(BlueprintCallable)
    UDiscordCall* GetCall(FDiscordUniqueID ChannelId);
    
    UFUNCTION(BlueprintCallable)
    FDiscordUniqueID GetApplicationId();
    
    UFUNCTION(BlueprintCallable)
    void FetchCurrentUser(EDiscordAuthorizationTokenType tokenType, const FString& Token, const FDiscordClientFetchCurrentUserCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void ExchangeChildToken(const FString& parentApplicationToken, FDiscordUniqueID childApplicationId, const FDiscordClientExchangeChildTokenCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    static FString ErrorToString(EDiscordClientError Type);
    
    UFUNCTION(BlueprintCallable)
    void EndCalls(const FDiscordClientEndCallsCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void EndCall(FDiscordUniqueID ChannelId, const FDiscordClientEndCallCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void EditUserMessage(FDiscordUniqueID RecipientId, FDiscordUniqueID MessageId, const FString& Content, const FDiscordClientEditUserMessageCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
    UFUNCTION(BlueprintCallable)
    void Disconnect();
    
    UFUNCTION(BlueprintCallable)
    void DeleteUserMessage(FDiscordUniqueID RecipientId, FDiscordUniqueID MessageId, const FDiscordClientDeleteUserMessageCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void CreateOrJoinLobbyWithMetadata(const FString& secret, const TMap<FString, FString>& lobbyMetadata, const TMap<FString, FString>& memberMetadata, const FDiscordClientCreateOrJoinLobbyCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void CreateOrJoinLobby(const FString& secret, const FDiscordClientCreateOrJoinLobbyCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    UDiscordAuthorizationCodeVerifier* CreateAuthorizationCodeVerifier();
    
    UFUNCTION(BlueprintCallable)
    void Connect();
    
    UFUNCTION(BlueprintCallable)
    void CloseAuthorizeDeviceScreen();
    
    UFUNCTION(BlueprintCallable)
    void ClearRichPresence();
    
    UFUNCTION(BlueprintCallable)
    bool CanOpenMessageInDiscord(FDiscordUniqueID MessageId);
    
    UFUNCTION(BlueprintCallable)
    void CancelGameFriendRequest(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void CancelDiscordFriendRequest(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void BlockUser(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void Authorize(UDiscordAuthorizationArgs* Args, const FDiscordClientAuthorizationCallbackDynamic& Callback);
    
    UFUNCTION(BlueprintCallable)
    void AddVoiceLogCallback(const FDiscordClientLogCallbackDynamic& Callback, EDiscordLoggingSeverity minSeverity);
    
    UFUNCTION(BlueprintCallable)
    void AddLogCallback(const FDiscordClientLogCallbackDynamic& Callback, EDiscordLoggingSeverity minSeverity);
    
    UFUNCTION(BlueprintCallable)
    void AcceptGameFriendRequest(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void AcceptDiscordFriendRequest(FDiscordUniqueID UserId, const FDiscordClientUpdateRelationshipCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void AcceptActivityInvite(UDiscordActivityInvite* Invite, const FDiscordClientAcceptActivityInviteCallbackDynamic& cb);
    
    UFUNCTION(BlueprintCallable)
    void AbortGetTokenFromDevice();
    
    UFUNCTION(BlueprintCallable)
    void AbortAuthorize();
    
};

