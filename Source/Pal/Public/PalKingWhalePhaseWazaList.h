#pragma once
#include "CoreMinimal.h"
#include "EPalWazaID.h"
#include "PalKingWhalePhaseWazaList.generated.h"

USTRUCT(BlueprintType)
struct FPalKingWhalePhaseWazaList {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalWazaID> WazaList;
    
    PAL_API FPalKingWhalePhaseWazaList();
};

