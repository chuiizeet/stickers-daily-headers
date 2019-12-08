//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FIRAuthRPCResponse-Protocol.h"

@class NSArray, NSString;

@interface FIRCreateAuthURIResponse : NSObject <FIRAuthRPCResponse>
{
    _Bool _registered;
    _Bool _forExistingProvider;
    NSString *_authURI;
    NSString *_providerID;
    NSArray *_allProviders;
    NSArray *_signinMethods;
}

@property(readonly, copy, nonatomic) NSArray *signinMethods; // @synthesize signinMethods=_signinMethods;
@property(readonly, copy, nonatomic) NSArray *allProviders; // @synthesize allProviders=_allProviders;
@property(readonly, nonatomic) _Bool forExistingProvider; // @synthesize forExistingProvider=_forExistingProvider;
@property(readonly, nonatomic) NSString *providerID; // @synthesize providerID=_providerID;
@property(readonly, nonatomic) _Bool registered; // @synthesize registered=_registered;
@property(readonly, nonatomic) NSString *authURI; // @synthesize authURI=_authURI;
- (void).cxx_destruct;
- (_Bool)setWithDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

