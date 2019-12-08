//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface FIRAuthAppCredential : NSObject <NSSecureCoding>
{
    NSString *_receipt;
    NSString *_secret;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *secret; // @synthesize secret=_secret;
@property(readonly, nonatomic) NSString *receipt; // @synthesize receipt=_receipt;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReceipt:(id)arg1 secret:(id)arg2;

@end

