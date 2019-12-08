//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADMAdNetworkAdapter-Protocol.h"

@class GADFBBannerAd, GADFBInterstitialAd, GADFBNativeAd, GADFBUnifiedNativeAd, NSString;
@protocol GADMAdNetworkConnector;

@interface GADMAdapterFacebook : NSObject <GADMAdNetworkAdapter>
{
    id <GADMAdNetworkConnector> _connector;
    GADFBBannerAd *_bannerAd;
    GADFBInterstitialAd *_interstitialAd;
    GADFBNativeAd *_nativeAd;
    GADFBUnifiedNativeAd *_unifiedNativeAd;
}

+ (Class)mainAdapterClass;
+ (Class)networkExtrasClass;
+ (id)adapterVersion;
- (void).cxx_destruct;
- (_Bool)handlesUserImpressions;
- (_Bool)handlesUserClicks;
- (_Bool)isBannerAnimationOK:(long long)arg1;
- (void)stopBeingDelegate;
- (void)getNativeAdWithAdTypes:(id)arg1 options:(id)arg2;
- (void)presentInterstitialFromRootViewController:(id)arg1;
- (void)getInterstitial;
- (void)getBannerWithSize:(struct GADAdSize)arg1;
- (id)initWithGADMAdNetworkConnector:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
