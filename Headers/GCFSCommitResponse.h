//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class GPBTimestamp, NSMutableArray;

@interface GCFSCommitResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBTimestamp *commitTime; // @dynamic commitTime;
@property(nonatomic) _Bool hasCommitTime; // @dynamic hasCommitTime;
@property(retain, nonatomic) NSMutableArray *writeResultsArray; // @dynamic writeResultsArray;
@property(readonly, nonatomic) unsigned long long writeResultsArray_Count; // @dynamic writeResultsArray_Count;

@end

