#pragma once
#include "CoreMinimal.h"
#include "PalCutsceneBindParameter.h"
#include "PalCutsceneBindParameter_FasttravelPoint.generated.h"

class UPalCutsceneBindParameter_FasttravelPoint;

UCLASS(Blueprintable)
class UPalCutsceneBindParameter_FasttravelPoint : public UPalCutsceneBindParameter {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FPalUnlockFasttravelCutsceneDelegate, UPalCutsceneBindParameter_FasttravelPoint*, Self);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalUnlockFasttravelCutsceneDelegate OnEndCutsceneDelegate;
    
    UPalCutsceneBindParameter_FasttravelPoint();

    UFUNCTION(BlueprintCallable)
    void OnEndCutscene();
    
};

