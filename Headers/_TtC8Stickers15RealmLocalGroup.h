//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_$s10RealmSwift6ObjectCN.h"

@class NSString;

@interface _TtC8Stickers15RealmLocalGroup : _$s10RealmSwift6ObjectCN
{
    // Error parsing type: , name: id
    // Error parsing type: , name: coverURL
    // Error parsing type: , name: coverNoTitleURL
    // Error parsing type: , name: headerURL
    // Error parsing type: , name: name
    // Error parsing type: , name: numberOfCategories
    // Error parsing type: , name: numberOfStickers
    // Error parsing type: , name: color
    // Error parsing type: , name: createdAt
    // Error parsing type: , name: updatedAt
    // Error parsing type: , name: status
    // Error parsing type: , name: homeOrder
    // Error parsing type: , name: packCellType
}

+ (id)primaryKey;
- (void).cxx_destruct;
- (id)initWithValue:(id)arg1 schema:(id)arg2;
- (id)initWithRealm:(id)arg1 schema:(id)arg2;
- (id)init;
@property(nonatomic) long long packCellType; // @synthesize packCellType;
@property(nonatomic) long long homeOrder; // @synthesize homeOrder;
@property(nonatomic) long long status; // @synthesize status;
@property(nonatomic) long long updatedAt; // @synthesize updatedAt;
@property(nonatomic) long long createdAt; // @synthesize createdAt;
@property(nonatomic, copy) NSString *color; // @synthesize color;
@property(nonatomic) long long numberOfStickers; // @synthesize numberOfStickers;
@property(nonatomic) long long numberOfCategories; // @synthesize numberOfCategories;
@property(nonatomic, copy) NSString *name; // @synthesize name;
@property(nonatomic, copy) NSString *headerURL; // @synthesize headerURL;
@property(nonatomic, copy) NSString *coverNoTitleURL; // @synthesize coverNoTitleURL;
@property(nonatomic, copy) NSString *coverURL; // @synthesize coverURL;
@property(nonatomic, copy) NSString *id; // @synthesize id;

@end

