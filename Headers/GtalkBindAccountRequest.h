//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class NSString;

@interface GtalkBindAccountRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long accountId; // @dynamic accountId;
@property(copy, nonatomic) NSString *authToken; // @dynamic authToken;
@property(copy, nonatomic) NSString *domain; // @dynamic domain;
@property(nonatomic) _Bool hasAccountId; // @dynamic hasAccountId;
@property(nonatomic) _Bool hasAuthToken; // @dynamic hasAuthToken;
@property(nonatomic) _Bool hasDomain; // @dynamic hasDomain;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasLastStreamIdReceived; // @dynamic hasLastStreamIdReceived;
@property(nonatomic) _Bool hasPersistentId; // @dynamic hasPersistentId;
@property(nonatomic) _Bool hasResource; // @dynamic hasResource;
@property(nonatomic) _Bool hasStreamId; // @dynamic hasStreamId;
@property(nonatomic) _Bool hasUser; // @dynamic hasUser;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) int lastStreamIdReceived; // @dynamic lastStreamIdReceived;
@property(copy, nonatomic) NSString *persistentId; // @dynamic persistentId;
@property(copy, nonatomic) NSString *resource; // @dynamic resource;
@property(nonatomic) int streamId; // @dynamic streamId;
@property(copy, nonatomic) NSString *user; // @dynamic user;

@end

