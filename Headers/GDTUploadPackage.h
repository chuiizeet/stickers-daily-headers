//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class GDTClock, GDTStorage, NSSet, NSTimer;
@protocol NSSecureCoding><GDTUploadPackageProtocol;

@interface GDTUploadPackage : NSObject <NSSecureCoding>
{
    _Bool _isDelivered;
    _Bool _isHandled;
    NSTimer *_expirationTimer;
    NSSet *_events;
    GDTClock *_deliverByTime;
    long long _target;
    GDTStorage *_storage;
    id <NSSecureCoding><GDTUploadPackageProtocol> _handler;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) id <NSSecureCoding><GDTUploadPackageProtocol> handler; // @synthesize handler=_handler;
@property(retain, nonatomic) GDTStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) long long target; // @synthesize target=_target;
@property(retain, nonatomic) GDTClock *deliverByTime; // @synthesize deliverByTime=_deliverByTime;
@property(retain, nonatomic) NSSet *events; // @synthesize events=_events;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)checkIfPackageIsExpired:(id)arg1;
- (void)retryDeliveryInTheFuture;
- (void)completeDelivery;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copy;
- (id)initWithTarget:(long long)arg1;

@end

