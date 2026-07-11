#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalNightVisionComponent.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNightVisionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* NvPPMaterial;
    
public:
    UPalNightVisionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleNightVision(float Weight);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SetNightVisionEnabled_ToClient(bool bEnable, float Weight);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNightVisionEnabled_ForServer(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetNightVisionEnabled(bool bEnable, float Weight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNightVisionEnabled_ForServer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNightVisionEnabled_ForClient() const;
    
};

