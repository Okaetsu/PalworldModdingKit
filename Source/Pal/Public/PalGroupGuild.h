#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnGuildAutoTransferredDelegate.h"
#include "OnGuildRoleChangedDelegate.h"
#include "PalFastGuildPlayerInfoRepInfoArray.h"
#include "PalGroupGuildBase.h"
#include "PalGuildPlayerInfo.h"
#include "PalGuildRolePermissionArray.h"
#include "PalGroupGuild.generated.h"

class UPalGuildCharacterTeamMission;
class UPalGuildItemStorage;
class UPalGuildLab;
class UPalIndividualCharacterParameter;
class UPlGuildPlayerInfoFilteringWaiter;

UCLASS(Blueprintable)
class UPalGroupGuild : public UPalGroupGuildBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGuildRoleChanged OnGuildRoleChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGuildAutoTransferred OnGuildAutoTransferredDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalFastGuildPlayerInfoRepInfoArray PlayerInfoRepInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid AdminPlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalGuildRolePermissionArray RolePermissionArray;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPlGuildPlayerInfoFilteringWaiter*> FilteringWaiterArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UPalGuildItemStorage* ItemStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UPalGuildCharacterTeamMission* CharacterTeamMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UPalGuildLab* Lab;
    
public:
    UPalGroupGuild();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnFilteredPlayerInfo(UPlGuildPlayerInfoFilteringWaiter* Waiter, const FPalGuildPlayerInfo& FilteredInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedGuildMemberNickName(UPalIndividualCharacterParameter* Parameter, const FString& NickName);
    
};

