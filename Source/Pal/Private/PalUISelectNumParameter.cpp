#include "PalUISelectNumParameter.h"

UPalUISelectNumParameter::UPalUISelectNumParameter() {
    this->MinNum = 0;
    this->MaxNum = 0;
    this->defaultNum = 0;
}

void UPalUISelectNumParameter::InvokeComplateCallback(EPalUISelectNumResult Result, int64 selectedNum) {
}

void UPalUISelectNumParameter::InvokeChangedNumCallback(int64 selectedNum) {
}


