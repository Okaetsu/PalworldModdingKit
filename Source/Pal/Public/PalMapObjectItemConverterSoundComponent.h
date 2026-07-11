#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalMapObjectItemConverterSoundComponent.generated.h"

class UAkAudioEvent;
class UPalMapObjectConcreteModelBase;
class UPalMapObjectConvertItemModel;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectItemConverterSoundComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> AllWorkCompletedSE;
    
public:
    UPalMapObjectItemConverterSoundComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnSetConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteAllConvertInServer(UPalMapObjectConvertItemModel* ConvertItemModel);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Broadcast_OnCompleteAllConvert();
    
};

