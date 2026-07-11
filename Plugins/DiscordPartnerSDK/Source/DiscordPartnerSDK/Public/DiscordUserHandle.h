#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordUniqueID.h"
#include "EDiscordStatusType.h"
#include "EDiscordUserHandleAvatarType.h"
#include "DiscordUserHandle.generated.h"

class UDiscordActivity;
class UDiscordRelationshipHandle;
class UDiscordUserApplicationProfileHandle;

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordUserHandle : public UObject {
    GENERATED_BODY()
public:
    UDiscordUserHandle();

    UFUNCTION(BlueprintCallable)
    FString Username();
    
    UFUNCTION(BlueprintCallable)
    TArray<UDiscordUserApplicationProfileHandle*> UserApplicationProfiles();
    
    UFUNCTION(BlueprintCallable)
    EDiscordStatusType Status();
    
    UFUNCTION(BlueprintCallable)
    UDiscordRelationshipHandle* Relationship();
    
    UFUNCTION(BlueprintCallable)
    bool IsProvisional();
    
    UFUNCTION(BlueprintCallable)
    FDiscordUniqueID ID();
    
    UFUNCTION(BlueprintCallable)
    FString GlobalName();
    
    UFUNCTION(BlueprintCallable)
    UDiscordActivity* GameActivity();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
    UFUNCTION(BlueprintCallable)
    FString DisplayName();
    
    UFUNCTION(BlueprintCallable)
    FString AvatarUrl(EDiscordUserHandleAvatarType animatedType, EDiscordUserHandleAvatarType staticType);
    
    UFUNCTION(BlueprintCallable)
    static FString AvatarTypeToString(EDiscordUserHandleAvatarType Type);
    
    UFUNCTION(BlueprintCallable)
    FString Avatar();
    
};

