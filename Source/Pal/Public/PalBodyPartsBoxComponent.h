#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "EPalBodyPartsType.h"
#include "PalBodyPartsInterface.h"
#include "PalBodyPartsBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalBodyPartsBoxComponent : public UBoxComponent, public IPalBodyPartsInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBodyPartsType BodyPartsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BodyPartsFlags;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultCollisionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BroadcastCollisionProfileName, meta=(AllowPrivateAccess=true))
    FName BroadcastCollisionProfileName;
    
public:
    UPalBodyPartsBoxComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_BroadcastCollisionProfileName();
    

    // Fix for true pure virtual functions not being implemented
};

