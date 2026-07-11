#pragma once
#include "CoreMinimal.h"
#include "EDiscordCallError.h"
#include "EDiscordCallStatus.h"
#include "DiscordCallOnStatusChangedMulticastDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDiscordCallOnStatusChangedMulticast, EDiscordCallStatus, Status, EDiscordCallError, Error, int32, errorDetail);

