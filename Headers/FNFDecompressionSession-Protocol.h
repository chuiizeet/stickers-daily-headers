//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FNFDecompressionSessionDelegate, FNFTimerManager;

@protocol FNFDecompressionSession <NSObject>
@property(readonly, nonatomic) struct opaqueCMFormatDescription *format;
- (struct CGSize)inputSize;
- (unsigned char)canAcceptFormatDescription:(struct opaqueCMFormatDescription *)arg1;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 iFrame:(unsigned long long)arg2;
- (void)closeSession;
- (id)initWithDelegate:(id <FNFDecompressionSessionDelegate>)arg1 sampleBufferFormatDescription:(struct opaqueCMFormatDescription *)arg2 videoSize:(struct CGSize)arg3 async:(_Bool)arg4 timerManager:(id <FNFTimerManager>)arg5;
@end

