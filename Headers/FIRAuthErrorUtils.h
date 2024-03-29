//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FIRAuthErrorUtils : NSObject
{
}

+ (id)keychainErrorWithFunction:(id)arg1 status:(int)arg2;
+ (id)invalidDynamicLinkDomainErrorWithMessage:(id)arg1;
+ (id)invalidProviderIDErrorWithMessage:(id)arg1;
+ (id)nullUserErrorWithMessage:(id)arg1;
+ (id)URLResponseErrorWithCode:(id)arg1 message:(id)arg2;
+ (id)webSignInUserInteractionFailureWithReason:(id)arg1;
+ (id)appVerificationUserInteractionFailureWithReason:(id)arg1;
+ (id)webContextCancelledErrorWithMessage:(id)arg1;
+ (id)webContextAlreadyPresentedErrorWithMessage:(id)arg1;
+ (id)captchaCheckFailedErrorWithMessage:(id)arg1;
+ (id)missingClientIdentifierErrorWithMessage:(id)arg1;
+ (id)appNotVerifiedErrorWithMessage:(id)arg1;
+ (id)notificationNotForwardedError;
+ (id)gameKitNotLinkedError;
+ (id)localPlayerNotAuthenticatedError;
+ (id)missingAppTokenErrorWithUnderlyingError:(id)arg1;
+ (id)quotaExceededErrorWithMessage:(id)arg1;
+ (id)invalidAppCredentialWithMessage:(id)arg1;
+ (id)missingAppCredentialWithMessage:(id)arg1;
+ (id)sessionExpiredErrorWithMessage:(id)arg1;
+ (id)invalidVerificationIDErrorWithMessage:(id)arg1;
+ (id)missingVerificationIDErrorWithMessage:(id)arg1;
+ (id)invalidVerificationCodeErrorWithMessage:(id)arg1;
+ (id)missingVerificationCodeErrorWithMessage:(id)arg1;
+ (id)invalidPhoneNumberErrorWithMessage:(id)arg1;
+ (id)missingPhoneNumberErrorWithMessage:(id)arg1;
+ (id)missingEmailErrorWithMessage:(id)arg1;
+ (id)missingContinueURIErrorWithMessage:(id)arg1;
+ (id)invalidContinueURIErrorWithMessage:(id)arg1;
+ (id)unauthorizedDomainErrorWithMessage:(id)arg1;
+ (id)missingAndroidPackageNameErrorWithMessage:(id)arg1;
+ (id)missingIosBundleIDErrorWithMessage:(id)arg1;
+ (id)invalidRecipientEmailErrorWithMessage:(id)arg1;
+ (id)invalidSenderErrorWithMessage:(id)arg1;
+ (id)invalidMessagePayloadErrorWithMessage:(id)arg1;
+ (id)invalidActionCodeErrorWithMessage:(id)arg1;
+ (id)expiredActionCodeErrorWithMessage:(id)arg1;
+ (id)appNotAuthorizedError;
+ (id)weakPasswordErrorWithServerResponseReason:(id)arg1;
+ (id)operationNotAllowedErrorWithMessage:(id)arg1;
+ (id)credentialAlreadyInUseErrorWithMessage:(id)arg1 credential:(id)arg2 email:(id)arg3;
+ (id)userMismatchError;
+ (id)invalidAPIKeyError;
+ (id)userNotFoundErrorWithMessage:(id)arg1;
+ (id)userTokenExpiredErrorWithMessage:(id)arg1;
+ (id)noSuchProviderError;
+ (id)providerAlreadyLinkedError;
+ (id)accountExistsWithDifferentCredentialErrorWithEmail:(id)arg1 updatedCredential:(id)arg2;
+ (id)invalidEmailErrorWithMessage:(id)arg1;
+ (id)invalidUserTokenErrorWithMessage:(id)arg1;
+ (id)requiresRecentLoginErrorWithMessage:(id)arg1;
+ (id)invalidCredentialErrorWithMessage:(id)arg1;
+ (id)customTokenMistmatchErrorWithMessage:(id)arg1;
+ (id)invalidCustomTokenErrorWithMessage:(id)arg1;
+ (id)tooManyRequestsErrorWithMessage:(id)arg1;
+ (id)wrongPasswordErrorWithMessage:(id)arg1;
+ (id)userDisabledErrorWithMessage:(id)arg1;
+ (id)emailAlreadyInUseErrorWithEmail:(id)arg1;
+ (id)RPCResponseDecodingErrorWithDeserializedResponse:(id)arg1 underlyingError:(id)arg2;
+ (id)unexpectedResponseWithDeserializedResponse:(id)arg1 underlyingError:(id)arg2;
+ (id)unexpectedResponseWithDeserializedResponse:(id)arg1;
+ (id)unexpectedResponseWithData:(id)arg1 underlyingError:(id)arg2;
+ (id)malformedJWTErrorWithToken:(id)arg1 underlyingError:(id)arg2;
+ (id)unexpectedErrorResponseWithDeserializedResponse:(id)arg1;
+ (id)unexpectedErrorResponseWithData:(id)arg1 underlyingError:(id)arg2;
+ (id)networkErrorWithUnderlyingError:(id)arg1;
+ (id)JSONSerializationErrorWithUnderlyingError:(id)arg1;
+ (id)JSONSerializationErrorForUnencodableType;
+ (id)RPCRequestEncodingErrorWithUnderlyingError:(id)arg1;
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
+ (id)errorWithCode:(long long)arg1;

@end

