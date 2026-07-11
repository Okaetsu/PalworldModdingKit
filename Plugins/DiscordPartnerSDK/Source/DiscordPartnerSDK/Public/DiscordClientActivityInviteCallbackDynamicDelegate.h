#pragma once
#include "CoreMinimal.h"
#include "DiscordClientActivityInviteCallbackDynamicDelegate.generated.h"

class UDiscordActivityInvite;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientActivityInviteCallbackDynamic, UDiscordActivityInvite*, Invite);

