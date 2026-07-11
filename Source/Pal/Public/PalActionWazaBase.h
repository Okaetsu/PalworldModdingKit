#pragma once
#include "CoreMinimal.h"
#include "EPalWazaID.h"
#include "PalActionBase.h"
#include "PalActionWazaBase.generated.h"

class APalPlayerCharacter;
class UAkAudioEvent;
class UPalSoundPlayer;

UCLASS(Blueprintable)
class PAL_API UPalActionWazaBase : public UPalActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWazaID WazaID;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisableTickOptimization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCancelJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideNetUpdateFrequencyDuringWaza;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WazaNetUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceNetUpdateOnWazaBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceNetUpdateOnWazaEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalSoundPlayer* SoundPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyFullStomachCost;
    
public:
    UPalActionWazaBase();
    UFUNCTION(BlueprintCallable)
    void StopAkSound();
    
    UFUNCTION(BlueprintCallable)
    void SetCancelJumpEnable(const bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void PlayAkSound(UAkAudioEvent* AudioEvent);
    
    UFUNCTION(BlueprintPure)
    EPalWazaID GetWazaID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalPlayerCharacter* GetRiderPlayer();
    
};

