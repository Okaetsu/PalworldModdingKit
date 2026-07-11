#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientUserAudioCapturedCallbackMulticastDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FDiscordClientUserAudioCapturedCallbackMulticast, int64, Data, FDiscordUniqueID, samplesPerChannel, int32, SampleRate, FDiscordUniqueID, channels);

