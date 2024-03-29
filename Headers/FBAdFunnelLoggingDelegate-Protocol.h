//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol FBAdFunnelLoggingDelegate <NSObject>
- (void)logAdSelectionTimeoutWithData:(NSDictionary *)arg1;
- (void)logAdResponceSuccessful:(NSDictionary *)arg1;
- (void)logAdReportedWithData:(NSDictionary *)arg1 userJourney:(NSArray *)arg2;
- (void)logAdReportManagePrefsClickedWithData:(NSDictionary *)arg1;
- (void)logAdReportWhySeeingThisClickedWithData:(NSDictionary *)arg1;
- (void)logAdReportTappedWithData:(NSDictionary *)arg1;
- (void)logAdCloseClickedWithData:(NSDictionary *)arg1;
- (void)logCTAClickedWithData:(NSDictionary *)arg1;
- (void)logDeviceRotationWithData:(NSDictionary *)arg1 newSize:(struct CGSize)arg2;
- (void)logAdChoicesTappedWithData:(NSDictionary *)arg1;
- (void)logBackToAppWithData:(NSDictionary *)arg1;
- (void)logLeaveAppWithData:(NSDictionary *)arg1;
- (void)logVideoDidSkipWithData:(NSDictionary *)arg1;
- (void)logVideoErrorWithData:(NSDictionary *)arg1 error:(NSString *)arg2;
- (void)logVideoDidUnMuteWithData:(NSDictionary *)arg1;
- (void)logVideoDidMuteWithData:(NSDictionary *)arg1;
- (void)logSoundButtonPressedWithData:(NSDictionary *)arg1;
- (void)logVideoDidFinishWithData:(NSDictionary *)arg1;
- (void)logVideoPlayPauseButtonTappedWithData:(NSDictionary *)arg1;
- (void)logVideoDidResumeWithData:(NSDictionary *)arg1;
- (void)logVideoDidPauseWithData:(NSDictionary *)arg1;
- (void)logVideoDidStartPlayingWithData:(NSDictionary *)arg1;
@end

