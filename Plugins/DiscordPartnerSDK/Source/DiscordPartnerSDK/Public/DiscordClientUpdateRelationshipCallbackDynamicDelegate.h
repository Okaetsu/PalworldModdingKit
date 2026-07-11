#pragma once
#include "CoreMinimal.h"
#include "DiscordClientUpdateRelationshipCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientUpdateRelationshipCallbackDynamic, UDiscordClientResult*, Result);

