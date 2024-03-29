//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADAdRendering-Protocol.h"
#import "GADCustomEventNativeAdDelegate-Protocol.h"

@class GADServerTransaction, NSString;
@protocol GADCustomEventNativeAd;

@interface GADCustomEventNativeAdRenderer : NSObject <GADCustomEventNativeAdDelegate, GADAdRendering>
{
    GADServerTransaction *_transaction;
    struct NSDictionary *_adConfiguration;
    CDUnknownBlockType _renderCompletionHandler;
    id <GADCustomEventNativeAd> _customEventNative;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _adLoadCompleted
}

- (void).cxx_destruct;
- (void)customEventNativeAd:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)customEventNativeAd:(id)arg1 didReceiveMediatedUnifiedNativeAd:(id)arg2;
- (void)customEventNativeAd:(id)arg1 didReceiveMediatedNativeAd:(id)arg2;
- (void)processMediatedNativeAd:(id)arg1 withCustomEventNativeAd:(id)arg2;
- (void)renderWithServerTransaction:(id)arg1 adConfiguration:(struct NSDictionary *)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

