//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTLifecycleProtocol-Protocol.h"
#import "GDTUploadPackageProtocol-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class GDTRegistrar, GDTStorage, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GDTUploadCoordinator : NSObject <NSSecureCoding, GDTLifecycleProtocol, GDTUploadPackageProtocol>
{
    _Bool _runningInBackground;
    NSObject<OS_dispatch_queue> *_coordinationQueue;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _timerInterval;
    unsigned long long _timerLeeway;
    NSMutableDictionary *_targetToInFlightPackages;
    GDTStorage *_storage;
    GDTRegistrar *_registrar;
}

+ (_Bool)supportsSecureCoding;
+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool runningInBackground; // @synthesize runningInBackground=_runningInBackground;
@property(retain, nonatomic) GDTRegistrar *registrar; // @synthesize registrar=_registrar;
@property(retain, nonatomic) GDTStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) NSMutableDictionary *targetToInFlightPackages; // @synthesize targetToInFlightPackages=_targetToInFlightPackages;
@property(readonly, nonatomic) unsigned long long timerLeeway; // @synthesize timerLeeway=_timerLeeway;
@property(readonly, nonatomic) unsigned long long timerInterval; // @synthesize timerInterval=_timerInterval;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *coordinationQueue; // @synthesize coordinationQueue=_coordinationQueue;
- (void).cxx_destruct;
- (void)packageExpired:(id)arg1;
- (void)packageDelivered:(id)arg1 successful:(_Bool)arg2;
- (void)appWillTerminate:(id)arg1;
- (void)appWillBackground:(id)arg1;
- (void)appWillForeground:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)uploadConditions;
- (void)uploadTargets:(id)arg1 conditions:(long long)arg2;
- (void)stopTimer;
- (void)startTimer;
- (void)forceUploadForTarget:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

