//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface FIRSetAccountInfoResponseProviderUserInfo : NSObject
{
    NSString *_providerID;
    NSString *_displayName;
    NSURL *_photoURL;
}

@property(readonly, nonatomic) NSURL *photoURL; // @synthesize photoURL=_photoURL;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *providerID; // @synthesize providerID=_providerID;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

