//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTMFetcherAuthorizationProtocol-Protocol.h"

@class NSString;
@protocol FIRAuthInterop, GTMSessionFetcherServiceProtocol;

@interface FIRStorageTokenAuthorizer : NSObject <GTMFetcherAuthorizationProtocol>
{
    NSString *_googleAppID;
    id <FIRAuthInterop> _auth;
    id <GTMSessionFetcherServiceProtocol> _fetcherService;
}

@property __weak id <GTMSessionFetcherServiceProtocol> fetcherService; // @synthesize fetcherService=_fetcherService;
- (void).cxx_destruct;
@property(readonly) NSString *userEmail;
- (_Bool)isAuthorizedRequest:(id)arg1;
- (_Bool)isAuthorizingRequest:(id)arg1;
- (void)stopAuthorizationForRequest:(id)arg1;
- (void)stopAuthorization;
- (void)authorizeRequest:(id)arg1 delegate:(id)arg2 didFinishSelector:(SEL)arg3;
- (id)initWithGoogleAppID:(id)arg1 fetcherService:(id)arg2 authProvider:(id)arg3;

// Remaining properties
@property(readonly) _Bool canAuthorize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property _Bool shouldAuthorizeAllRequests;
@property(readonly) Class superclass;

@end

