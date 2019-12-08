//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADJSContext;

@interface GADNativeAdContext : NSObject
{
    GADJSContext *_context;
}

+ (void)JSCoreNativeAdContextWithEventContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)webViewNativeAdContextWithNetworkNotificationsEnabled:(_Bool)arg1 eventContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)loadWithNetworkNotificationsEnabled:(_Bool)arg1 eventContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)loadWithEventContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)loadWithAdConfiguration:(struct NSDictionary *)arg1 eventContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) GADJSContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)handleOnePointFiveClick:(id)arg1;
- (void)handleImpression:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleClick:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)preprocessNativeAdDictionary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setJSContext:(id)arg1;

@end

