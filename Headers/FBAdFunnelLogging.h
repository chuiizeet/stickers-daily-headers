//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface FBAdFunnelLogging : NSObject
{
    NSMutableDictionary *_funnelLoggersForToken;
    NSDictionary *_eventMatching;
}

+ (id)sharedFunnelLogger;
@property(copy, nonatomic) NSDictionary *eventMatching; // @synthesize eventMatching=_eventMatching;
@property(retain, nonatomic) NSMutableDictionary *funnelLoggersForToken; // @synthesize funnelLoggersForToken=_funnelLoggersForToken;
- (void).cxx_destruct;
- (id)funnelEventSubtypeForAdEvent:(id)arg1;
- (void)createLoggerAndLogAdRequestSuccessForAdCandidate:(id)arg1;
- (id)uxFunnelDataWithEventType:(id)arg1 forToken:(id)arg2;
- (void)logEventFunnelOfSubtype:(id)arg1 withToken:(id)arg2 withExtraData:(id)arg3;
- (void)logUXFunnelEventOfSubtype:(id)arg1 withToken:(id)arg2 withExtraData:(id)arg3;
- (void)logFunnelEventOfType:(id)arg1 withSubtype:(id)arg2 withToken:(id)arg3 withExtraData:(id)arg4;
- (id)createFunnelLoggerForToken:(id)arg1 andEventList:(id)arg2;
- (id)funnelLoggerForToken:(id)arg1;
- (id)init;

@end

