#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EPalSessionMemberChange.h"
#include "PalCachedUserInfo.h"
#include "PalOnlineManager.generated.h"

class APalPlayerState;
class UGDKPrivacyPermissionAsyncFunction;
class UGDKPrivacyPermissionForAnonymousUserAsyncFunction;
class UGDKPrivilegeAsyncFunction;
class UPalGuildNameUpdateWatcher;
class UPalIndividualCharacterParameter;
class UPalUserInfoWordFilterWaiter;

UCLASS(Blueprintable)
class PAL_API UPalOnlineManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionMemberUnMuteDelegate, const FString&, UserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionMemberUnBlockDelegate, const FString&, UserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionMemberMuteDelegate, const FString&, UserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionMemberLeaveDelegate, const FString&, UserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionMemberJoinDelegate, const FString&, UserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionMemberChangedPlayerUIdDelegate, const FString&, UserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSessionMemberChangeDelegate, const FString&, UserId, const EPalSessionMemberChange, ChangeType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionMemberBlockDelegate, const FString&, UserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnPlayerNickNameUpdated, FGuid, PlayerUId, const FString&, NewNickName, FGuid, GroupId, const FString&, GuildName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompleteGetEuraVersionsDelegate, int32, EuraCurrentVersion);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompleteGetEuraVersionsDelegate OnCompleteGetEuraVersionsDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionMemberChangeDelegate OnSessionMemberChangeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionMemberJoinDelegate OnSessionMemberJoinDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionMemberLeaveDelegate OnSessionMemberLeaveDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionMemberMuteDelegate OnSessionMemberMuteDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionMemberUnMuteDelegate OnSessionMemberUnMuteDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionMemberBlockDelegate OnSessionMemberBlockDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionMemberUnBlockDelegate OnSessionMemberUnBlockDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionMemberChangedPlayerUIdDelegate OnSessionMemberChangedPlayerUIdDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerNickNameUpdated OnPlayerNickNameUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalCachedUserInfo> CachedUserInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> InFlightRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalUserInfoWordFilterWaiter*> UserInfoWordFilterWaiters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalGuildNameUpdateWatcher*> GuildNameUpdateWatchers;
    
public:
    UPalOnlineManager();

    UFUNCTION(BlueprintCallable)
    void OnUserInfoWordFilterCompleted(UPalUserInfoWordFilterWaiter* Waiter, bool bSuccess, FGuid PlayerUId, const FString& FilteredPlayerName, FGuid GroupId, const FString& FilteredGuildName);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateGroupId(UPalIndividualCharacterParameter* IndividualParameter, const FGuid& GroupId);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedGuildNameWordFilterCompleted(UPalUserInfoWordFilterWaiter* Waiter, bool bSuccess, FGuid PlayerUId, const FString& FilteredPlayerName, FGuid GroupId, const FString& FilteredGuildName);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedGuildNameWithGroupId(UPalGuildNameUpdateWatcher* Watcher, FGuid GroupId, const FString& NewGuildName);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSessionMemberChangedPlayerUId(APalPlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnQueryGDKUserResolvePrivilegeWithUI(UGDKPrivilegeAsyncFunction* PrivilegeAsyncFunction);
    
    UFUNCTION(BlueprintCallable)
    void OnQueryGDKPrivacyCheckPermissionForAnonymousUser(UGDKPrivacyPermissionForAnonymousUserAsyncFunction* PrivacyPermissionAsyncFunction);
    
    UFUNCTION(BlueprintCallable)
    void OnQueryGDKPrivacyCheckPermission(UGDKPrivacyPermissionAsyncFunction* PrivacyPermissionAsyncFunction);
    
    UFUNCTION(BlueprintCallable)
    void OnNickNameUpdateWordFilterCompleted(UPalUserInfoWordFilterWaiter* Waiter, bool bSuccess, FGuid PlayerUId, const FString& FilteredPlayerName, FGuid GroupId, const FString& FilteredGuildName);
    
    UFUNCTION(BlueprintCallable)
    void OnNickNameUpdated(UPalIndividualCharacterParameter* IndividualParameter, const FString& NewNickName);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteGetEuraVersions(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
};

