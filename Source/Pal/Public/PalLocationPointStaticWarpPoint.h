#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalLocationPointStatic.h"
#include "PalLocationPointStaticWarpPoint.generated.h"

class UPalLocationPointStaticWarpPoint;

UCLASS(Blueprintable)
class PAL_API UPalLocationPointStaticWarpPoint : public UPalLocationPointStatic {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid LevelObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid PairedDestinationLevelObjectId;
    
public:
    UPalLocationPointStaticWarpPoint();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetPairedDestinationTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetPairedDestinationLevelObjectId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetLevelObjectId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalLocationPointStaticWarpPoint* FindPairedLocationPoint() const;
    
};

