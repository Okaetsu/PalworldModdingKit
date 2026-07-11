#pragma once
#include "CoreMinimal.h"
#include "PalLocationPointStatic.h"
#include "PalLocationPoint_StandaloneBoss.generated.h"

class APalBossTower;

UCLASS(Blueprintable)
class PAL_API UPalLocationPoint_StandaloneBoss : public UPalLocationPointStatic {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    APalBossTower* BossTower;
    
public:
    UPalLocationPoint_StandaloneBoss();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalBossTower* GetBossTower() const;
    
};

