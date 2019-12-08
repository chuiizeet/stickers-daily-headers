//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAdViewDelegate-Protocol.h"
#import "FBInterstitialAdDelegate-Protocol.h"
#import "FBRewardedVideoAdDelegate-Protocol.h"

@class NSString, UIViewController;
@protocol GADMAdNetworkAdapter, GADMAdNetworkConnector;

@interface GADFBAdapterDelegate : NSObject <FBAdViewDelegate, FBInterstitialAdDelegate, FBRewardedVideoAdDelegate>
{
    id <GADMAdNetworkConnector> _connector;
    id <GADMAdNetworkAdapter> _adapter;
    struct CGSize _finalBannerSize;
}

@property(nonatomic) struct CGSize finalBannerSize; // @synthesize finalBannerSize=_finalBannerSize;
- (void).cxx_destruct;
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdDidLoad:(id)arg1;
- (void)interstitialAdWillClose:(id)arg1;
- (void)interstitialAdDidClose:(id)arg1;
- (void)interstitialAdDidClick:(id)arg1;
- (void)interstitialAdWillLogImpression:(id)arg1;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;
- (void)adViewDidFinishHandlingClick:(id)arg1;
- (void)adView:(id)arg1 didFailWithError:(id)arg2;
- (void)adViewDidLoad:(id)arg1;
- (void)adViewDidClick:(id)arg1;
- (id)init;
- (id)initWithAdapter:(id)arg1 connector:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
