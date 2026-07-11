#pragma once
#include "CoreMinimal.h"
#include "PalCharacterParameterIgnoreFlags.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterParameterIgnoreFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreFriendship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreAwakening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreSoulEnhancement;
    
    PAL_API FPalCharacterParameterIgnoreFlags();
};

