#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientRelationshipDeletedCallbackDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDiscordClientRelationshipDeletedCallbackDynamic, FDiscordUniqueID, UserId, bool, isDiscordRelationshipUpdate);

