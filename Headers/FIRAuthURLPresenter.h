//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FIRAuthWebViewControllerDelegate-Protocol.h"
#import "SFSafariViewControllerDelegate-Protocol.h"

@class FIRAuthWebViewController, NSString, SFSafariViewController;
@protocol FIRAuthUIDelegate;

@interface FIRAuthURLPresenter : NSObject <SFSafariViewControllerDelegate, FIRAuthWebViewControllerDelegate>
{
    _Bool _isPresenting;
    CDUnknownBlockType _callbackMatcher;
    SFSafariViewController *_safariViewController;
    FIRAuthWebViewController *_webViewController;
    id <FIRAuthUIDelegate> _UIDelegate;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)finishPresentationWithURL:(id)arg1 error:(id)arg2;
- (void)webViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)webViewControllerDidCancel:(id)arg1;
- (_Bool)webViewController:(id)arg1 canHandleURL:(id)arg2;
- (void)safariViewControllerDidFinish:(id)arg1;
- (_Bool)canHandleURL:(id)arg1;
- (void)presentURL:(id)arg1 UIDelegate:(id)arg2 callbackMatcher:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

