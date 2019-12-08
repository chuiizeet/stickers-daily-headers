//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTLifecycleProtocol-Protocol.h"

@class GDTStorage, NSString;
@protocol OS_dispatch_queue;

@interface GDTTransformer : NSObject <GDTLifecycleProtocol>
{
    _Bool _runningInBackground;
    NSObject<OS_dispatch_queue> *_eventWritingQueue;
    GDTStorage *_storageInstance;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool runningInBackground; // @synthesize runningInBackground=_runningInBackground;
@property(retain, nonatomic) GDTStorage *storageInstance; // @synthesize storageInstance=_storageInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *eventWritingQueue; // @synthesize eventWritingQueue=_eventWritingQueue;
- (void).cxx_destruct;
- (void)appWillTerminate:(id)arg1;
- (void)appWillBackground:(id)arg1;
- (void)appWillForeground:(id)arg1;
- (void)transformEvent:(id)arg1 withTransformers:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
