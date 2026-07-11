#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientUserAudioReceivedCallbackMulticastDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FDiscordClientUserAudioReceivedCallbackMulticast, FDiscordUniqueID, UserId, int64, Data, FDiscordUniqueID, samplesPerChannel, int32, SampleRate, FDiscordUniqueID, channels, bool&, outShouldMute);

