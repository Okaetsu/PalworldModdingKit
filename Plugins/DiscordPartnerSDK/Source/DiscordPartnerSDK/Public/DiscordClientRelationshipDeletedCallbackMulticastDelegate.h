#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientRelationshipDeletedCallbackMulticastDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordClientRelationshipDeletedCallbackMulticast, FDiscordUniqueID, UserId, bool, isDiscordRelationshipUpdate);

