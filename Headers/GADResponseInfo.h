//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GADResponseInfo : NSObject
{
    NSString *_responseIdentifier;
    NSString *_adNetworkClassName;
}

@property(readonly, nonatomic) NSString *adNetworkClassName; // @synthesize adNetworkClassName=_adNetworkClassName;
@property(readonly, nonatomic) NSString *responseIdentifier; // @synthesize responseIdentifier=_responseIdentifier;
- (void).cxx_destruct;
- (id)initWithAdNetworkClassName:(id)arg1 responseIdentifier:(id)arg2;
- (id)init;

@end

