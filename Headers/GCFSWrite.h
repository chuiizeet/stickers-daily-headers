//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class GCFSDocument, GCFSDocumentMask, GCFSDocumentTransform, GCFSPrecondition, NSString;

@interface GCFSWrite : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCFSPrecondition *currentDocument; // @dynamic currentDocument;
@property(copy, nonatomic) NSString *delete_p; // @dynamic delete_p;
@property(nonatomic) _Bool hasCurrentDocument; // @dynamic hasCurrentDocument;
@property(nonatomic) _Bool hasUpdateMask; // @dynamic hasUpdateMask;
@property(readonly, nonatomic) int operationOneOfCase; // @dynamic operationOneOfCase;
@property(retain, nonatomic) GCFSDocumentTransform *transform; // @dynamic transform;
@property(retain, nonatomic) GCFSDocument *update; // @dynamic update;
@property(retain, nonatomic) GCFSDocumentMask *updateMask; // @dynamic updateMask;

@end

