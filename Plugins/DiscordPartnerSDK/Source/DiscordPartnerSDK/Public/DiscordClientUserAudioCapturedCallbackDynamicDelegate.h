#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientUserAudioCapturedCallbackDynamicDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_FourParams(FDiscordClientUserAudioCapturedCallbackDynamic, int64, Data, FDiscordUniqueID, samplesPerChannel, int32, SampleRate, FDiscordUniqueID, channels);

