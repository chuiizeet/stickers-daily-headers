//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADAdPresenting-Protocol.h"
#import "GADAdRendering-Protocol.h"
#import "GADMediationRewardedAdEventDelegate-Protocol.h"

@class GADEventContext, GADInterstitialAd, GADMediatedIntermission, GADMediationRewardedAdConfiguration, GADTargeting, NSDictionary, NSString;
@protocol GADMediationAdapter, GADMediationRewardedAd;

@interface GADMediationRewardedAdRenderer : NSObject <GADAdPresenting, GADAdRendering, GADMediationRewardedAdEventDelegate>
{
    GADInterstitialAd *_rewardedAd;
    id <GADMediationRewardedAd> _mediationRewardedAd;
    CDUnknownBlockType _renderCompletionHandler;
    NSDictionary *_rewardGrantedUserInfo;
    GADMediationRewardedAdConfiguration *_mediatedConfiguration;
    GADTargeting *_targeting;
    GADEventContext *_context;
    struct NSDictionary *_adConfiguration;
    Class _adapterClass;
    GADMediatedIntermission *_intermission;
    id <GADMediationAdapter> _adapter;
}

- (void).cxx_destruct;
- (id)underAgeOfConsent;
- (id)maxAdContentRating;
- (_Bool)adMuted;
- (float)adVolume;
- (id)userKeywords;
- (id)userLocationDescription;
- (double)userLocationAccuracyInMeters;
- (double)userLongitude;
- (double)userLatitude;
- (_Bool)userHasLocation;
- (id)userBirthday;
- (long long)userGender;
- (id)childDirectedTreatment;
- (id)networkExtras;
- (_Bool)testMode;
- (id)credentials;
- (id)publisherId;
- (void)willDismissFullScreenView;
- (void)reportImpression;
- (void)didEndVideo;
- (void)didStartVideo;
- (void)reportClick;
- (void)didRewardUserWithReward:(id)arg1;
- (void)didDismissFullScreenView;
- (void)willPresentFullScreenView;
- (void)didFailToPresentWithError:(id)arg1;
- (void)rewardedAdDidFailToLoadWithError:(id)arg1;
- (void)rewardedAdDidLoad:(id)arg1 adapter:(id)arg2;
- (void)presentFromViewController:(id)arg1;
- (_Bool)canPresentFromViewController:(id)arg1;
- (void)renderWithServerTransaction:(id)arg1 adConfiguration:(struct NSDictionary *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)viewControllerForPresentingModalView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
