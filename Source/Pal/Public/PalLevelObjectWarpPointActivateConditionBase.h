#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "PalLevelObjectWarpPointActivateConditionBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class PAL_API UPalLevelObjectWarpPointActivateConditionBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle FailedAlertTextId;
    
public:
    UPalLevelObjectWarpPointActivateConditionBase();

};

