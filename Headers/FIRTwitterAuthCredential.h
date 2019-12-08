//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FIRAuthCredential.h"

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface FIRTwitterAuthCredential : FIRAuthCredential <NSSecureCoding>
{
    NSString *_token;
    NSString *_secret;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *secret; // @synthesize secret=_secret;
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)prepareVerifyAssertionRequest:(id)arg1;
- (id)initWithToken:(id)arg1 secret:(id)arg2;
- (id)initWithProvider:(id)arg1;

@end

