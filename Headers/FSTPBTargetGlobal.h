//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class GPBTimestamp;

@interface FSTPBTargetGlobal : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLastRemoteSnapshotVersion; // @dynamic hasLastRemoteSnapshotVersion;
@property(nonatomic) long long highestListenSequenceNumber; // @dynamic highestListenSequenceNumber;
@property(nonatomic) int highestTargetId; // @dynamic highestTargetId;
@property(retain, nonatomic) GPBTimestamp *lastRemoteSnapshotVersion; // @dynamic lastRemoteSnapshotVersion;
@property(nonatomic) int targetCount; // @dynamic targetCount;

@end
