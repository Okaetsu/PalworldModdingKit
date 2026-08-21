#include "PalAsyncSaveProcess.h"

FPalAsyncSaveProcess::FPalAsyncSaveProcess() {
    this->State = EPalAsyncSaveProcessState::Saving;
    this->bPreDelegateSuccess = false;
    this->SaveObject = NULL;
}

