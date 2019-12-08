//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSObject, NSString;
@protocol FNFPlayerDisplayEngineDelegate, FNFPlayerRenderer, OS_dispatch_queue;

@protocol FNFPlayerDisplayEngine <NSObject>
@property(nonatomic) struct CGAffineTransform preferredTransform;
@property(nonatomic) __weak id <FNFPlayerDisplayEngineDelegate> displayEngineDelegate;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
@property(retain) struct OpaqueCMTimebase *controlTimebase;
@property(copy) NSString *videoGravity;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)requestLastDisplayedSampleBuffer:(void (^)(struct __CVBuffer *))arg1 onQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)yieldDecompressedBuffer:(struct __CVBuffer *)arg1 presentationTimeStamp:(CDStruct_1b6d18a9)arg2 presentationDuration:(CDStruct_1b6d18a9)arg3;
- (void)dispatchAsyncOnRenderingThread:(void (^)(void))arg1;
- (void)setRenderingThreadPriority:(double)arg1;
- (void)setNeedsDisplayFrame;
- (void)invalidate;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 attributes:(unsigned int)arg2;
- (_Bool)flushIfError;
- (_Bool)seekFrameUpdatesFinished;
- (_Bool)flushDisplayReadySampleBuffers;
- (void)flushAndRemoveImage;
- (void)flush;
- (_Bool)isReadyForMoreMediaData;
- (void)stopRequestingMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(NSObject<OS_dispatch_queue> *)arg1 usingBlock:(void (^)(void))arg2;
- (_Bool)isReadyForDisplay;
- (void)setRenderer:(id <FNFPlayerRenderer>)arg1;
- (_Bool)allowRenderingWhileApplicationInactive;
- (void)pauseDisplayLink;
- (void)pause:(int)arg1;
- (void)resume;
@end

