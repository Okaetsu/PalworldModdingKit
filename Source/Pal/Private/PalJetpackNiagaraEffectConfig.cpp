#include "PalJetpackNiagaraEffectConfig.h"

FPalJetpackNiagaraEffectConfig::FPalJetpackNiagaraEffectConfig() {
    this->NiagaraEffect = NULL;
    this->AttachTarget = EPalJetpackEffectAttachTarget::RootComponent;
    this->bAbsoluteScale = false;
    this->bNotSpawnWhenHidden = false;
}

