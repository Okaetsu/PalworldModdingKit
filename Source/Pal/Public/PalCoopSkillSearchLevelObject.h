#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalCoopSkillSearchBase.h"
#include "Templates/SubclassOf.h"
#include "PalCoopSkillSearchLevelObject.generated.h"

class APalLevelObjectActor;

UCLASS(Blueprintable)
class PAL_API UPalCoopSkillSearchLevelObject : public UPalCoopSkillSearchBase {
    GENERATED_BODY()
public:
    UPalCoopSkillSearchLevelObject();

    UFUNCTION(BlueprintCallable)
    void SearchLevelObjects(const TArray<TSubclassOf<APalLevelObjectActor>>& SearchClasses, const FVector& Origin, float SearchRadius, const FGuid& RequestPlayerUId);
    
};

