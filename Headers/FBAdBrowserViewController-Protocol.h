//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSURL, UIBarButtonItem, UIToolbar, UIView;
@protocol FBAdSafariViewControllerDelegate;

@protocol FBAdBrowserViewController <NSObject>
@property(nonatomic, getter=isStatusBarHidden) _Bool statusBarHidden;
@property(nonatomic) __weak NSObject<FBAdSafariViewControllerDelegate> *delegate;
@property(retain, nonatomic) UIToolbar *toolBar;
@property(retain, nonatomic) UIBarButtonItem *spinnerButton;
@property(retain, nonatomic) UIBarButtonItem *refreshButton;
@property(retain, nonatomic) UIBarButtonItem *forwardButton;
@property(retain, nonatomic) UIBarButtonItem *backButton;
@property(retain, nonatomic) UIView *webView;
- (void)loadURL:(NSURL *)arg1;
- (void)clearContent;
- (void)doneButtonClicked:(id)arg1;
- (void)refreshButtonClicked:(id)arg1;
- (void)forwardButtonClicked:(id)arg1;
- (void)backButtonClicked:(id)arg1;
@end

