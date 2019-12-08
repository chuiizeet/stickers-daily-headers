//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAdViewDelegate-Protocol.h"
#import "GADMediationBannerAd-Protocol.h"

@class FBAdView, GADMediationAdConfiguration, NSString, UIView, UIViewController;
@protocol GADMediationBannerAdEventDelegate;

@interface GADFBBannerRenderer : NSObject <GADMediationBannerAd, FBAdViewDelegate>
{
    CDUnknownBlockType _adLoadCompletionHandler;
    GADMediationAdConfiguration *_adConfig;
    FBAdView *_adView;
    id <GADMediationBannerAdEventDelegate> _adEventDelegate;
    struct CGSize _finalBannerSize;
    _Bool _isRTBRequest;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *view;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;
- (void)adViewDidFinishHandlingClick:(id)arg1;
- (void)adViewDidClick:(id)arg1;
- (void)adView:(id)arg1 didFailWithError:(id)arg2;
- (void)adViewDidLoad:(id)arg1;
- (void)renderBannerForAdConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

