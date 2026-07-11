#pragma once
#include "CoreMinimal.h"
#include "DiscordClientNoAudioInputCallbackDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientNoAudioInputCallbackDynamic, bool, inputDetected);

