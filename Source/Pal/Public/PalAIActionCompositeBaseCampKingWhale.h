#pragma once
#include "CoreMinimal.h"
#include "PalAIActionCompositeBaseCamp.h"
#include "PalAIActionCompositeBaseCampKingWhale.generated.h"

class UPalBaseCampOrbitComponent;
class UPalCryComponentBase;

UCLASS(Blueprintable)
class PAL_API UPalAIActionCompositeBaseCampKingWhale : public UPalAIActionCompositeBaseCamp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CryIntervalMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CryIntervalMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HomingBubbleCoolTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPalBaseCampOrbitComponent* OrbitComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPalCryComponentBase* CryComponent;
    
public:
    UPalAIActionCompositeBaseCampKingWhale();

};

