//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class GCFSDocument, GCFSDocumentMask, GCFSPrecondition;

@interface GCFSUpdateDocumentRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCFSPrecondition *currentDocument; // @dynamic currentDocument;
@property(retain, nonatomic) GCFSDocument *document; // @dynamic document;
@property(nonatomic) _Bool hasCurrentDocument; // @dynamic hasCurrentDocument;
@property(nonatomic) _Bool hasDocument; // @dynamic hasDocument;
@property(nonatomic) _Bool hasMask; // @dynamic hasMask;
@property(nonatomic) _Bool hasUpdateMask; // @dynamic hasUpdateMask;
@property(retain, nonatomic) GCFSDocumentMask *mask; // @dynamic mask;
@property(retain, nonatomic) GCFSDocumentMask *updateMask; // @dynamic updateMask;

@end

