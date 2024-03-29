//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FIRIdentityToolkitRequest.h"

#import "FIRAuthRPCRequest-Protocol.h"

@class NSString;

@interface FIRResetPasswordRequest : FIRIdentityToolkitRequest <FIRAuthRPCRequest>
{
    NSString *_oobCode;
    NSString *_updatedPassword;
}

@property(readonly, copy, nonatomic) NSString *updatedPassword; // @synthesize updatedPassword=_updatedPassword;
@property(readonly, copy, nonatomic) NSString *oobCode; // @synthesize oobCode=_oobCode;
- (void).cxx_destruct;
- (id)unencodedHTTPRequestBodyWithError:(id *)arg1;
- (id)initWithOobCode:(id)arg1 newPassword:(id)arg2 requestConfiguration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

