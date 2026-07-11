#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalActorClassSpawnerInClientBase.h"
#include "Templates/SubclassOf.h"
#include "PalActorClassSpawnerOnlyFieldActiveInClient.generated.h"

class AActor;

UCLASS(Blueprintable)
class PAL_API APalActorClassSpawnerOnlyFieldActiveInClient : public APalActorClassSpawnerInClientBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> WorldTreeAreaCollisionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldTreeAreaBoundsMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldTreeAreaBoundsMax;
    
public:
    APalActorClassSpawnerOnlyFieldActiveInClient(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnReturnToFieldFromStage_ClientInternal();
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedSyncTeleportMoveResult_ClientInternal();
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredStage_ClientInternal();
    
};

