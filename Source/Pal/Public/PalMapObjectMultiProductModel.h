#pragma once
#include "CoreMinimal.h"
#include "OnProductModeChangedDelegateDelegate.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMultiProductModeData.h"
#include "PalNetArchive.h"
#include "PalWorkProgressWorkSpeedInterface.h"
#include "PalWorkProgressWorkableCheckInterface.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectMultiProductModel.generated.h"

class UPalItemContainer;
class UPalMapObjectEnergyModule;
class UPalMapObjectMultiProductModel;
class UPalMultiProductModeDataAsset;
class UPalUIMapObjectProductItemStatusIndicatorModel;
class UPalUserWidgetOverlayUI;
class UPalWorkBase;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectMultiProductModel : public UPalMapObjectConcreteModelBase, public IPalWorkProgressWorkableCheckInterface, public IPalWorkProgressWorkSpeedInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleDelegate, UPalMapObjectMultiProductModel*, Model);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnModeSelectUIRequestedDelegate, UPalMapObjectMultiProductModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleDelegate OnFinishProductOneLoopDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModeSelectUIRequestedDelegate OnModeSelectUIRequestedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProductModeChangedDelegate OnProductModeChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentProductId, meta=(AllowPrivateAccess=true))
    FName CurrentProductId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsWorkable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WorkSpeedAdditionalRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalMultiProductModeDataAsset> CachedModeDataAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> MenuUIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalUIMapObjectProductItemStatusIndicatorModel> StatusUIModel;
    
public:
    UPalMapObjectMultiProductModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void RequestClearProductMode_FromClient(const int32 PlayerId);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestClearProductMode();
    
private:
    UFUNCTION(BlueprintCallable)
    void RequestChangeProductMode_FromClient(const int32 PlayerId, const FPalNetArchive& Archive);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestChangeProductMode(FName NewProductId);
    
private:
    UFUNCTION(BlueprintCallable)
    void ReceivePickupItemResult_Client(const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void PickupItem_ServerInternal(const int32 PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateEnergyModuleState(UPalMapObjectEnergyModule* EnergyModule);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateContainerContent(UPalItemContainer* Container);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentProductId();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishWorkInServer(UPalWorkBase* Work);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalItemContainer* GetItemContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentProductId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalMultiProductModeData> GetAvailableModes() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcRequiredAmount(const float BaseRequiredAmount) const;
    

    // Fix for true pure virtual functions not being implemented
};

