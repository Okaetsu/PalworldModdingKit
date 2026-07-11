#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalCoopSkillSearchBase.h"
#include "PalCoopSkillMetalDetector.generated.h"

class APalMapObject;

UCLASS(Blueprintable)
class PAL_API UPalCoopSkillMetalDetector : public UPalCoopSkillSearchBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchRangeEffectOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtendRangePerSecEffectOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalMapObject*> DetectedObjects;
    
public:
    UPalCoopSkillMetalDetector();

    UFUNCTION(BlueprintCallable)
    void MetalDetector(const FVector& Origin, float SearchRadius, const FGuid& RequestPlayerUId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APalMapObject*> GetDetectedObjects() const;
    
};

