#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalLevelObjectWarpPointActivateConditionBase.h"
#include "PalLevelObjectWarpPointActivateCondition_PalOwnership.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalLevelObjectWarpPointActivateCondition_PalOwnership : public UPalLevelObjectWarpPointActivateConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PalMonsterData RequiredPalId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckOtomoHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckPalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckBaseCampWorker;
    
    UPalLevelObjectWarpPointActivateCondition_PalOwnership();

};

