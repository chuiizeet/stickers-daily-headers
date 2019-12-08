//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADObserverCollection, NSString;
@protocol OS_dispatch_queue;

@interface GADNetworkLogger : NSObject
{
    GADObserverCollection *_observers;
    NSObject<OS_dispatch_queue> *_logQueue;
    long long _maxLineLength;
    NSString *_initialMessage;
    NSString *_logPrefix;
    NSString *_finalMessage;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)logEvent:(id)arg1 context:(id)arg2 userInfo:(id)arg3;
- (void)logMessage:(id)arg1;
- (void)observeEvent:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

