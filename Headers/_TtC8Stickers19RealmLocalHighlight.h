//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_$s10RealmSwift6ObjectCN.h"

@class NSString;

@interface _TtC8Stickers19RealmLocalHighlight : _$s10RealmSwift6ObjectCN
{
    // Error parsing type: , name: id
    // Error parsing type: , name: action
    // Error parsing type: , name: coverURL
    // Error parsing type: , name: createdAt
    // Error parsing type: , name: updatedAt
    // Error parsing type: , name: priority
    // Error parsing type: , name: status
}

+ (id)primaryKey;
- (void).cxx_destruct;
- (id)initWithValue:(id)arg1 schema:(id)arg2;
- (id)initWithRealm:(id)arg1 schema:(id)arg2;
- (id)init;
@property(nonatomic) long long status; // @synthesize status;
@property(nonatomic) long long priority; // @synthesize priority;
@property(nonatomic) long long updatedAt; // @synthesize updatedAt;
@property(nonatomic) long long createdAt; // @synthesize createdAt;
@property(nonatomic, copy) NSString *coverURL; // @synthesize coverURL;
@property(nonatomic, copy) NSString *action; // @synthesize action;
@property(nonatomic, copy) NSString *id; // @synthesize id;

@end

