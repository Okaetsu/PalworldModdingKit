#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientRelationshipCreatedCallbackDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDiscordClientRelationshipCreatedCallbackDynamic, FDiscordUniqueID, UserId, bool, isDiscordRelationshipUpdate);

