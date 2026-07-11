#pragma once
#include "CoreMinimal.h"
#include "Components/GameStateComponent.h"
#include "PalGameSystemInitSequenceSet.h"
#include "PalGameSystemInitManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalGameSystemInitManagerComponent : public UGameStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanReferToWorldObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalGameSystemInitSequenceSet> InitSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentSequenceIndex;
    
public:
    UPalGameSystemInitManagerComponent(const FObjectInitializer& ObjectInitializer);

};

