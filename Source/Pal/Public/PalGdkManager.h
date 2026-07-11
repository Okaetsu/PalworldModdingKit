#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalGdkManager.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalGdkManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnJoinDedicatedServerWithPassword, const FString&, IpAddress, int32, Port);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinDedicatedServerWithPassword OnJoinDedicatedServerWithPassword;
    
    UPalGdkManager();

    UFUNCTION(BlueprintCallable)
    void ShowPlayerProfileCard(const FString& UserId);
    
    UFUNCTION(BlueprintCallable)
    bool ShowMultiplayerActivityInviteUI();
    
    UFUNCTION(BlueprintCallable)
    void ConnectServerByAddress(const FString& Address, int32 Port);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowMultiplayerActivityInviteUI() const;
    
};

