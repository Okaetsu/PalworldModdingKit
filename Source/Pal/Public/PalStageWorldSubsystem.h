#pragma once
#include "CoreMinimal.h"
#include "PalStageAreaInfo.h"
#include "PalStageInstanceId.h"
#include "PalStageRoomInfo.h"
#include "PalWorldSubsystem.h"
#include "PalStageWorldSubsystem.generated.h"

class APalFieldEnvironmentDisableVolume;
class APalPlayerState;
class UDataLayerAsset;
class UPalStageModelBase;

UCLASS(Blueprintable)
class PAL_API UPalStageWorldSubsystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSimpleMulticastDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnPlayerStateMulticastDelegate, APalPlayerState*, PlayerState);

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleMulticastDelegate OnEnteredStageInClient;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleMulticastDelegate OnReturnToFieldFromStageInClient;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleMulticastDelegate OnReceivedSyncTeleportMoveResultInClient;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnPlayerStateMulticastDelegate OnSetupLocalPlayerDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalStageInstanceId, UPalStageModelBase*> StageModelMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UDataLayerAsset*, FPalStageAreaInfo> StageAreaInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalStageRoomInfo> RoomInfos;
    
public:
    UPalStageWorldSubsystem();

    UFUNCTION(BlueprintCallable)
    void OnVolumeExited(APalFieldEnvironmentDisableVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void OnVolumeEntered(APalFieldEnvironmentDisableVolume* Volume);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerInEnvironmentDisableVolume() const;
    
};

