//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class FIRAuthRequestConfiguration, FIRAuthSerialTaskQueue, NSDate, NSString;

@interface FIRSecureTokenService : NSObject <NSSecureCoding>
{
    FIRAuthSerialTaskQueue *_taskQueue;
    NSString *_authorizationCode;
    NSString *_accessToken;
    FIRAuthRequestConfiguration *_requestConfiguration;
    NSString *_refreshToken;
    NSDate *_accessTokenExpirationDate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDate *accessTokenExpirationDate; // @synthesize accessTokenExpirationDate=_accessTokenExpirationDate;
@property(readonly, copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(retain, nonatomic) FIRAuthRequestConfiguration *requestConfiguration; // @synthesize requestConfiguration=_requestConfiguration;
- (void).cxx_destruct;
- (_Bool)hasValidAccessToken;
- (void)requestAccessToken:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *rawAccessToken;
- (void)fetchAccessTokenForcingRefresh:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithRequestConfiguration:(id)arg1 accessToken:(id)arg2 accessTokenExpirationDate:(id)arg3 refreshToken:(id)arg4;
- (id)initWithRequestConfiguration:(id)arg1 authorizationCode:(id)arg2;
- (id)init;

@end

