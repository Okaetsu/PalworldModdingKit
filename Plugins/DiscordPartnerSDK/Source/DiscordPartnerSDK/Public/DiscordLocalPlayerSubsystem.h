#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "DiscordClientActivityInviteCallbackMulticastDelegate.h"
#include "DiscordClientActivityJoinCallbackMulticastDelegate.h"
#include "DiscordClientLobbyCreatedCallbackMulticastDelegate.h"
#include "DiscordClientLobbyDeletedCallbackMulticastDelegate.h"
#include "DiscordClientLobbyMemberAddedCallbackMulticastDelegate.h"
#include "DiscordClientLobbyMemberRemovedCallbackMulticastDelegate.h"
#include "DiscordClientLobbyMemberUpdatedCallbackMulticastDelegate.h"
#include "DiscordClientLobbyUpdatedCallbackMulticastDelegate.h"
#include "DiscordClientMessageCreatedCallbackMulticastDelegate.h"
#include "DiscordClientMessageDeletedCallbackMulticastDelegate.h"
#include "DiscordClientMessageUpdatedCallbackMulticastDelegate.h"
#include "DiscordClientNoAudioInputCallbackMulticastDelegate.h"
#include "DiscordClientOnStatusChangedMulticastDelegate.h"
#include "DiscordClientRelationshipCreatedCallbackMulticastDelegate.h"
#include "DiscordClientUserUpdatedCallbackMulticastDelegate.h"
#include "DiscordLocalPlayerSubsystem.generated.h"

class UDiscordClient;

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordLocalPlayerSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordClient* Client;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordClientOnStatusChangedMulticast OnStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordClientActivityInviteCallbackMulticast OnActivityInvite;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordClientActivityJoinCallbackMulticast OnActivityJoin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordClientLobbyCreatedCallbackMulticast OnLobbyCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordClientLobbyUpdatedCallbackMulticast OnLobbyUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordClientLobbyDeletedCallbackMulticast OnLobbyDeleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordClientLobbyMemberAddedCallbackMulticast OnLobbyMemberAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordClientLobbyMemberUpdatedCallbackMulticast OnLobbyMemberUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordClientLobbyMemberRemovedCallbackMulticast OnLobbyMemberRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordClientMessageCreatedCallbackMulticast OnMessageCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordClientMessageUpdatedCallbackMulticast OnMessageUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordClientMessageDeletedCallbackMulticast OnMessageDeleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordClientNoAudioInputCallbackMulticast OnNoAudioInput;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordClientRelationshipCreatedCallbackMulticast OnRelationshipCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordClientRelationshipCreatedCallbackMulticast OnRelationshipDeleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordClientUserUpdatedCallbackMulticast OnUserUpdated;
    
    UDiscordLocalPlayerSubsystem();

    UFUNCTION(BlueprintCallable)
    void Disconnect();
    
    UFUNCTION(BlueprintCallable)
    void Connect(const FString& Token);
    
};

