#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalWazaID.h"
#include "Templates/SubclassOf.h"
#include "PendingFunnelFireRequest.generated.h"

class AController;
class APalCharacter;
class APalFunnelCharacter;

USTRUCT(BlueprintType)
struct FPendingFunnelFireRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalCharacter* ActionCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalFunnelCharacter> FunnelClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AController> FunnelControllerClass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWazaID WazaToFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnLocationOffset;
    
    PAL_API FPendingFunnelFireRequest();
};

