#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EPalKingWhaleBattlePhase.h"
#include "PalKingWhaleAudioPhaseInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPalKingWhaleAudioPhaseInterface : public UInterface {
    GENERATED_BODY()
};

class IPalKingWhaleAudioPhaseInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetKingWhaleAudioPhaseLocked(bool bLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetKingWhaleAudioPhase(EPalKingWhaleBattlePhase NewPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyKingWhaleAudioPhase();
    
};

