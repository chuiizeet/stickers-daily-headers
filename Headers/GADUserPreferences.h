//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADObserverCollection, NSNumber;
@protocol OS_dispatch_queue;

@interface GADUserPreferences : NSObject
{
    NSNumber *_NPA;
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADObserverCollection *_observers;
    _Bool _adRequested;
    NSNumber *_lastRequestLevelTFCD;
    NSNumber *_lastRequestLevelNPA;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *NPA;
- (void)updateLastRequestParameters:(id)arg1;
- (void)updateNPA;
- (id)currentNPAValue;
- (void)adRequested;
- (id)init;

@end

