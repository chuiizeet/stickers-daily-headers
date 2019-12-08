//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface GADNetworkUtilizationStatistics : NSObject
{
    struct NSDictionary *_transmittedByteCounts;
    struct NSDictionary *_receivedByteCounts;
}

+ (id)currentStatistics;
@property(readonly, nonatomic) NSDictionary *receivedByteCounts; // @synthesize receivedByteCounts=_receivedByteCounts;
@property(readonly, nonatomic) NSDictionary *transmittedByteCounts; // @synthesize transmittedByteCounts=_transmittedByteCounts;
- (void).cxx_destruct;
- (id)minusStatistics:(id)arg1;
- (id)plusStatistics:(id)arg1;
- (id)updatedStatistics;
- (id)init;
- (id)initWithTransmittedByteCounts:(struct NSDictionary *)arg1 receivedByteCounts:(struct NSDictionary *)arg2;

@end

