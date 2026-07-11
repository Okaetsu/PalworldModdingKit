#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalBuildObjectPhysicsBudgetEntry.h"
#include "PalBuildObjectPhysicsBudgetManager.generated.h"

class UPalMapObjectManager;

UCLASS(Blueprintable)
class PAL_API UPalBuildObjectPhysicsBudgetManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalMapObjectManager> MapObjectManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalBuildObjectPhysicsBudgetEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FGuid> SignificanceCandidateSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FGuid> PhysicsStateRecheckSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> PendingStateChanges;
    
public:
    UPalBuildObjectPhysicsBudgetManager();

};

