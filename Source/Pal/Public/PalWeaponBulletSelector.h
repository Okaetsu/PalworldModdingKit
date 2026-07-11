#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalDynamicItemId.h"
#include "PalWeaponBulletSelector.generated.h"

class APalWeaponBase;
class UPalItemContainer;
class UPalShooterComponent;

UCLASS(Blueprintable)
class UPalWeaponBulletSelector : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangedReserveBulletDelegate, const APalWeaponBase*, WeaponActor, const FName&, ReservedBulletItemId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangedBulletDelegate, const APalWeaponBase*, WeaponActor, const FName&, BulletItemId);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangedReserveBulletDelegate OnChangedReserveBulletDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangedBulletDelegate OnChangedBulletDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalShooterComponent> WeakOwnerShooterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalDynamicItemId, FName> ReservedBulletItemIdMap;
    
public:
    UPalWeaponBulletSelector();

    UFUNCTION(BlueprintCallable)
    void SetBulletId_Local(const APalWeaponBase* TargetWeapon, const FName& BulletItemId);
    
    UFUNCTION(BlueprintCallable)
    void ReserveSelectPrevBullet(const APalWeaponBase* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void ReserveSelectNextBullet(const APalWeaponBase* Weapon);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInventoryContainerUpdated(UPalItemContainer* Container);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSelectableBulletItemIds(const APalWeaponBase* Weapon, TArray<FName>& OutSelectableBulletIds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentBulletId(const APalWeaponBase* Weapon) const;
    
};

