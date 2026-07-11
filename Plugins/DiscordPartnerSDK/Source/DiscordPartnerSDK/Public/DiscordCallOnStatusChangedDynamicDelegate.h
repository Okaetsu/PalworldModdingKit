#pragma once
#include "CoreMinimal.h"
#include "EDiscordCallError.h"
#include "EDiscordCallStatus.h"
#include "DiscordCallOnStatusChangedDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDiscordCallOnStatusChangedDynamic, EDiscordCallStatus, Status, EDiscordCallError, Error, int32, errorDetail);

