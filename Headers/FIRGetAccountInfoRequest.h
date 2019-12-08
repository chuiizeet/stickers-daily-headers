//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FIRIdentityToolkitRequest.h"

#import "FIRAuthRPCRequest-Protocol.h"

@class NSString;

@interface FIRGetAccountInfoRequest : FIRIdentityToolkitRequest <FIRAuthRPCRequest>
{
    NSString *_accessToken;
}

@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (id)unencodedHTTPRequestBodyWithError:(id *)arg1;
- (id)initWithAccessToken:(id)arg1 requestConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

