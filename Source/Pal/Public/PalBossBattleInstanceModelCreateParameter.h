#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalBossBattleInstanceModelCreateParameter.generated.h"

class APalBossTower;
class APalCutsceneActor;
class UAkAudioEvent;
class UDataLayerAsset;

USTRUCT(BlueprintType)
struct FPalBossBattleInstanceModelCreateParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalCutsceneActor> IntroCutsceneActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalCutsceneActor> EndingCutsceneActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataLayerAsset* ReservedDataLayerAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> IntroBGMAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> LoopBGMAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalBossTower* BossTower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_ItemData> OneTimeRewards;
    
    PAL_API FPalBossBattleInstanceModelCreateParameter();
};

