//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBAdTimeObserver, FBAdVideoLogger, FBAdVideoPlayerView, NSMutableSet, NSString;
@protocol FNFAVPlayer, FNFAVPlayerItem;

@interface FBMediaViewVideoRenderer : UIView
{
    CDUnknownBlockType _failureBlock;
    _Bool _isFailed;
    _Bool _isSeeking;
    _Bool _isStarted;
    CDUnknownBlockType _loadedBlock;
    id <FNFAVPlayer> _player;
    id <FNFAVPlayerItem> _playerItem;
    _Bool _playingBeforeSeeked;
    CDStruct_1b6d18a9 _pollingInterval;
    FBAdTimeObserver *_progressLoggingObserver;
    NSMutableSet *_timingObservers;
    float _volume;
    FBAdVideoLogger *_videoLogger;
    struct CGSize _videoSize;
    FBAdVideoPlayerView *_videoView;
    NSString *_inlineClientToken;
    _Bool _videoOrPlaceholderImageVisible;
    UIView *_videoContainerView;
    CDUnknownBlockType _videoReadyToDisplay;
}

@property(copy, nonatomic) CDUnknownBlockType videoReadyToDisplay; // @synthesize videoReadyToDisplay=_videoReadyToDisplay;
@property(readonly, nonatomic) UIView *videoContainerView; // @synthesize videoContainerView=_videoContainerView;
@property(nonatomic) _Bool videoOrPlaceholderImageVisible; // @synthesize videoOrPlaceholderImageVisible=_videoOrPlaceholderImageVisible;
- (void).cxx_destruct;
- (void)videoDidFailWithError:(id)arg1;
- (void)videoDidEnd;
- (void)videoDidDisengageSeek;
- (void)videoDidSeek;
- (void)videoDidEngageSeek;
- (void)videoDidPlay;
- (void)videoDidPause;
- (void)videoDidLoad;
- (void)videoDidChangeVolume;
- (id)extraDataForVideoFunnelLogging:(id)arg1;
- (struct CGRect)wantedVideoContainerFrame;
- (void)loadVideoURL:(id)arg1 pollingInterval:(CDStruct_1b6d18a9)arg2 clientToken:(id)arg3 autoplayEnabled:(_Bool)arg4 loadedBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6 cardIndex:(id)arg7 cardCount:(id)arg8;
- (void)loadVideoURL:(id)arg1 pollingInterval:(CDStruct_1b6d18a9)arg2 clientToken:(id)arg3 autoplayEnabled:(_Bool)arg4 loadedBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)loadVideoURL:(id)arg1 pollingInterval:(CDStruct_1b6d18a9)arg2 clientToken:(id)arg3 autoplayEnabled:(_Bool)arg4 cardIndex:(id)arg5 cardCount:(id)arg6;
- (void)loadVideoURL:(id)arg1 pollingInterval:(CDStruct_1b6d18a9)arg2 clientToken:(id)arg3 autoplayEnabled:(_Bool)arg4;
@property(nonatomic) float volume;
- (void)seekVideoToTime:(CDStruct_1b6d18a9)arg1;
- (void)removeTimeObserver:(id)arg1;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)playVideo;
- (void)pauseVideo;
- (void)engageVideoSeek;
- (void)disengageVideoSeek;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime;
@property(readonly, nonatomic) double aspectRatio;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

