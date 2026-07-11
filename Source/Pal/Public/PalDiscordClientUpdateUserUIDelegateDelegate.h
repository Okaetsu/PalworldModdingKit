#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "PalDiscordClientUpdateUserUIDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalDiscordClientUpdateUserUIDelegate, FDiscordUniqueID, UserId);

