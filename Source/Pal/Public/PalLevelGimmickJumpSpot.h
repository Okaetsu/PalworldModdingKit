#pragma once
#include "CoreMinimal.h"
#include "PalCharacterJumpModifier.h"
#include "PalLevelObjectActor.h"
#include "Templates/SubclassOf.h"
#include "PalLevelGimmickJumpSpot.generated.h"

class AActor;
class UPalAction_JumpFromJumpSpot;
class USceneComponent;

UCLASS(Blueprintable)
class APalLevelGimmickJumpSpot : public APalLevelObjectActor, public IPalCharacterJumpModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalAction_JumpFromJumpSpot> JumpActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayJumpPrepareMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpFowardVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpZVelocity;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
public:
    APalLevelGimmickJumpSpot(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLaunchCharacter();
    
private:
    UFUNCTION(BlueprintCallable)
    void EventOnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void EventOnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void EventOnActionLaunchCharacter();
    
    
    // Fix for true pure virtual functions not being implemented
};

