#pragma once
#include "CoreMinimal.h"
#include "DiscordClientNoAudioInputCallbackMulticastDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientNoAudioInputCallbackMulticast, bool, inputDetected);

