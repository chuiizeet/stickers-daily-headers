//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAdVideoRendererViewDelegate-Protocol.h"
#import "FBInterstitialAdToolbarViewDelegate-Protocol.h"

@class FBAdAudioMuteButton, FBAdDetailsAndCTAButtonContainerView, FBAdTimer, FBAdVideoPlayPauseButton, FBAdVideoProgressBar, FBAdVideoRendererView, FBGradientView, FBInterstitialAdToolbarView, FBNativeAdDataModel, NSString, UIViewController;
@protocol FBAdFunnelLoggingDelegate, FBAdVideoAdViewDelegate;

@interface FBAdVideoAdView : UIView <FBAdVideoRendererViewDelegate, FBInterstitialAdToolbarViewDelegate>
{
    _Bool _adValid;
    _Bool _canPlayVideo;
    _Bool _animating;
    _Bool _paused;
    _Bool _endVideoDetailsAnimated;
    _Bool _hasToldDelegateThatWereSkippable;
    _Bool _isUsingNewLayout;
    _Bool _showCta;
    _Bool _appInstall;
    _Bool _isExpanded;
    _Bool _videoWasPlayingWhenAppActive;
    FBAdDetailsAndCTAButtonContainerView *_adDetailsAndCTAButtonContainerView;
    UIViewController *_rootViewController;
    id <FBAdVideoAdViewDelegate> _delegate;
    FBNativeAdDataModel *_adDataModel;
    CDUnknownBlockType _onInfo;
    FBAdVideoRendererView *_videoRendererView;
    FBInterstitialAdToolbarView *_toolbarView;
    id <FBAdFunnelLoggingDelegate> _funnelLoggingDelegate;
    id _videoProgressTimingObserver;
    FBAdTimer *_toggleViewsTimer;
    FBAdVideoPlayPauseButton *_playPauseButton;
    FBAdVideoProgressBar *_progressBar;
    FBGradientView *_gradientView;
    FBGradientView *_toolbarGradientView;
    FBAdAudioMuteButton *_audioMuteButton;
    UIView *_waitingToast;
    CDStruct_1b6d18a9 _forcedViewTime;
}

+ (CDStruct_1b6d18a9)animateAdDetailsEndVideo;
@property(nonatomic) _Bool videoWasPlayingWhenAppActive; // @synthesize videoWasPlayingWhenAppActive=_videoWasPlayingWhenAppActive;
@property(retain, nonatomic) UIView *waitingToast; // @synthesize waitingToast=_waitingToast;
@property(nonatomic) __weak FBAdAudioMuteButton *audioMuteButton; // @synthesize audioMuteButton=_audioMuteButton;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(readonly, nonatomic, getter=isAppInstall) _Bool appInstall; // @synthesize appInstall=_appInstall;
@property(nonatomic) __weak FBGradientView *toolbarGradientView; // @synthesize toolbarGradientView=_toolbarGradientView;
@property(nonatomic) _Bool showCta; // @synthesize showCta=_showCta;
@property(nonatomic) _Bool isUsingNewLayout; // @synthesize isUsingNewLayout=_isUsingNewLayout;
@property(nonatomic) _Bool hasToldDelegateThatWereSkippable; // @synthesize hasToldDelegateThatWereSkippable=_hasToldDelegateThatWereSkippable;
@property(nonatomic) _Bool endVideoDetailsAnimated; // @synthesize endVideoDetailsAnimated=_endVideoDetailsAnimated;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) __weak FBGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(nonatomic) CDStruct_1b6d18a9 forcedViewTime; // @synthesize forcedViewTime=_forcedViewTime;
@property(nonatomic) __weak FBAdVideoProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(nonatomic) __weak FBAdVideoPlayPauseButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(retain, nonatomic) FBAdTimer *toggleViewsTimer; // @synthesize toggleViewsTimer=_toggleViewsTimer;
@property(retain, nonatomic) id videoProgressTimingObserver; // @synthesize videoProgressTimingObserver=_videoProgressTimingObserver;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) __weak id <FBAdFunnelLoggingDelegate> funnelLoggingDelegate; // @synthesize funnelLoggingDelegate=_funnelLoggingDelegate;
@property(nonatomic) __weak FBInterstitialAdToolbarView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(nonatomic) __weak FBAdVideoRendererView *videoRendererView; // @synthesize videoRendererView=_videoRendererView;
@property(copy, nonatomic) CDUnknownBlockType onInfo; // @synthesize onInfo=_onInfo;
@property(readonly, nonatomic) FBNativeAdDataModel *adDataModel; // @synthesize adDataModel=_adDataModel;
@property(nonatomic) __weak id <FBAdVideoAdViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) _Bool canPlayVideo; // @synthesize canPlayVideo=_canPlayVideo;
@property(nonatomic) __weak FBAdDetailsAndCTAButtonContainerView *adDetailsAndCTAButtonContainerView; // @synthesize adDetailsAndCTAButtonContainerView=_adDetailsAndCTAButtonContainerView;
- (void).cxx_destruct;
- (void)funnelLogBackToApp;
- (void)funnelLogLeaveApp;
- (void)funnelLogAdInfoTapped;
- (void)funnelLogAdChoicesTapped;
- (void)funnelLogVideoSkipped;
- (void)funnelLogUnMute;
- (void)funnelLogMute;
- (void)funnelLogMuteButtonTapped;
- (void)funnelLogPlayPauseButtonTapped;
- (id)videoDataForFunnelLogging;
- (void)resumeVideo;
- (void)pauseVideoIfNeeded;
- (void)interstitialAdToolbarDidTapAdInfo:(id)arg1;
- (void)interstitialAdToolbarDidCloseAdChoices:(id)arg1;
- (void)interstitialAdToolbarDidTapAdChoices:(id)arg1;
- (void)interstitialAdToolbarDidClose:(id)arg1 withTouchData:(id)arg2;
- (void)videoView:(id)arg1 didFailWithError:(id)arg2;
- (void)videoViewDidEnd:(id)arg1;
- (void)videoViewDidLoad:(id)arg1;
- (id)viewControllerForPresentingModalView;
- (void)toggleAllViews;
- (id)viewsToAnimate;
- (void)animateShowViewsForNewLayout;
- (void)animateHideViewsForNewLayout;
- (void)animateShowViews;
- (void)animateHideViews;
- (void)scheduleHideViews;
- (void)cancelAnimateViews;
- (void)backgroundTapped:(id)arg1;
- (void)animateAdDetailsOnVideoEnd:(CDStruct_1b6d18a9)arg1;
- (void)dispatchVideoEndedWithError:(id)arg1;
- (void)prepareViewToBecomeActive;
- (void)prepareViewToBecomeInactive;
- (void)setupNotifications;
- (void)tellDelegateThatWeAreSkippableIfWeAreAndHaveNotYet;
- (void)updateToastWithCurrentTime:(CDStruct_1b6d18a9)arg1;
- (void)showWaitingToast;
- (void)didTouchCTA:(id)arg1 withEvent:(id)arg2;
- (CDStruct_1b6d18a9)timeUntilSkipOrEnd;
- (_Bool)hasForcedViewTime;
@property(readonly, nonatomic) _Bool videoIsDoneOrSkippable;
- (void)cleanLayout;
- (void)handleAudioMuteButtonTouch:(id)arg1;
- (void)skipVideo;
- (void)removeVideoRendererProgressTimingObserver;
- (void)playPauseButtonTapped:(id)arg1;
- (void)addAudioMuteButton;
- (void)addPlayPauseButton;
- (void)addGradientView;
- (void)addToolbarView;
- (void)addToolbarGradientView;
- (void)addProgressBar;
- (void)addAdDetailsViewAndCTAContainerView;
- (void)clearSubviews;
- (void)layoutSubviews;
- (void)dealloc;
@property(readonly, nonatomic, getter=isAdValid) _Bool adValid;
- (unsigned long long)wantedAdDetailsAndCTAButtonContainerViewButtonStyle;
- (double)progressBarHeight;
- (void)updateView:(_Bool)arg1;
- (void)setupViewAndStartVideo:(_Bool)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime;
- (void)addVideoRendererProgressTimingObserver;
- (id)initWithPlacementID:(id)arg1 adDataModel:(id)arg2 placementDefinition:(id)arg3 videoReadyToDisplayBlock:(CDUnknownBlockType)arg4 useNewLayout:(_Bool)arg5 showCta:(_Bool)arg6 forcedViewTime:(CDStruct_1b6d18a9)arg7 rootViewController:(id)arg8;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

