#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordUniqueID.h"
#include "EDiscordChannelType.h"
#include "DiscordGuildChannel.generated.h"

class UDiscordLinkedLobby;

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordGuildChannel : public UObject {
    GENERATED_BODY()
public:
    UDiscordGuildChannel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDiscordChannelType Type();
    
    UFUNCTION(BlueprintCallable)
    void SetType(EDiscordChannelType NewType);
    
    UFUNCTION(BlueprintCallable)
    void SetPosition(int32 NewPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetParentId(FDiscordUniqueID NewParentId);
    
    UFUNCTION(BlueprintCallable)
    void SetName(const FString& NewName);
    
    UFUNCTION(BlueprintCallable)
    void SetLinkedLobby(UDiscordLinkedLobby* NewLinkedLobby);
    
    UFUNCTION(BlueprintCallable)
    void SetIsViewableAndWriteableByAllMembers(bool NewIsViewableAndWriteableByAllMembers);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLinkable(bool NewIsLinkable);
    
    UFUNCTION(BlueprintCallable)
    void SetId(FDiscordUniqueID NewID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 Position();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordUniqueID ParentId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString Name();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDiscordLinkedLobby* LinkedLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsViewableAndWriteableByAllMembers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLinkable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordUniqueID ID();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
};

