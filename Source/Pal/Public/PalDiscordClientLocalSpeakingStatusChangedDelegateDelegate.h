#pragma once
#include "CoreMinimal.h"
#include "PalDiscordClientLocalSpeakingStatusChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalDiscordClientLocalSpeakingStatusChangedDelegate, bool, bIsSpeaking);

