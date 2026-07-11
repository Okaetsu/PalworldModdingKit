#include "DiscordClientResult.h"

UDiscordClientResult::UDiscordClientResult() {
}

EDiscordErrorType UDiscordClientResult::Type() {
    return EDiscordErrorType::None;
}

FString UDiscordClientResult::ToString() {
    return TEXT("");
}

bool UDiscordClientResult::Successful() {
    return false;
}

int32 UDiscordClientResult::Status() {
    return 0;
}

void UDiscordClientResult::SetType(EDiscordErrorType NewType) {
}

void UDiscordClientResult::SetSuccessful(bool NewSuccessful) {
}

void UDiscordClientResult::SetStatus(int32 NewStatus) {
}

void UDiscordClientResult::SetRetryAfter(float NewRetryAfter) {
}

void UDiscordClientResult::SetRetryable(bool NewRetryable) {
}

void UDiscordClientResult::SetResponseBody(const FString& NewResponseBody) {
}

void UDiscordClientResult::SetErrorCode(int32 NewErrorCode) {
}

void UDiscordClientResult::SetError(const FString& NewError) {
}

float UDiscordClientResult::RetryAfter() {
    return 0.0f;
}

bool UDiscordClientResult::Retryable() {
    return false;
}

FString UDiscordClientResult::ResponseBody() {
    return TEXT("");
}

int32 UDiscordClientResult::ErrorCode() {
    return 0;
}

FString UDiscordClientResult::Error() {
    return TEXT("");
}

void UDiscordClientResult::Drop() {
}


