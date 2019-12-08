//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class FIRAdditionalUserInfo, FIRAuthCredential, FIRUser;

@interface FIRAuthDataResult : NSObject <NSSecureCoding>
{
    FIRUser *_user;
    FIRAdditionalUserInfo *_additionalUserInfo;
    FIRAuthCredential *_credential;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) FIRAuthCredential *credential; // @synthesize credential=_credential;
@property(readonly, nonatomic) FIRAdditionalUserInfo *additionalUserInfo; // @synthesize additionalUserInfo=_additionalUserInfo;
@property(readonly, nonatomic) FIRUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 additionalUserInfo:(id)arg2 credential:(id)arg3;
- (id)initWithUser:(id)arg1 additionalUserInfo:(id)arg2;

@end
