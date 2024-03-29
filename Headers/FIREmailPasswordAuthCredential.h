//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FIRAuthCredential.h"

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface FIREmailPasswordAuthCredential : FIRAuthCredential <NSSecureCoding>
{
    NSString *_email;
    NSString *_password;
    NSString *_link;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *link; // @synthesize link=_link;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)prepareVerifyAssertionRequest:(id)arg1;
- (id)initWithEmail:(id)arg1 link:(id)arg2;
- (id)initWithEmail:(id)arg1 password:(id)arg2;
- (id)initWithProvider:(id)arg1;

@end

