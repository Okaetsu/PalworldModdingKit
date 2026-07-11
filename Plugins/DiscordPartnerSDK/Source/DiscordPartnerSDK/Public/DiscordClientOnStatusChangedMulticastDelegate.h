#pragma once
#include "CoreMinimal.h"
#include "EDiscordClientError.h"
#include "EDiscordClientStatus.h"
#include "DiscordClientOnStatusChangedMulticastDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDiscordClientOnStatusChangedMulticast, EDiscordClientStatus, Status, EDiscordClientError, Error, int32, errorDetail);

