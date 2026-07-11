#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalInvaderWaveInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalInvaderWaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaveMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime WaveEndRealTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompleteAllWave;
    
    PAL_API FPalInvaderWaveInfo();
};

