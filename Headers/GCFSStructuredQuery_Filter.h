//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class GCFSStructuredQuery_CompositeFilter, GCFSStructuredQuery_FieldFilter, GCFSStructuredQuery_UnaryFilter;

@interface GCFSStructuredQuery_Filter : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCFSStructuredQuery_CompositeFilter *compositeFilter; // @dynamic compositeFilter;
@property(retain, nonatomic) GCFSStructuredQuery_FieldFilter *fieldFilter; // @dynamic fieldFilter;
@property(readonly, nonatomic) int filterTypeOneOfCase; // @dynamic filterTypeOneOfCase;
@property(retain, nonatomic) GCFSStructuredQuery_UnaryFilter *unaryFilter; // @dynamic unaryFilter;

@end

