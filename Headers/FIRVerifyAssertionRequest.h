//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FIRIdentityToolkitRequest.h"

#import "FIRAuthRPCRequest-Protocol.h"

@class NSString;

@interface FIRVerifyAssertionRequest : FIRIdentityToolkitRequest <FIRAuthRPCRequest>
{
    _Bool _returnSecureToken;
    _Bool _returnIDPCredential;
    _Bool _autoCreate;
    NSString *_requestURI;
    NSString *_pendingToken;
    NSString *_accessToken;
    NSString *_providerID;
    NSString *_providerAccessToken;
    NSString *_providerIDToken;
    NSString *_sessionID;
    NSString *_providerOAuthTokenSecret;
    NSString *_inputEmail;
}

@property(nonatomic) _Bool autoCreate; // @synthesize autoCreate=_autoCreate;
@property(copy, nonatomic) NSString *inputEmail; // @synthesize inputEmail=_inputEmail;
@property(copy, nonatomic) NSString *providerOAuthTokenSecret; // @synthesize providerOAuthTokenSecret=_providerOAuthTokenSecret;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) _Bool returnIDPCredential; // @synthesize returnIDPCredential=_returnIDPCredential;
@property(copy, nonatomic) NSString *providerIDToken; // @synthesize providerIDToken=_providerIDToken;
@property(copy, nonatomic) NSString *providerAccessToken; // @synthesize providerAccessToken=_providerAccessToken;
@property(readonly, copy, nonatomic) NSString *providerID; // @synthesize providerID=_providerID;
@property(nonatomic) _Bool returnSecureToken; // @synthesize returnSecureToken=_returnSecureToken;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(copy, nonatomic) NSString *pendingToken; // @synthesize pendingToken=_pendingToken;
@property(copy, nonatomic) NSString *requestURI; // @synthesize requestURI=_requestURI;
- (void).cxx_destruct;
- (id)unencodedHTTPRequestBodyWithError:(id *)arg1;
- (id)initWithProviderID:(id)arg1 requestConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

