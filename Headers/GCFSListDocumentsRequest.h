//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class GCFSDocumentMask, GPBTimestamp, NSData, NSString;

@interface GCFSListDocumentsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *collectionId; // @dynamic collectionId;
@property(readonly, nonatomic) int consistencySelectorOneOfCase; // @dynamic consistencySelectorOneOfCase;
@property(nonatomic) _Bool hasMask; // @dynamic hasMask;
@property(retain, nonatomic) GCFSDocumentMask *mask; // @dynamic mask;
@property(copy, nonatomic) NSString *orderBy; // @dynamic orderBy;
@property(nonatomic) int pageSize; // @dynamic pageSize;
@property(copy, nonatomic) NSString *pageToken; // @dynamic pageToken;
@property(copy, nonatomic) NSString *parent; // @dynamic parent;
@property(retain, nonatomic) GPBTimestamp *readTime; // @dynamic readTime;
@property(nonatomic) _Bool showMissing; // @dynamic showMissing;
@property(copy, nonatomic) NSData *transaction; // @dynamic transaction;

@end
