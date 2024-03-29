//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAdDSLJSScriptMessageHandlerDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class FBAdDSLViewModel, NSString, WKWebView;
@protocol FBAdDSLFullScreenAdViewControllerDelegate;

@interface FBAdDSLFullScreenAdViewController : UIViewController <WKUIDelegate, WKNavigationDelegate, FBAdDSLJSScriptMessageHandlerDelegate>
{
    id <FBAdDSLFullScreenAdViewControllerDelegate> _delegate;
    WKWebView *_webview;
    NSString *_authKey;
    FBAdDSLViewModel *_adModel;
}

@property(copy, nonatomic) FBAdDSLViewModel *adModel; // @synthesize adModel=_adModel;
@property(copy, nonatomic) NSString *authKey; // @synthesize authKey=_authKey;
@property(retain, nonatomic) WKWebView *webview; // @synthesize webview=_webview;
@property(nonatomic) __weak id <FBAdDSLFullScreenAdViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getDictionaryFromExtraData:(id)arg1;
- (void)webViewRequestedData:(id)arg1;
- (void)sendLogEventWithJSONString:(id)arg1;
- (void)sendEvent:(unsigned long long)arg1;
- (void)sendMessage:(id)arg1 ToWebView:(id)arg2;
- (void)generateAuthKey;
- (void)setAssetsInWebView;
- (void)setAuthKeyInWebView;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)receivedJSScriptEvent:(unsigned long long)arg1 withExtraData:(id)arg2;
- (void)setupWithDataModel:(id)arg1;
- (void)setupWebView;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

