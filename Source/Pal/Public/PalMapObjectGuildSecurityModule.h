#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalGuildRole.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalNetArchive.h"
#include "PalMapObjectGuildSecurityModule.generated.h"

class UPalGroupGuildBase;
class UPalMapObjectGuildSecurityModule;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectGuildSecurityModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpdateAllowedRoles, UPalMapObjectGuildSecurityModule*, Module, const TArray<EPalGuildRole>&, NewRoles);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateAllowedRoles OnUpdateAllowedRolesDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AllowedRoles, meta=(AllowPrivateAccess=true))
    TArray<EPalGuildRole> AllowedRoles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GuildChestMode, meta=(AllowPrivateAccess=true))
    bool bIsGuildChestModule;
    
public:
    UPalMapObjectGuildSecurityModule();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void RequestUpdateAllowedRoles_ServerInternal(int32 RequestPlayerId, const FPalNetArchive& Archive);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestUpdateAllowedRoles(const EPalGuildRole TargetRole, const bool bOn);
    
    UFUNCTION(BlueprintCallable)
    void OpenMenuSecuritySetting();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateGuildChestAllowedRoles(UPalGroupGuildBase* Guild, const TArray<EPalGuildRole>& NewRoles);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_GuildChestMode();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AllowedRoles();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRoleAllowed(EPalGuildRole Role) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPasswordLock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EPalGuildRole> GetAllowedRoles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckGuildSecurityAccess(const FGuid& PlayerUId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayerEditSecuritySettings(const FGuid& PlayerUId) const;
    
};

