#include "PalCloudSaveManager.h"

UPalCloudSaveManager::UPalCloudSaveManager() {
    this->bConfigEnabled = false;
    this->UploadWorldProcessor = NULL;
    this->DownloadWorldsProcessor = NULL;
    this->DeleteWorldProcessor = NULL;
    this->DumpFileListProcessor = NULL;
    this->CleanUpProcessor = NULL;
}

void UPalCloudSaveManager::RequestDumpFileList() {
}

void UPalCloudSaveManager::RequestDownloadWorlds(bool bForce) {
}

void UPalCloudSaveManager::RequestCleanUp() {
}

bool UPalCloudSaveManager::IsRequestedDownloadOnceEver() const {
    return false;
}

bool UPalCloudSaveManager::IsEnabled() const {
    return false;
}

void UPalCloudSaveManager::EventOnWorldRestoredFromBackup(const FString& WorldName) {
}

void UPalCloudSaveManager::EventOnWorldDeleted(const FString& WorldName) {
}

void UPalCloudSaveManager::EventOnWorldAutoSaveStart() {
}

void UPalCloudSaveManager::EventOnWorldAutoSaveFinished(bool bSuccess) {
}


