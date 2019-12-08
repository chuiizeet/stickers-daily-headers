//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADBannerView.h"

#import "GADAppEventDelegate-Protocol.h"

@class DFPInternalBannerView, GADVideoController, NSArray, NSString;
@protocol DFPCustomRenderedBannerViewDelegate, GADAdSizeDelegate, GADAppEventDelegate;

@interface DFPBannerView : GADBannerView <GADAppEventDelegate>
{
    id <GADAppEventDelegate> _appEventDelegate;
    id <DFPCustomRenderedBannerViewDelegate> _customRenderedBannerViewDelegate;
}

+ (Class)bannerViewClass;
@property(nonatomic) __weak id <DFPCustomRenderedBannerViewDelegate> customRenderedBannerViewDelegate; // @synthesize customRenderedBannerViewDelegate=_customRenderedBannerViewDelegate;
@property(nonatomic) __weak id <GADAppEventDelegate> appEventDelegate; // @synthesize appEventDelegate=_appEventDelegate;
- (void).cxx_destruct;
- (void)adView:(id)arg1 didReceiveAppEvent:(id)arg2 withInfo:(id)arg3;
- (void)resize:(struct GADAdSize)arg1;
- (void)setValidAdSizesWithSizes:(struct GADAdSize *)arg1;
- (void)recordImpression;
- (void)setAdOptions:(id)arg1;
- (struct CGSize)effectiveContentSize;
@property(readonly, nonatomic) GADVideoController *videoController;
@property(nonatomic) _Bool enableManualImpressions;
- (void)setCorrelator:(id)arg1;
- (id)correlator;
@property(copy, nonatomic) NSArray *validAdSizes;

// Remaining properties
@property(nonatomic) __weak id <GADAdSizeDelegate> adSizeDelegate; // @dynamic adSizeDelegate;
@property(copy, nonatomic) NSString *adUnitID; // @dynamic adUnitID;
@property(readonly, nonatomic) DFPInternalBannerView *bannerView; // @dynamic bannerView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
