//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADView.h"

#import "GADJavascriptEvaluating-Protocol.h"
#import "GADWebViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class GADActionURLHandler, GADEventContext, GADObserverCollection, GADWebViewConfiguration, GADWebViewController, NSOperationQueue, NSString;
@protocol GADWebAdViewDelegate;

@interface GADWebAdView : GADView <UIGestureRecognizerDelegate, GADWebViewControllerDelegate, GADJavascriptEvaluating>
{
    CDUnknownBlockType _loadCompletionHandler;
    double _loadCompletedTimestamp;
    NSOperationQueue *_eventQueue;
    _Bool _touched;
    GADActionURLHandler *_actionURLHandler;
    GADObserverCollection *_bufferObservers;
    GADEventContext *_context;
    _Bool _shouldRenderTestAdLabel;
    GADWebViewController *_webViewController;
    id <GADWebAdViewDelegate> _delegate;
    GADWebViewConfiguration *_configuration;
}

@property(readonly, nonatomic) GADWebViewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) _Bool shouldRenderTestAdLabel; // @synthesize shouldRenderTestAdLabel=_shouldRenderTestAdLabel;
@property(nonatomic) __weak id <GADWebAdViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) GADWebViewController *webViewController; // @synthesize webViewController=_webViewController;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)webViewControllerWebContentProcessDidTerminate:(id)arg1;
- (void)webViewController:(id)arg1 runJavaScriptTextInputPanelWithTitle:(id)arg2 defaultText:(id)arg3 prompt:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webViewController:(id)arg1 runJavaScriptConfirmPanelWithTitle:(id)arg2 message:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webViewController:(id)arg1 runJavaScriptAlertPanelWithTitle:(id)arg2 message:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webViewController:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewControllerDidFinishLoad:(id)arg1;
- (void)webViewControllerDidStartLoad:(id)arg1;
- (_Bool)webViewController:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (_Bool)isNavigationValidClick:(long long)arg1;
- (void)dropWebViewController;
- (void)dispatchSDKEvent:(id)arg1 parameters:(id)arg2;
- (void)asyncEvaluateFunction:(id)arg1 parameters:(id)arg2;
- (void)asyncEvaluateScript:(id)arg1;
- (long long)contentInsetAdjustmentBehavior;
- (void)bufferNotificationsUntilAdAvailableToDelegate:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)loadCompletedWithError:(id)arg1;
- (void)loadURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setLoadCompletionHandler:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)arg1;
- (id)context;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 context:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

