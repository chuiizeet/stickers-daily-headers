//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface GADWebViewControllerMap : NSObject
{
    NSMutableSet *_webViewControllers;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)webViewConfigurationForMainDocumentURL:(id)arg1 context:(id *)arg2;
- (void)removeWebViewController:(id)arg1;
- (void)addWebViewController:(id)arg1;
- (id)init;

@end

