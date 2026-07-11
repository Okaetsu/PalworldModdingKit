#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordUniqueID.h"
#include "EDiscordChannelType.h"
#include "DiscordChannelHandle.generated.h"

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordChannelHandle : public UObject {
    GENERATED_BODY()
public:
    UDiscordChannelHandle();

    UFUNCTION(BlueprintCallable)
    EDiscordChannelType Type();
    
    UFUNCTION(BlueprintCallable)
    TArray<FDiscordUniqueID> Recipients();
    
    UFUNCTION(BlueprintCallable)
    FString Name();
    
    UFUNCTION(BlueprintCallable)
    FDiscordUniqueID ID();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
};

