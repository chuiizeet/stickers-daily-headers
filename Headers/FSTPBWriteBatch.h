//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class GPBTimestamp, NSMutableArray;

@interface FSTPBWriteBatch : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *baseWritesArray; // @dynamic baseWritesArray;
@property(readonly, nonatomic) unsigned long long baseWritesArray_Count; // @dynamic baseWritesArray_Count;
@property(nonatomic) int batchId; // @dynamic batchId;
@property(nonatomic) _Bool hasLocalWriteTime; // @dynamic hasLocalWriteTime;
@property(retain, nonatomic) GPBTimestamp *localWriteTime; // @dynamic localWriteTime;
@property(retain, nonatomic) NSMutableArray *writesArray; // @dynamic writesArray;
@property(readonly, nonatomic) unsigned long long writesArray_Count; // @dynamic writesArray_Count;

@end
