#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordActivitySecrets.generated.h"

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordActivitySecrets : public UObject {
    GENERATED_BODY()
public:
    UDiscordActivitySecrets();

    UFUNCTION(BlueprintCallable)
    void SetJoin(const FString& NewJoin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString Join();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
};

