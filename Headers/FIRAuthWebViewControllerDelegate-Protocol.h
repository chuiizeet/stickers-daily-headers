//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FIRAuthWebViewController, NSError, NSURL;

@protocol FIRAuthWebViewControllerDelegate <NSObject>
- (void)webViewController:(FIRAuthWebViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)webViewControllerDidCancel:(FIRAuthWebViewController *)arg1;
- (_Bool)webViewController:(FIRAuthWebViewController *)arg1 canHandleURL:(NSURL *)arg2;
@end

