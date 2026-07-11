#pragma once
#include "CoreMinimal.h"
#include "PalActionMovementModeBase.h"
#include "PalActionMovementMode_JetpackGlider.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalActionMovementMode_JetpackGlider : public UPalActionMovementModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionCheckDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionCapsuleRadiusScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionCapsuleHalfHeightScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMeshPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshPitchInterpSpeed;
    
public:
    UPalActionMovementMode_JetpackGlider();

};

