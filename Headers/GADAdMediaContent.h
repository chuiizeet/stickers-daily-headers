//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADEventContextSource-Protocol.h"
#import "GADMediaContentDisplaying-Protocol.h"

@class GADEventContext, GADInternalNativeAd, GADNativeAdImage, GADObserverCollection, GADViewVisibilityMonitor, GADWebAdView, NSDictionary, NSMutableArray, NSString, UIImageView, UIView;
@protocol GADVideoControlling, OS_dispatch_queue;

@interface GADAdMediaContent : NSObject <GADEventContextSource, GADMediaContentDisplaying>
{
    struct NSDictionary *_adConfiguration;
    NSDictionary *_videoConfiguration;
    // Error parsing type: Ad, name: _mainImageAspectRatio
    NSDictionary *_videoOptions;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _completionHandlerExecuted
    // Error parsing type: {atomic_flag="_Value"AB}, name: _loadVideoExecuted
    GADEventContext *_context;
    GADWebAdView *_adView;
    _Bool _mediaLoadedSuccessfully;
    GADObserverCollection *_observers;
    NSMutableArray *_adViewMonitors;
    GADInternalNativeAd *_internalNativeAd;
    GADViewVisibilityMonitor *_viewVisibilityMonitor;
    CDUnknownBlockType _completionHandler;
    struct CGSize _intrinsicVideoSize;
    UIImageView *_mainImageView;
    NSObject<OS_dispatch_queue> *_lockQueue;
    id <GADVideoControlling> _videoController;
    GADNativeAdImage *_mainImage;
}

@property(retain, nonatomic) GADNativeAdImage *mainImage; // @synthesize mainImage=_mainImage;
@property(readonly, nonatomic) id <GADVideoControlling> videoController; // @synthesize videoController=_videoController;
- (void).cxx_destruct;
- (void)performPostLoadActions;
- (void)registerOverlayViewObservers:(id)arg1;
- (void)preloadActionsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)finishLoadingWithError:(id)arg1;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) UIView *mediaView;
- (void)renderVideoDictionary;
- (void)createAndLoadAdViewWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadVideoWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) GADEventContext *context;
- (id)initWithInternalNativeAd:(id)arg1 adConfiguration:(struct NSDictionary *)arg2 mainImage:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

