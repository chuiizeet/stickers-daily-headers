//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADEventContextSource-Protocol.h"
#import "GADMediaContentDisplaying-Protocol.h"

@class GADEventContext, GADInternalNativeAd, GADNativeAdImage, GADObserverCollection, GADWebAdView, NSDictionary, NSMutableArray, NSString, UIView;
@protocol GADVideoControlling;

@interface GADInstreamMediaContent : NSObject <GADEventContextSource, GADMediaContentDisplaying>
{
    struct NSDictionary *_adConfiguration;
    GADInternalNativeAd *_internalNativeAd;
    _Bool _loadExecuted;
    NSDictionary *_videoOptions;
    GADObserverCollection *_observers;
    NSMutableArray *_adViewMonitors;
    GADEventContext *_instreamContext;
    GADWebAdView *_adView;
    GADNativeAdImage *_mainImage;
    id <GADVideoControlling> _videoController;
    struct CGSize _intrinsicContentSize;
}

@property(readonly, nonatomic) id <GADVideoControlling> videoController; // @synthesize videoController=_videoController;
@property(retain, nonatomic) GADNativeAdImage *mainImage; // @synthesize mainImage=_mainImage;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize; // @synthesize intrinsicContentSize=_intrinsicContentSize;
- (void).cxx_destruct;
- (void)performPostAdLoadActions;
- (void)performPreAdLoadActions;
@property(readonly, nonatomic) UIView *mediaView;
@property(readonly, nonatomic) double aspectRatio;
- (void)loadWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) GADEventContext *context;
- (id)initWithInternalNativeAd:(id)arg1 adConfiguration:(struct NSDictionary *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

