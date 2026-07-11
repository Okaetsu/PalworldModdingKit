#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDiscordClientError.h"
#include "EDiscordClientStatus.h"
#include "PalDiscordClientInputDevicesUpdatedDelegateDelegate.h"
#include "PalDiscordClientLocalSpeakingStatusChangedDelegateDelegate.h"
#include "PalDiscordClientUpdateUIDelegateDelegate.h"
#include "PalDiscordClientUpdateUserUIDelegateDelegate.h"
#include "PalDiscordInputDeviceInfo.h"
#include "PalDiscordJoinWithPasswordDelegateDelegate.h"
#include "PalDiscordClient.generated.h"

class APalGameStateInGame;
class APalPlayerState;
class UDiscordActivity;
class UDiscordAudioDevice;
class UDiscordAuthorizationCodeVerifier;
class UDiscordCall;
class UDiscordLocalPlayerSubsystem;
class UDiscordRelationshipHandle;
class UNetDriver;

UCLASS(Blueprintable)
class UPalDiscordClient : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDiscordClientUpdateUIDelegate UpdateUI;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDiscordClientUpdateUserUIDelegate UpdateUserUI;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDiscordClientLocalSpeakingStatusChangedDelegate OnLocalSpeakingStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDiscordClientUpdateUserUIDelegate OnVoiceChatUserStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDiscordClientInputDevicesUpdatedDelegate OnInputDevicesUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDiscordJoinWithPasswordDelegate OnJoinWithPassword;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalGameStateInGame* GameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetDriver* NetDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalPlayerState* LocalPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordLocalPlayerSubsystem* Discord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordAuthorizationCodeVerifier* codeVerifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordCall* Call;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordAudioDevice* CurrentInputDevice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordActivity* CurrentActivity;
    
public:
    UPalDiscordClient();

    UFUNCTION(BlueprintCallable)
    void Unmute(const UDiscordRelationshipHandle* Friend);
    
    UFUNCTION(BlueprintCallable)
    void UnlinkAccount();
    
    UFUNCTION(BlueprintCallable)
    void Unblock(const UDiscordRelationshipHandle* Friend);
    
    UFUNCTION(BlueprintCallable)
    bool SetVoiceChatInputDevice(const FString& DeviceID);
    
    UFUNCTION(BlueprintCallable)
    void SendMessage(const UDiscordRelationshipHandle* Friend, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void RequestInputDevices();
    
    UFUNCTION(BlueprintCallable)
    void Prepare();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStatusChanged(EDiscordClientStatus Status, EDiscordClientError Error, int32 errorDetail);
    
    UFUNCTION(BlueprintCallable)
    void OnJoin(const FString& joinSecret);
    
    UFUNCTION(BlueprintCallable)
    void OnEndedCall();
    
public:
    UFUNCTION(BlueprintCallable)
    void Mute(const UDiscordRelationshipHandle* Friend);
    
    UFUNCTION(BlueprintCallable)
    void LinkAccount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMute(const UDiscordRelationshipHandle* Friend) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLinkedAccount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlock(const UDiscordRelationshipHandle* Friend) const;
    
    UFUNCTION(BlueprintCallable)
    void Invite(const UDiscordRelationshipHandle* Friend);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoiceChatGaugeState(const FString& DiscordUserId, bool& bOutListenMuted, bool& bOutSpeakerMuted, bool& bOutSpeaking) const;
    
    UFUNCTION(BlueprintCallable)
    void GetFriends(TArray<UDiscordRelationshipHandle*>& Friends);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDiscordClientStatus GetDiscordClientStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDefaultInputDeviceId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentInputDeviceId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalDiscordInputDeviceInfo> GetCachedInputDevices() const;
    
    UFUNCTION(BlueprintCallable)
    void ConnectServerByAddress(const FString& Address, int32 Port);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseVoiceChat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseNormalAccountLinking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInvite(const UDiscordRelationshipHandle* Friend) const;
    
    UFUNCTION(BlueprintCallable)
    void Block(const UDiscordRelationshipHandle* Friend);
    
};

