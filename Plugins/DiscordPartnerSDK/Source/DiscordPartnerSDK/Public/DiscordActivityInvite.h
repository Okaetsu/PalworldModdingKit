#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordUniqueID.h"
#include "EDiscordActivityActionTypes.h"
#include "DiscordActivityInvite.generated.h"

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordActivityInvite : public UObject {
    GENERATED_BODY()
public:
    UDiscordActivityInvite();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDiscordActivityActionTypes Type();
    
    UFUNCTION(BlueprintCallable)
    void SetType(EDiscordActivityActionTypes NewType);
    
    UFUNCTION(BlueprintCallable)
    void SetSessionId(const FString& NewSessionId);
    
    UFUNCTION(BlueprintCallable)
    void SetSenderId(FDiscordUniqueID NewSenderId);
    
    UFUNCTION(BlueprintCallable)
    void SetPartyId(const FString& NewPartyId);
    
    UFUNCTION(BlueprintCallable)
    void SetParentApplicationId(FDiscordUniqueID NewParentApplicationId);
    
    UFUNCTION(BlueprintCallable)
    void SetMessageId(FDiscordUniqueID NewMessageId);
    
    UFUNCTION(BlueprintCallable)
    void SetIsValid(bool NewIsValid);
    
    UFUNCTION(BlueprintCallable)
    void SetChannelId(FDiscordUniqueID NewChannelId);
    
    UFUNCTION(BlueprintCallable)
    void SetApplicationId(FDiscordUniqueID NewApplicationId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString SessionId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordUniqueID SenderId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString PartyId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordUniqueID ParentApplicationId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordUniqueID MessageId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValid();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordUniqueID ChannelId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordUniqueID ApplicationId();
    
};

