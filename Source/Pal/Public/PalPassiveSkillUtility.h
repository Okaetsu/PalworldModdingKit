#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalPassiveSkillUtility.generated.h"

class APalPlayerCharacter;
class UObject;

UCLASS(Blueprintable)
class UPalPassiveSkillUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalPassiveSkillUtility();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TrySphereRecovery(const UObject* WorldContextObject, APalPlayerCharacter* PlayerCharacter, FName SphereItemId, int32 Count);
    
};

