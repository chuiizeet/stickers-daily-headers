//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAdFunnelLoggingDelegate-Protocol.h"

@class NSSet, NSString;

@interface FBAdFunnelLogger : NSObject <FBAdFunnelLoggingDelegate>
{
    NSString *_token;
    NSSet *_eventList;
}

@property(copy, nonatomic) NSSet *eventList; // @synthesize eventList=_eventList;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)logAdCloseClickedWithData:(id)arg1;
- (void)logAdSelectionTimeoutWithData:(id)arg1;
- (void)logAdReportedWithData:(id)arg1 userJourney:(id)arg2;
- (void)logAdReportManagePrefsClickedWithData:(id)arg1;
- (void)logAdReportWhySeeingThisClickedWithData:(id)arg1;
- (void)logAdReportTappedWithData:(id)arg1;
- (void)logCTAClickedWithData:(id)arg1;
- (void)logAdResponceSuccessful:(id)arg1;
- (void)logVideoPlayPauseButtonTappedWithData:(id)arg1;
- (void)logVideoErrorWithData:(id)arg1 error:(id)arg2;
- (void)logVideoDidUnMuteWithData:(id)arg1;
- (void)logVideoDidStartPlayingWithData:(id)arg1;
- (void)logVideoDidSkipWithData:(id)arg1;
- (void)logVideoDidResumeWithData:(id)arg1;
- (void)logVideoDidPauseWithData:(id)arg1;
- (void)logVideoDidMuteWithData:(id)arg1;
- (void)logSoundButtonPressedWithData:(id)arg1;
- (void)logVideoDidFinishWithData:(id)arg1;
- (void)logLeaveAppWithData:(id)arg1;
- (void)logDeviceRotationWithData:(id)arg1 newSize:(struct CGSize)arg2;
- (void)logBackToAppWithData:(id)arg1;
- (void)logAdChoicesTappedWithData:(id)arg1;
- (id)addValue:(id)arg1 withKey:(id)arg2 toDictionary:(id)arg3;
- (id)orientationForSize:(struct CGSize)arg1;
- (id)uxFunnelDataWithEventType:(id)arg1;
- (void)logFunnelWithSubtype:(id)arg1 withData:(id)arg2;
- (id)getFunnelLoggingDataWithSubtype:(id)arg1 withExtraData:(id)arg2;
- (_Bool)shouldLogEventWithSubtype:(id)arg1;
- (id)initWithToken:(id)arg1 andEventList:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

