#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalCoopSkillSearchBase.h"
#include "PalCoopSkillSearchDungeonPortalMapObject.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalCoopSkillSearchDungeonPortalMapObject : public UPalCoopSkillSearchBase {
    GENERATED_BODY()
public:
    UPalCoopSkillSearchDungeonPortalMapObject();

    UFUNCTION(BlueprintCallable)
    void SearchDungeonPortalAndMapObjects(const TArray<FName>& SearchMapObjIds, const FVector& Origin, float SearchRadius, const FGuid& RequestPlayerUId);
    
};

