#pragma once
#include "CoreMinimal.h"
#include "PalAlwaysRelevantActorInfo.generated.h"

class AActor;
class UNetConnection;

USTRUCT(BlueprintType)
struct FPalAlwaysRelevantActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetConnection* Connection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastTalkActor;
    
    PAL_API FPalAlwaysRelevantActorInfo();
};

