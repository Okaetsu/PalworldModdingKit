#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalDeadInfo.h"
#include "PalInstanceID.h"
#include "PalDeathDropPalComponent.generated.h"

class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalDeathDropPalComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DropPalDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DropPalRowNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipDropIfOwnerCaptured;
    
    UPalDeathDropPalComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnOwnerDead(FPalDeadInfo DeadInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnCreatedDropPal(FPalInstanceID CreatedPalInstanceID);
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetRowNames() const;
    
};

