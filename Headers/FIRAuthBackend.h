//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FIRAuthBackend : NSObject
{
}

+ (id)authUserAgent;
+ (void)resetPassword:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)verifyClient:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)verifyPhoneNumber:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)sendVerificationCode:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)signInWithGameCenter:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)deleteAccount:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)signUpNewUser:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)getOOBConfirmationCode:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)secureToken:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)emailLinkSignin:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)verifyPassword:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)verifyCustomToken:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)verifyAssertion:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)setAccountInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)getProjectConfig:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)getAccountInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)createAuthURI:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)setDefaultBackendImplementationWithRPCIssuer:(id)arg1;
+ (void)setBackendImplementation:(id)arg1;
+ (id)implementation;

@end

