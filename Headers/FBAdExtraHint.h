//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface FBAdExtraHint : NSObject
{
    NSString *_contentURL;
    NSString *_extraData;
    NSString *_mediationData;
    NSMutableSet *_keywords;
}

+ (id)createFromJSONString:(id)arg1;
@property(retain, nonatomic) NSMutableSet *keywords; // @synthesize keywords=_keywords;
@property(copy, nonatomic) NSString *mediationData; // @synthesize mediationData=_mediationData;
@property(copy, nonatomic) NSString *extraData; // @synthesize extraData=_extraData;
@property(copy, nonatomic) NSString *contentURL; // @synthesize contentURL=_contentURL;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (void)removeKeyword:(id)arg1;
- (void)addKeyword:(id)arg1;
- (id)initWithKeywords:(id)arg1;
- (id)init;

@end

