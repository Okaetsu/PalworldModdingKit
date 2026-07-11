#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordUniqueID.h"
#include "EDiscordRelationshipType.h"
#include "DiscordRelationshipHandle.generated.h"

class UDiscordUserHandle;

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordRelationshipHandle : public UObject {
    GENERATED_BODY()
public:
    UDiscordRelationshipHandle();

    UFUNCTION(BlueprintCallable)
    UDiscordUserHandle* User();
    
    UFUNCTION(BlueprintCallable)
    bool IsSpamRequest();
    
    UFUNCTION(BlueprintCallable)
    FDiscordUniqueID ID();
    
    UFUNCTION(BlueprintCallable)
    EDiscordRelationshipType GameRelationshipType();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
    UFUNCTION(BlueprintCallable)
    EDiscordRelationshipType DiscordRelationshipType();
    
};

