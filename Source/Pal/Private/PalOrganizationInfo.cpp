#include "PalOrganizationInfo.h"
#include "Net/UnrealNetwork.h"

APalOrganizationInfo::APalOrganizationInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->OrganizationType = EPalOrganizationType::None;
    this->Organization = NULL;
}

void APalOrganizationInfo::OnRep_Organization(const UPalGroupOrganization* OldValue) {
}

void APalOrganizationInfo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalOrganizationInfo, GroupId);
    DOREPLIFETIME(APalOrganizationInfo, OrganizationType);
    DOREPLIFETIME(APalOrganizationInfo, Organization);
}


