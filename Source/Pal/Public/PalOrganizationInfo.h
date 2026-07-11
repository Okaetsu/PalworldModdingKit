#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Info.h"
#include "EPalOrganizationType.h"
#include "PalOrganizationInfo.generated.h"

class UPalGroupOrganization;

UCLASS(Blueprintable)
class PAL_API APalOrganizationInfo : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalOrganizationType OrganizationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Organization, meta=(AllowPrivateAccess=true))
    UPalGroupOrganization* Organization;
    
public:
    APalOrganizationInfo(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Organization(const UPalGroupOrganization* OldValue);
    
};

