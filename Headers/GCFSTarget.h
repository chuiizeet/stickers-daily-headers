//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class GCFSTarget_DocumentsTarget, GCFSTarget_QueryTarget, GPBTimestamp, NSData;

@interface GCFSTarget : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCFSTarget_DocumentsTarget *documents; // @dynamic documents;
@property(nonatomic) _Bool once; // @dynamic once;
@property(retain, nonatomic) GCFSTarget_QueryTarget *query; // @dynamic query;
@property(retain, nonatomic) GPBTimestamp *readTime; // @dynamic readTime;
@property(copy, nonatomic) NSData *resumeToken; // @dynamic resumeToken;
@property(readonly, nonatomic) int resumeTypeOneOfCase; // @dynamic resumeTypeOneOfCase;
@property(nonatomic) int targetId; // @dynamic targetId;
@property(readonly, nonatomic) int targetTypeOneOfCase; // @dynamic targetTypeOneOfCase;

@end
