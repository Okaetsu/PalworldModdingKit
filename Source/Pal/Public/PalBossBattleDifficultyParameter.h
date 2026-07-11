#pragma once
#include "CoreMinimal.h"
#include "EPalBossBattleHardUnlockCondition.h"
#include "PalBossBattleSuccessItemInfo.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalBossBattleDifficultyParameter.generated.h"

class APalAIController;
class APalBossBattleEventBase;

USTRUCT(BlueprintType)
struct FPalBossBattleDifficultyParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PalMonsterData PalId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalAIController> AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalBossBattleSuccessItemInfo> SuccessItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalBossBattleEventBase> BossBattleEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBossBattleHardUnlockCondition HardUnlockCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CapturePhaseTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnBossAtStart_InServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnPalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReadyPhaseTimeLimit;
    
    PAL_API FPalBossBattleDifficultyParameter();
};

