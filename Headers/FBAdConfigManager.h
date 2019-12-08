//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString, NSURL;

@interface FBAdConfigManager : NSObject
{
    double _adTapMargin;
    NSURL *_configurationFileURL;
    NSDictionary *_configuration;
}

+ (id)sharedManagerWithAsyncLoad:(_Bool)arg1;
+ (id)sharedManager;
+ (void)initialize;
@property(copy) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSURL *configurationFileURL; // @synthesize configurationFileURL=_configurationFileURL;
@property(readonly, nonatomic) double adTapMargin; // @synthesize adTapMargin=_adTapMargin;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long cacheDebugEventsSamplingRate;
@property(readonly, copy, nonatomic) NSArray *uxFunnelLoggingEvents;
@property(readonly, nonatomic) long long uxFunnelLoggingSamplingRate;
@property(readonly, nonatomic) _Bool clickToPlayShouldFireImpressionOnVideoStart;
@property(readonly, nonatomic) _Bool woNativeSignalsJailbrokenSignalEnabled;
@property(readonly, nonatomic) _Bool woNativeSignalsCaptiveSignalEnabled;
@property(readonly, nonatomic) _Bool woNativeSignalsSimulatorSignalEnabled;
@property(readonly, nonatomic) _Bool woNativeSignalsScreenSignalEnabled;
@property(readonly, nonatomic) _Bool woNativeSignalsProxySignalEnabled;
@property(readonly, nonatomic) _Bool woNativeSignalsProcessSignalEnabled;
@property(readonly, nonatomic) _Bool woNativeSignalsOtherUiSignalEnabled;
@property(readonly, nonatomic) _Bool woNativeSignalsMotionSignalEnabled;
@property(readonly, nonatomic) _Bool woNativeSignalsLocationSignalEnabled;
@property(readonly, nonatomic) _Bool woNativeSignalsLocalAuthSignalEnabled;
@property(readonly, nonatomic) _Bool woNativeSignalsCameraSignalEnabled;
@property(readonly, nonatomic) _Bool woNativeSignalsBuildSignalEnabled;
@property(readonly, nonatomic) _Bool woNativeSignalsBootSignalEnabled;
@property(readonly, nonatomic) _Bool woNativeSignalsTouchSignalEnabled;
@property(readonly, nonatomic) _Bool woNativeSignalsReachabilitySignalEnabled;
@property(readonly, nonatomic) _Bool woNativeSignalsNetworkSignalEnabled;
@property(readonly, nonatomic) _Bool woNativeSignalsAudioSignalEnabled;
@property(readonly, nonatomic) _Bool woNativeSignalsDeviceSignalEnabled;
@property(readonly, nonatomic) _Bool woNativeSignalsTelephonySignalEnabled;
@property(readonly, nonatomic) _Bool woNativeSignalsApplicationInfoSignalEnabled;
@property(readonly, nonatomic) _Bool woNativeSignalsBundleSignalEnabled;
@property(readonly, nonatomic) _Bool woNativeSignalsBatterySignalEnabled;
@property(readonly, nonatomic) _Bool woIntervalModeNoStartKillSwitch;
@property(readonly, nonatomic) long long getWOIntervalModeForegroundInterval;
@property(readonly, nonatomic) long long getWOIntervalModeBackgroundInterval;
@property(readonly, nonatomic) _Bool woNativeSignalsEnabled;
@property(readonly, nonatomic) long long getWONetworkSignalLargePayloadSamplingRate;
@property(readonly, copy, nonatomic) NSString *woNetworkSignalUrl;
@property(readonly, nonatomic) long long getWONetworkSignalSamplingRate;
@property(readonly, nonatomic) long long getWONetworkSignalLargePayloadSize;
@property(readonly, nonatomic) _Bool isWONetworkSignalLargePayloadEnabled;
@property(readonly, nonatomic) _Bool isWONetworkSignalEnabled;
@property(readonly, nonatomic, getter=shouldExplicitlyWaitForVideoToStartPlayingInNativeAd) _Bool explicitlyWaitForVideoToStartPlayingInNativeAd;
@property(readonly, nonatomic) _Bool shouldUseCacheForPlayableMarkup;
@property(readonly, nonatomic, getter=shouldUseVideoWrapperCacheFix) _Bool useVideoWrapperCacheFix;
@property(readonly, nonatomic) unsigned long long onDiskCacheSizeLimit;
@property(readonly, nonatomic) unsigned long long inMemoryCacheSizeLimit;
@property(readonly, nonatomic) _Bool shouldSendHashedUserPIIData;
@property(readonly, nonatomic) _Bool shouldSendFBLoginASID;
@property(readonly, nonatomic) _Bool useNativeDispatchUserAgentGenerating;
@property(readonly, nonatomic) _Bool blurWhitespaceInVideoRenderer;
@property(readonly, nonatomic) _Bool useNewRewardedVideoDesign;
@property(readonly, nonatomic) _Bool useNewInterstitialVideoDesign;
@property(readonly, nonatomic) _Bool useRedesignedBannerTemplates;
@property(readonly, nonatomic) _Bool useRedesignedTemplates;
@property(readonly, nonatomic) _Bool useIOSurfacePlayerLayer;
@property(readonly, nonatomic) long long nativeCarouselCompactThreshold;
@property(readonly, nonatomic) _Bool showCTAInRVPreEndCards;
@property(readonly, nonatomic) _Bool showToolbarInRVForMarkupEndCard;
@property(readonly, nonatomic) _Bool sendFrameworkType;
@property(readonly, nonatomic) _Bool useNativeNonFullscreenXoutFlow;
@property(readonly, nonatomic) _Bool useSimpleNativeScrollView;
@property(readonly, nonatomic, getter=isLoadAdOldBehaviourDisabled) _Bool loadAdOldBehaviourDisabled;
@property(readonly, nonatomic, getter=isInlineAdReportingFlowEnabled) _Bool inlineAdReportingFlowEnabled;
@property(readonly, nonatomic) _Bool shouldBlurImages;
@property(readonly, nonatomic, getter=shouldWaitForMarkuptImpressionEventBeforeLogging) _Bool waitForMarkuptImpressionEventBeforeLogging;
@property(readonly, nonatomic, getter=isWatchAndInstallEnabled) _Bool watchAndInstallEnabled;
@property(readonly, nonatomic) long long additionalDebugLoggingPercentage;
@property(readonly, nonatomic) long long additionalDebugBlackListPercentage;
@property(readonly, nonatomic) NSSet *additionalDebugBlackList;
@property(readonly, nonatomic, getter=isDebugLoggingEnabled) _Bool debugLoggingEnabled;
@property(readonly, nonatomic) _Bool useArrowsInsteadOfXAsSkipButton;
@property(readonly, nonatomic) _Bool shouldPurgeEventsAndTokensOn413Response;
@property(readonly, nonatomic) _Bool useStoreURL;
@property(readonly, nonatomic, getter=isDebugOverlayEnabled) _Bool debugOverlayEnabled;
@property(readonly, nonatomic, getter=isImpressionMissTrackingEnabled) _Bool impressionMissTrackingEnabled;
@property(readonly, nonatomic) _Bool useCachedImageContextForOpenGLRenderer;
@property(readonly, nonatomic) _Bool useCachedImageContextForMetalRenderer;
@property(readonly, nonatomic) _Bool useCachedImageContextForSoftwareRenderer;
@property(readonly, nonatomic, getter=isInAppAppStoreDisabled) _Bool inAppAppStoreDisabled;
@property(readonly, nonatomic, getter=isRVMetadataEnabled) _Bool rvMetadataEnabled;
@property(readonly, nonatomic, getter=isRVPlayPauseButtonEnabled) _Bool rvPlayPauseButtonEnabled;
@property(readonly, copy, nonatomic) NSString *loggingEndpointPrefix;
@property(readonly, copy, nonatomic) NSString *rvAutoRotate;
@property(readonly, nonatomic) long long visibleAreaPercentage;
@property(readonly, nonatomic, getter=isVisibleAreaCheckEnabled) _Bool visibleAreaCheckEnabled;
@property(readonly, nonatomic, getter=isAdClickabilityRestrictedUntilImpression) _Bool adClickabilityRestrictedUntilImpression;
@property(readonly, nonatomic) double minimumElapsedTimeAfterImpression;
@property(readonly, nonatomic) long long adTapMarginPercentage;
@property(readonly, nonatomic) long long unifiedLoggingEventLimit;
@property(readonly, nonatomic) double unifiedLoggingImmediateDelay;
@property(readonly, nonatomic, getter=isMetalImageRendererEnabled) _Bool metalImageRendererEnabled;
@property(readonly, nonatomic, getter=isFNFOffThreadRenderingEnabled) _Bool fnfOffThreadRenderingEnabled;
@property(readonly, nonatomic, getter=isFNFEnabled) _Bool fnfEnabled;
@property(readonly, nonatomic, getter=isAdClickguardEnabled) _Bool adClickguardEnabled;
@property(readonly, nonatomic, getter=isAdTwoStepConfirmationEnabled) _Bool adTwoStepConfirmationEnabled;
@property(readonly, copy, nonatomic) NSString *adTwoStepLocalizedCancelButtonText;
@property(readonly, copy, nonatomic) NSString *adTwoStepLocalizedConfirmButtonText;
@property(readonly, copy, nonatomic) NSString *adTwoStepConfirmationLocalizedBody;
@property(readonly, copy, nonatomic) NSString *adTwoStepConfirmationLocalizedTitle;
@property(readonly, nonatomic) double adClickguardThresholdInterval;
- (id)accidental_clicks_config;
- (id)dictionaryForKey:(id)arg1 defaultReturnValue:(id)arg2;
- (id)arrayForKey:(id)arg1 defaultReturnValue:(id)arg2;
- (id)deserializeArrayFromString:(id)arg1;
- (id)stringForKey:(id)arg1 defaultReturnValue:(id)arg2;
- (double)timeIntervalforKey:(id)arg1 defaultReturnValue:(double)arg2;
- (unsigned long long)unsignedIntegerForKey:(id)arg1 defaultReturnValue:(unsigned long long)arg2;
- (long long)integerForKey:(id)arg1 defaultReturnValue:(long long)arg2;
- (_Bool)boolForKey:(id)arg1 defaultReturnValue:(_Bool)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)deleteConfiguration;
- (id)saveConfiguration;
- (id)saveConfiguration:(_Bool)arg1;
- (id)loadConfigurationFromPropertyList:(id)arg1;
- (id)loadConfigurationFromDictionary:(id)arg1;
- (id)loadConfigurationFromStorage;
- (id)loadConfigurationFromStorage:(_Bool)arg1;
- (void)configurationDidUpdate;
- (id)initWithAsyncLoad:(_Bool)arg1;
- (id)init;

@end

