#pragma once
#include "CoreMinimal.h"
#include "OnLocalPlayerVolumeEventDelegate.generated.h"

class APalFieldEnvironmentDisableVolume;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLocalPlayerVolumeEvent, APalFieldEnvironmentDisableVolume*, Volume);

