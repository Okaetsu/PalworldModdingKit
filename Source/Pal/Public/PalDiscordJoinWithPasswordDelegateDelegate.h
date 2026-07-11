#pragma once
#include "CoreMinimal.h"
#include "PalDiscordJoinWithPasswordDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPalDiscordJoinWithPasswordDelegate, const FString&, IpAddress, int32, Port);

