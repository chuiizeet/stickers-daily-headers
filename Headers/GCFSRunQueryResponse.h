//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class GCFSDocument, GPBTimestamp, NSData;

@interface GCFSRunQueryResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCFSDocument *document; // @dynamic document;
@property(nonatomic) _Bool hasDocument; // @dynamic hasDocument;
@property(nonatomic) _Bool hasReadTime; // @dynamic hasReadTime;
@property(retain, nonatomic) GPBTimestamp *readTime; // @dynamic readTime;
@property(nonatomic) int skippedResults; // @dynamic skippedResults;
@property(copy, nonatomic) NSData *transaction; // @dynamic transaction;

@end
