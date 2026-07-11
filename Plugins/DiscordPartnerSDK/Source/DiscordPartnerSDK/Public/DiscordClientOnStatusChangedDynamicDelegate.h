#pragma once
#include "CoreMinimal.h"
#include "EDiscordClientError.h"
#include "EDiscordClientStatus.h"
#include "DiscordClientOnStatusChangedDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDiscordClientOnStatusChangedDynamic, EDiscordClientStatus, Status, EDiscordClientError, Error, int32, errorDetail);

