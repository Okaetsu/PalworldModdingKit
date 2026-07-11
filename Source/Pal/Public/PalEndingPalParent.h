#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "PalEndingPalParent.generated.h"

class ULevelSequenceDirector;

UCLASS(Blueprintable)
class APalEndingPalParent : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> PalTemplateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinHideRadius;
    
public:
    APalEndingPalParent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TurnToAll(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveByTag(ULevelSequenceDirector* Director, bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void LookAtAll(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void HideUnboundPals();
    
};

