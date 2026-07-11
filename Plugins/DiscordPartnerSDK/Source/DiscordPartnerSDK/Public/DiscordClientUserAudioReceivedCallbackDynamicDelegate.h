#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientUserAudioReceivedCallbackDynamicDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_SixParams(FDiscordClientUserAudioReceivedCallbackDynamic, FDiscordUniqueID, UserId, int64, Data, FDiscordUniqueID, samplesPerChannel, int32, SampleRate, FDiscordUniqueID, channels, bool&, outShouldMute);

