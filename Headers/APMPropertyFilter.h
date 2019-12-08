//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface APMPropertyFilter : NSObject
{
    _Bool _sessionScoped;
    int _audienceID;
    int _filterID;
    NSString *_propertyName;
    NSData *_data;
}

@property(readonly, nonatomic, getter=isSessionScoped) _Bool sessionScoped; // @synthesize sessionScoped=_sessionScoped;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property(readonly, nonatomic) int filterID; // @synthesize filterID=_filterID;
@property(readonly, nonatomic) int audienceID; // @synthesize audienceID=_audienceID;
- (void).cxx_destruct;
- (id)initWithAudienceID:(int)arg1 filterID:(int)arg2 propertyName:(id)arg3 data:(id)arg4 sessionScoped:(_Bool)arg5;

@end

