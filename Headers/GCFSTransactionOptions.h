//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class GCFSTransactionOptions_ReadOnly, GCFSTransactionOptions_ReadWrite;

@interface GCFSTransactionOptions : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int modeOneOfCase; // @dynamic modeOneOfCase;
@property(retain, nonatomic) GCFSTransactionOptions_ReadOnly *readOnly; // @dynamic readOnly;
@property(retain, nonatomic) GCFSTransactionOptions_ReadWrite *readWrite; // @dynamic readWrite;

@end

