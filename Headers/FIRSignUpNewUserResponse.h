//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FIRAuthRPCResponse-Protocol.h"

@class NSDate, NSString;

@interface FIRSignUpNewUserResponse : NSObject <FIRAuthRPCResponse>
{
    NSString *_IDToken;
    NSDate *_approximateExpirationDate;
    NSString *_refreshToken;
}

@property(readonly, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(readonly, copy, nonatomic) NSDate *approximateExpirationDate; // @synthesize approximateExpirationDate=_approximateExpirationDate;
@property(readonly, nonatomic) NSString *IDToken; // @synthesize IDToken=_IDToken;
- (void).cxx_destruct;
- (_Bool)setWithDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

