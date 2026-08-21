#pragma once
#include "CoreMinimal.h"
#include "PalWorldSubsystem.h"
#include "PalTeleportGlobalDistanceFieldRefreshSubsystem.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalTeleportGlobalDistanceFieldRefreshSubsystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    UPalTeleportGlobalDistanceFieldRefreshSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnReceivedSyncTeleportMoveResult_ClientInternal();
    
};

