#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientRelationshipGroupsUpdatedCallbackDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientRelationshipGroupsUpdatedCallbackDynamic, FDiscordUniqueID, UserId);

