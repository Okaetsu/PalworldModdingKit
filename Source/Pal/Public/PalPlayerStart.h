#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "PalPlayerStartOptions.h"
#include "PalPlayerStart.generated.h"

UCLASS(Blueprintable)
class PAL_API APalPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPlayerStartOptions StartOptions;
    
    APalPlayerStart(const FObjectInitializer& ObjectInitializer);

};

