#pragma once
#include "CoreMinimal.h"
#include "DiscordClientActivityInviteCallbackMulticastDelegate.generated.h"

class UDiscordActivityInvite;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientActivityInviteCallbackMulticast, UDiscordActivityInvite*, Invite);

