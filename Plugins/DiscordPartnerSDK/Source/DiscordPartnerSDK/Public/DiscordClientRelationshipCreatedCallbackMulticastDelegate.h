#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientRelationshipCreatedCallbackMulticastDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordClientRelationshipCreatedCallbackMulticast, FDiscordUniqueID, UserId, bool, isDiscordRelationshipUpdate);

