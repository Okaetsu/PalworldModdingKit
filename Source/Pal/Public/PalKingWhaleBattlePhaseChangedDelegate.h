#pragma once
#include "CoreMinimal.h"
#include "EPalKingWhaleBattlePhase.h"
#include "PalKingWhaleBattlePhaseChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalKingWhaleBattlePhaseChanged, EPalKingWhaleBattlePhase, NewPhase);

