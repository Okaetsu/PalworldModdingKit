#pragma once
#include "CoreMinimal.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalLevelObjectActor.h"
#include "PalTalkableObjectInterface.h"
#include "PalLevelObject_Talkable.generated.h"

class AActor;
class APalPlayerState;
class UObject;
class UPalNPCTalkFlowComponent;

UCLASS(Blueprintable)
class PAL_API APalLevelObject_Talkable : public APalLevelObjectActor, public IPalInteractiveObjectIndicatorInterface, public IPalTalkableObjectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkFlowId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNPCTalkFlowComponent* TalkFlowComponent;
    
public:
    APalLevelObject_Talkable(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompleteSyncPlayer_BP(APalPlayerState* PlayerState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteSyncPlayer(APalPlayerState* PlayerState);
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetRowNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetIndicatorText_BP(const UObject* WorldObjectContext, EPalInteractiveObjectIndicatorType IndicatorType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanTalk() const;
    

    // Fix for true pure virtual functions not being implemented
};

