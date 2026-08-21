#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalSaveGameStorageUtility.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalSaveGameStorageUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalSaveGameStorageUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSaveDataPathPossiblyTooLong();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSaveDataDiskSpacePossiblyInsufficient();
    
};

