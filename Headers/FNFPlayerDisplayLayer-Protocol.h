//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FNFAVPlayerLayer-Protocol.h"

@protocol FNFPlayerDisplayLayerDelegate, FNFPlayerRenderer;

@protocol FNFPlayerDisplayLayer <FNFAVPlayerLayer>
@property(nonatomic) __weak id <FNFPlayerDisplayLayerDelegate> displayLayerDelegate;
@property(nonatomic) struct CGAffineTransform preferredTransform;
- (void)resetRendering;
- (void)clearBuffers;
- (void)flushDisplayLayer:(_Bool)arg1;
- (void)updateDisplayLayer;
- (void)displayEmptyBuffer:(_Bool)arg1 preventPlayback:(_Bool)arg2 lastDisplayedSampleBuffer:(struct __CVBuffer *)arg3;
- (void)displayPixelBuffer:(struct __CVBuffer *)arg1 preventPlayback:(_Bool)arg2;
- (void)initializeDisplayLayer;
- (void)setRenderer:(id <FNFPlayerRenderer>)arg1;
@end

