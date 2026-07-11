#pragma once
#include "CoreMinimal.h"
#include "EPalActionType.h"
#include "EPalWorkSuitability.h"
#include "EPalWorkType.h"
#include "PalWorkAssign.h"
#include "PalWorkAssign_WorkProgressMultiType.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalWorkAssign_WorkProgressMultiType : public UPalWorkAssign {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalWorkSuitability AssignedWorkSuitability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalWorkType AssignedWorkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalActionType AssignedWorkActionType;
    
public:
    UPalWorkAssign_WorkProgressMultiType();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

