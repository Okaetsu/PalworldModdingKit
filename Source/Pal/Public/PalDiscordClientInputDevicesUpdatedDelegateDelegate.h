#pragma once
#include "CoreMinimal.h"
#include "PalDiscordInputDeviceInfo.h"
#include "PalDiscordClientInputDevicesUpdatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalDiscordClientInputDevicesUpdatedDelegate, const TArray<FPalDiscordInputDeviceInfo>&, devices);

