#include "PalSkyCreatorCutsceneLocal.h"

APalSkyCreatorCutsceneLocal::APalSkyCreatorCutsceneLocal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = false;
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
    this->LightningParameters.AddDefaulted(4);
}


