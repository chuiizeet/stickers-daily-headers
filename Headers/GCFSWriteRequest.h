//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class NSData, NSMutableArray, NSMutableDictionary, NSString;

@interface GCFSWriteRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *database; // @dynamic database;
@property(retain, nonatomic) NSMutableDictionary *labels; // @dynamic labels;
@property(readonly, nonatomic) unsigned long long labels_Count; // @dynamic labels_Count;
@property(copy, nonatomic) NSString *streamId; // @dynamic streamId;
@property(copy, nonatomic) NSData *streamToken; // @dynamic streamToken;
@property(retain, nonatomic) NSMutableArray *writesArray; // @dynamic writesArray;
@property(readonly, nonatomic) unsigned long long writesArray_Count; // @dynamic writesArray_Count;

@end

