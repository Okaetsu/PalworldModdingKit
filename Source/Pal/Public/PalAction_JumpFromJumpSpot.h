#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Engine/EngineTypes.h"
#include "EPalCharacterMovementCustomMode.h"
#include "EPalGeneralAnimSequenceType.h"
#include "PalActionBase.h"
#include "PalNetArchive.h"
#include "Templates/SubclassOf.h"
#include "PalAction_JumpFromJumpSpot.generated.h"

class UAnimMontage;
class UPalCameraModifier;
class UPalCharacterMovementComponent;

UCLASS(Blueprintable)
class UPalAction_JumpFromJumpSpot : public UPalActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLaunchCharacterDelegate);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLaunchCharacterDelegate OnLaunchCharacterDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalCameraModifier> PlayerCameraModifierClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayerJumpPrepareMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerLaunchMontageNotifyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalCameraModifier> MonsterCameraModifierClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalGeneralAnimSequenceType MonsterJumpPrepareAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MonsterJumpPrepareAnimPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MonsterLaunchDelayTime;
    
public:
    UPalAction_JumpFromJumpSpot();

    UFUNCTION(BlueprintCallable)
    static void WriteDataToBlackboard(UPARAM(Ref) FPalNetArchive& BlackboardRef, bool bShouldPlayJumpPrepareMontage, const FVector& LaunchVelocity);
    
private:
    UFUNCTION(BlueprintCallable)
    void EventOnMovementModeChanged(UPalCharacterMovementComponent* Component, TEnumAsByte<EMovementMode> prevMode, TEnumAsByte<EMovementMode> newMode, EPalCharacterMovementCustomMode PrevCustomMode, EPalCharacterMovementCustomMode NewCustomMode);
    
    UFUNCTION()
    void EventOnMontageNotify(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);
    
    UFUNCTION(BlueprintCallable)
    void EventOnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
};

