#include "PalMasterDataTableAccess_ItemPickupData.h"

UPalMasterDataTableAccess_ItemPickupData::UPalMasterDataTableAccess_ItemPickupData() {
}

void UPalMasterDataTableAccess_ItemPickupData::BPExec_FindRow(FName RowName, EPalMasterDataExecPinType& ExecType, FPalItemPickupMasterData& OutData) {
}

FPalItemPickupMasterData UPalMasterDataTableAccess_ItemPickupData::BP_FindRow(FName RowName, bool& bResult) const {
    return FPalItemPickupMasterData{};
}


