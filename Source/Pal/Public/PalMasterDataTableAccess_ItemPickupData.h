#pragma once
#include "CoreMinimal.h"
#include "EPalMasterDataExecPinType.h"
#include "PalItemPickupMasterData.h"
#include "PalMasterDataTableAccessBase.h"
#include "PalMasterDataTableAccess_ItemPickupData.generated.h"

UCLASS(Blueprintable)
class UPalMasterDataTableAccess_ItemPickupData : public UPalMasterDataTableAccessBase {
    GENERATED_BODY()
public:
    UPalMasterDataTableAccess_ItemPickupData();

private:
    UFUNCTION(BlueprintCallable)
    void BPExec_FindRow(FName RowName, EPalMasterDataExecPinType& ExecType, FPalItemPickupMasterData& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalItemPickupMasterData BP_FindRow(FName RowName, bool& bResult) const;
    
};

