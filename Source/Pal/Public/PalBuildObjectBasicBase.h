#pragma once
#include "CoreMinimal.h"
#include "PalBuildObject.h"
#include "PalBuildObjectBasicBase.generated.h"

class UInstancedStaticMeshComponent;

UCLASS(Blueprintable)
class PAL_API APalBuildObjectBasicBase : public APalBuildObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivateVisualBuiltOnWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInstancedStaticMeshComponent*> BuiltOnWaterVisualComponents;
    
public:
    APalBuildObjectBasicBase(const FObjectInitializer& ObjectInitializer);

};

