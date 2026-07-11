#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EPalGuildPermission.h"
#include "EPalGuildRole.h"
#include "PalGroupOrganization.h"
#include "PalGuildMarkerData.h"
#include "PalGuildPlayerInfo.h"
#include "PalGroupGuildBase.generated.h"

class APalGuildInfo;
class UObject;
class UPalBaseCampModuleRaidDetect;
class UPalGroupGuildBase;
class UPalGuildPalStorage;
class UPalPlayerAccount;

UCLASS(Abstract, Blueprintable)
class UPalGroupGuildBase : public UPalGroupOrganization {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdatedGuildNameSelfDelegate, const UPalGroupGuildBase*, Self, const FString&, NewGuildName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatedGuildNameDelegate, const FString&, NewGuildName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalGroupGuildBase*, Self);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpdateGuildChestAllowedRolesDelegate, UPalGroupGuildBase*, Guild, const TArray<EPalGuildRole>&, NewRoles);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRemoveGuildMarkerDelegate, UPalGroupGuildBase*, Guild, const FGuid&, MarkerID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAddGuildMarkerDelegate, UPalGroupGuildBase*, Guild, const FGuid&, MarkerID, const FPalGuildMarkerData&, MarkerData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNotifyPlayerUIdDelegate, const UPalGroupGuildBase*, Self, const FGuid&, PlayerUId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FNotifyPlayerInfoDelegate, const UPalGroupGuildBase*, Self, const FGuid&, PlayerUId, const FPalGuildPlayerInfo&, PlayerInfo);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAddGuildMarkerDelegate OnAddGuildMarkerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAddGuildMarkerDelegate OnChangeGuildMarkerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemoveGuildMarkerDelegate OnRemoveGuildMarkerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateGuildChestAllowedRolesDelegate OnUpdateGuildChestAllowedRolesDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalGuildPalStorage* PalStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> MapObjectInstanceIds_BaseCampPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> MapObjectInstanceIds_BaseCampPoint_Temporary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BaseCampLevel, meta=(AllowPrivateAccess=true))
    int32 BaseCampLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalGuildInfo> WeakGuildInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Guildname, meta=(AllowPrivateAccess=true))
    FString GuildName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OldGuildName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAllPlayerNotOnlineAndAlreadyReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid LastGuildNameModifierPlayerUid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableResetPropertiesWhenPlayerDelete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_UnderRaidBaseCampIds, meta=(AllowPrivateAccess=true))
    TArray<FGuid> UnderRaidBaseCampIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid UnderRaidNotificationLogId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GuildMarker, meta=(AllowPrivateAccess=true))
    TArray<FPalGuildMarkerData> GuildMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GuildChestAllowedRoles, meta=(AllowPrivateAccess=true))
    TArray<EPalGuildRole> GuildChestAllowedRoles;
    
public:
    UPalGroupGuildBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_UnderRaidBaseCampIds(TArray<FGuid> OldValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_Guildname();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_GuildMarker(TArray<FPalGuildMarkerData> OldMarkers);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_GuildChestAllowedRoles();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BaseCampLevel(int32 OldValue);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReceivedWordFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
    UFUNCTION(BlueprintCallable)
    void OnDeletePlayerAccount_ServerInternal(UPalPlayerAccount* DeleteAccount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBaseCampRaidStarted_ServerInternal(UPalBaseCampModuleRaidDetect* RaidDetectModule);
    
    UFUNCTION(BlueprintCallable)
    void OnBaseCampRaidEnded_ServerInternal(UPalBaseCampModuleRaidDetect* RaidDetectModule);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWorkerCapacityLimited(int32 InLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRolePermissionsImmutable(EPalGuildRole Role);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGuildChestRoleAllowed(EPalGuildRole Role) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasGuildPermission(const FGuid& PlayerUId, EPalGuildPermission Permission) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCurrentPermissionForRole(EPalGuildRole Role, EPalGuildPermission Permission) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWorkerCapacityNum(int32 InLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalGuildRole GetPlayerRole(const FGuid& PlayerUId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGuildNameByCheckBlockedUser(FString& outName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetGuildName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EPalGuildPermission> GetGuildMasterPermissions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalGuildMarkerData> GetGuildMarkers(TArray<FGuid>& IdList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EPalGuildRole> GetGuildChestAllowedRoles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EPalGuildPermission> GetDefaultPermissionsForRole(EPalGuildRole Role);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EPalGuildPermission> GetCurrentPermissionsForRole(EPalGuildRole Role) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBaseCampMaxNumInGuildSpecLevel(int32 InLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBaseCampMaxNumInGuild() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBaseCampLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText FormatLastOnlineTime(const UObject* WorldContextObject, const FDateTime& LastOnlineRealTime, bool bIsCurrentlyOnline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckGuildChestAccess(const FGuid& PlayerUId) const;
    
};

