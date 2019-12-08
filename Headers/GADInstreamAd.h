//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADInstreamAdView, GADInstreamNativeAd, GADMediaView, GADObserverCollection, GADResponseInfo, GADVideoController;

@interface GADInstreamAd : NSObject
{
    GADInstreamNativeAd *_nativeAd;
    GADObserverCollection *_observers;
    _Bool _hasBeenShown;
    GADVideoController *_videoController;
    double _duration;
    double _currentTime;
    double _aspectRatio;
    GADMediaView *_mediaView;
    GADInstreamAdView *_instreamAdView;
}

+ (void)loadAdWithAdTag:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)loadAdWithAdUnitID:(id)arg1 request:(id)arg2 mediaAspectRatio:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(nonatomic) __weak GADInstreamAdView *instreamAdView; // @synthesize instreamAdView=_instreamAdView;
@property(readonly, nonatomic) _Bool hasBeenShown; // @synthesize hasBeenShown=_hasBeenShown;
@property(readonly, nonatomic) GADMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(readonly, nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(readonly, nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) GADVideoController *videoController; // @synthesize videoController=_videoController;
- (void).cxx_destruct;
@property(readonly, nonatomic) GADResponseInfo *responseInfo;
- (void)dealloc;
- (id)initWithInstreamNativeAd:(id)arg1;

@end

