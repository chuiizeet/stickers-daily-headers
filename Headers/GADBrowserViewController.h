//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GADPresenting-Protocol.h"
#import "GADWebViewControllerDelegate-Protocol.h"

@class GADAd, GADEventContext, GADWebViewController, NSString, NSURL, UIActivityIndicatorView, UIBarButtonItem, UIToolbar;

@interface GADBrowserViewController : UIViewController <GADWebViewControllerDelegate, GADPresenting>
{
    NSURL *_URLToLoad;
    NSURL *_referringURLToLoad;
    GADWebViewController *_webViewController;
    UIToolbar *_toolbar;
    UIBarButtonItem *_flexibleSpaceButton;
    UIBarButtonItem *_backButton;
    UIBarButtonItem *_forwardButton;
    UIBarButtonItem *_reloadButton;
    UIBarButtonItem *_safariButton;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_spinnerContainingButton;
    UIActivityIndicatorView *_spinner;
    long long _lastOrientation;
    GADEventContext *_context;
    GADAd *_ad;
    unsigned long long _supportedInterfaceOrientations;
}

@property(nonatomic) unsigned long long supportedInterfaceOrientations; // @synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)webViewControllerWebContentProcessDidTerminate:(id)arg1;
- (void)webViewController:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewControllerDidFinishLoad:(id)arg1;
- (void)webViewControllerDidStartLoad:(id)arg1;
- (_Bool)webViewController:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)relinquishScreenWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldDismissOnApplicationEnteringForeground;
- (_Bool)canPresentFromViewController:(id)arg1;
- (_Bool)shouldAutorotate;
- (void)openMainDocumentURL;
- (void)reload;
- (void)forward;
- (void)back;
- (void)loadURL:(id)arg1 referringURL:(id)arg2;
- (void)doneButtonPressed:(id)arg1;
- (void)refreshToolbar;
- (void)createToolbarButtons;
- (id)buttonWithImage:(id)arg1 name:(id)arg2 width:(double)arg3 enabled:(_Bool)arg4 action:(SEL)arg5;
- (void)updateWebViewOrientationWithNotificationChangeEvent:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) GADEventContext *context;
- (void)dealloc;
- (id)initWithAd:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

