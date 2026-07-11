#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDiscordActivityPartyPrivacy.h"
#include "DiscordActivityParty.generated.h"

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordActivityParty : public UObject {
    GENERATED_BODY()
public:
    UDiscordActivityParty();

    UFUNCTION(BlueprintCallable)
    void SetPrivacy(EDiscordActivityPartyPrivacy NewPrivacy);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSize(int32 NewMaxSize);
    
    UFUNCTION(BlueprintCallable)
    void SetId(const FString& NewID);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSize(int32 NewCurrentSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDiscordActivityPartyPrivacy Privacy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 MaxSize();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ID();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CurrentSize();
    
};

