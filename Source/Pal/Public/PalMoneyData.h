#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalMoneyData.generated.h"

class APalPlayerState;
class UPalBaseCampModel;
class UPalBaseCampModuleItemStorage;
class UPalItemContainer;
class UPalPlayerInventoryData;

UCLASS(Blueprintable)
class PAL_API UPalMoneyData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatedMoneyDelegate, int64, NowMoney);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAddMoneyDelegate, int64, OldMoney, int64, AddMoney);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdatedMoneyDelegate OnUpdatedMoneyDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddMoneyDelegate OnAddMoneyDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalPlayerInventoryData* parentInventoryData;
    
public:
    UPalMoneyData();

    UFUNCTION(BlueprintCallable)
    void RequestCalcMoney();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateInventorylContainer(UPalItemContainer* Container);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateBaseCampItemContainer(UPalBaseCampModuleItemStorage* This, UPalItemContainer* UpdatedContainer);
    
    UFUNCTION(BlueprintCallable)
    void OnLocalPlayerGuildChanged(APalPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnLeaveBaseCamp();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterBaseCamp(UPalBaseCampModel* Model);
    
public:
    UFUNCTION(BlueprintPure)
    int64 GetNowMoney() const;
    
};

