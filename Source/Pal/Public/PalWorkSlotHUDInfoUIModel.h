#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalBuildObjectStatusHUDSlot.h"
#include "EPalWorkSuitability.h"
#include "PalWorkSlotHUDInfo.h"
#include "PalWorkSlotHUDInfoUIModel.generated.h"

class UPalWorkSlotHUDInfoUIModel;

UCLASS(Blueprintable)
class PAL_API UPalWorkSlotHUDInfoUIModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWorkSlotHUDInfoUpdated, UPalWorkSlotHUDInfoUIModel*, UIModel);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWorkSlotHUDInfoUpdated OnWorkSlotInfoUpdatedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalWorkSlotHUDInfo WorkSlotInfo;
    
public:
    UPalWorkSlotHUDInfoUIModel();

    UFUNCTION(BlueprintCallable)
    void SetWorkSlotInfo(const FPalWorkSlotHUDInfo& InInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalWorkSlotHUDInfo GetWorkSlotInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalBuildObjectStatusHUDSlot GetSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalWorkSuitability GetRequiredWorkSuitability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredRank() const;
    
};

