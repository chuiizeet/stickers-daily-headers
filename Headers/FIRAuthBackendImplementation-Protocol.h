//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FIRCreateAuthURIRequest, FIRDeleteAccountRequest, FIREmailLinkSignInRequest, FIRGetAccountInfoRequest, FIRGetOOBConfirmationCodeRequest, FIRGetProjectConfigRequest, FIRResetPasswordRequest, FIRSecureTokenRequest, FIRSendVerificationCodeRequest, FIRSetAccountInfoRequest, FIRSignInWithGameCenterRequest, FIRSignUpNewUserRequest, FIRVerifyAssertionRequest, FIRVerifyClientRequest, FIRVerifyCustomTokenRequest, FIRVerifyPasswordRequest, FIRVerifyPhoneNumberRequest;

@protocol FIRAuthBackendImplementation <NSObject>
- (void)resetPassword:(FIRResetPasswordRequest *)arg1 callback:(void (^)(FIRResetPasswordResponse *, NSError *))arg2;
- (void)signInWithGameCenter:(FIRSignInWithGameCenterRequest *)arg1 callback:(void (^)(FIRSignInWithGameCenterResponse *, NSError *))arg2;
- (void)verifyClient:(FIRVerifyClientRequest *)arg1 callback:(void (^)(FIRVerifyClientResponse *, NSError *))arg2;
- (void)verifyPhoneNumber:(FIRVerifyPhoneNumberRequest *)arg1 callback:(void (^)(FIRVerifyPhoneNumberResponse *, NSError *))arg2;
- (void)sendVerificationCode:(FIRSendVerificationCodeRequest *)arg1 callback:(void (^)(FIRSendVerificationCodeResponse *, NSError *))arg2;
- (void)deleteAccount:(FIRDeleteAccountRequest *)arg1 callback:(void (^)(NSError *))arg2;
- (void)signUpNewUser:(FIRSignUpNewUserRequest *)arg1 callback:(void (^)(FIRSignUpNewUserResponse *, NSError *))arg2;
- (void)getOOBConfirmationCode:(FIRGetOOBConfirmationCodeRequest *)arg1 callback:(void (^)(FIRGetOOBConfirmationCodeResponse *, NSError *))arg2;
- (void)secureToken:(FIRSecureTokenRequest *)arg1 callback:(void (^)(FIRSecureTokenResponse *, NSError *))arg2;
- (void)emailLinkSignin:(FIREmailLinkSignInRequest *)arg1 callback:(void (^)(FIREmailLinkSignInResponse *, NSError *))arg2;
- (void)verifyPassword:(FIRVerifyPasswordRequest *)arg1 callback:(void (^)(FIRVerifyPasswordResponse *, NSError *))arg2;
- (void)verifyCustomToken:(FIRVerifyCustomTokenRequest *)arg1 callback:(void (^)(FIRVerifyCustomTokenResponse *, NSError *))arg2;
- (void)verifyAssertion:(FIRVerifyAssertionRequest *)arg1 callback:(void (^)(FIRVerifyAssertionResponse *, NSError *))arg2;
- (void)setAccountInfo:(FIRSetAccountInfoRequest *)arg1 callback:(void (^)(FIRSetAccountInfoResponse *, NSError *))arg2;
- (void)getProjectConfig:(FIRGetProjectConfigRequest *)arg1 callback:(void (^)(FIRGetProjectConfigResponse *, NSError *))arg2;
- (void)getAccountInfo:(FIRGetAccountInfoRequest *)arg1 callback:(void (^)(FIRGetAccountInfoResponse *, NSError *))arg2;
- (void)createAuthURI:(FIRCreateAuthURIRequest *)arg1 callback:(void (^)(FIRCreateAuthURIResponse *, NSError *))arg2;
@end

