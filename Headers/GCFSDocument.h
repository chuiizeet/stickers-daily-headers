//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class GPBTimestamp, NSMutableDictionary, NSString;

@interface GCFSDocument : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBTimestamp *createTime; // @dynamic createTime;
@property(retain, nonatomic) NSMutableDictionary *fields; // @dynamic fields;
@property(readonly, nonatomic) unsigned long long fields_Count; // @dynamic fields_Count;
@property(nonatomic) _Bool hasCreateTime; // @dynamic hasCreateTime;
@property(nonatomic) _Bool hasUpdateTime; // @dynamic hasUpdateTime;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) GPBTimestamp *updateTime; // @dynamic updateTime;

@end

