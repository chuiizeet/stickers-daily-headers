//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADAdSource, GADCorrelator, GADInterstitialAd, GADObserverCollection, GADResponseInfo, NSString;
@protocol GADAppEventDelegate, GADInAppPurchaseDelegate, GADInterstitialDelegate, OS_dispatch_queue;

@interface GADInterstitial : NSObject
{
    GADInterstitialAd *_interstitialAd;
    GADAdSource *_adSource;
    _Bool _requestInProgress;
    GADObserverCollection *_adObservers;
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADResponseInfo *_responseInfo;
    GADCorrelator *_correlator;
    GADInterstitial *_retainCycle;
    unsigned int _lastRequestedCorrelationID;
    _Bool _hasBeenUsed;
    NSString *_adUnitID;
    id <GADInterstitialDelegate> _delegate;
    id <GADInAppPurchaseDelegate> _inAppPurchaseDelegate;
    id <GADAppEventDelegate> _appEventDelegate;
}

@property(nonatomic) __weak id <GADAppEventDelegate> appEventDelegate; // @synthesize appEventDelegate=_appEventDelegate;
@property(nonatomic) __weak id <GADInAppPurchaseDelegate> inAppPurchaseDelegate; // @synthesize inAppPurchaseDelegate=_inAppPurchaseDelegate;
@property(readonly, nonatomic) _Bool hasBeenUsed; // @synthesize hasBeenUsed=_hasBeenUsed;
@property(nonatomic) __weak id <GADInterstitialDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
- (void).cxx_destruct;
- (void)setAdUnitID:(id)arg1;
- (id)init;
- (void)attachLifecycleEventObservers;
- (void)adInvalidated;
- (id)adSource;
- (void)setInterstitialAd:(id)arg1;
@property(readonly, nonatomic) _Bool isReady;
- (void)adPresentationDidFail;
- (void)presentFromRootViewController:(id)arg1;
- (void)adLoadCompletedWithError:(id)arg1;
- (void)loadWithTargeting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateTargeting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadRequest:(id)arg1;
- (_Bool)shouldOverrideInProgressRequest;
@property(retain, nonatomic) GADCorrelator *correlator;
- (void)setResponseInfo:(id)arg1;
@property(readonly, nonatomic) GADResponseInfo *responseInfo;
@property(readonly, nonatomic) NSString *adNetworkClassName;
- (void)dealloc;
- (id)initWithAdUnitID:(id)arg1;

@end

