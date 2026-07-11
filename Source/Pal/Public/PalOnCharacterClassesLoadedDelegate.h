#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PalOnCharacterClassesLoadedDelegate.generated.h"

class APalCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FPalOnCharacterClassesLoaded, const TArray<TSubclassOf<APalCharacter>>&, LoadedClasses);

