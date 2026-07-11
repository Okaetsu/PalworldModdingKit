#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Info.h"
#include "PalLevelGimmick_AreaBarrier_LockIds.h"
#include "PalLevelGimmick_AreaBarrier_Info.generated.h"

UCLASS(Blueprintable)
class PAL_API APalLevelGimmick_AreaBarrier_Info : public AInfo {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActiveVolumeChangedDelegate, const FGuid&, VolumeId, bool, bActivated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveVolumeChangedDelegate OnActiveVolumeChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalLevelGimmick_AreaBarrier_LockIds> AreaBarrierLockIdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FGuid> InverseAreaBarrierLockIdMap;
    
public:
    APalLevelGimmick_AreaBarrier_Info(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveActiveVolumeId(const FGuid& InVolumeId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVolumeActive(const FGuid& InVolumeId) const;
    
    UFUNCTION(BlueprintCallable)
    void AddActiveVolumeId(const FGuid& InVolumeId);
    
};

