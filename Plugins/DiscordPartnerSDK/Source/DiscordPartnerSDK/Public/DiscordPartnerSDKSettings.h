#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "DiscordUniqueID.h"
#include "DiscordPartnerSDKSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class DISCORDPARTNERSDK_API UDiscordPartnerSDKSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ApplicationIdString;
    
    UDiscordPartnerSDKSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetApplicationIdString() const;
    
    UFUNCTION(BlueprintPure)
    int64 GetApplicationIdInt64() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordUniqueID GetApplicationId() const;
    
};

