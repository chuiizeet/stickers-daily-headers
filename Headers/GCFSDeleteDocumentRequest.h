//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class GCFSPrecondition, NSString;

@interface GCFSDeleteDocumentRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCFSPrecondition *currentDocument; // @dynamic currentDocument;
@property(nonatomic) _Bool hasCurrentDocument; // @dynamic hasCurrentDocument;
@property(copy, nonatomic) NSString *name; // @dynamic name;

@end
