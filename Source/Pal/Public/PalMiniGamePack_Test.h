#pragma once
#include "CoreMinimal.h"
#include "PalMiniGamePackBase.h"
#include "PalMiniGamePack_Test.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMiniGamePack_Test : public UPalMiniGamePackBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSuccess;
    
    UPalMiniGamePack_Test();

};

