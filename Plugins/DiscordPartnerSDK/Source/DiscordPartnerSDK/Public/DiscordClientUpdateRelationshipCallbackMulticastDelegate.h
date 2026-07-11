#pragma once
#include "CoreMinimal.h"
#include "DiscordClientUpdateRelationshipCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientUpdateRelationshipCallbackMulticast, UDiscordClientResult*, Result);

