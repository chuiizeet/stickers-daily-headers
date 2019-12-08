//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GADVideoController, NSString, UIViewController;
@protocol GADNativeExpressAdViewDelegate;

@interface GADNativeExpressAdView : UIView
{
    _Bool _autoloadEnabled;
    GADVideoController *_videoController;
    NSString *_adUnitID;
    UIViewController *_rootViewController;
    id <GADNativeExpressAdViewDelegate> _delegate;
    NSString *_adNetworkClassName;
    struct GADAdSize _adSize;
}

@property(readonly, nonatomic) __weak NSString *adNetworkClassName; // @synthesize adNetworkClassName=_adNetworkClassName;
@property(nonatomic, getter=isAutoloadEnabled) _Bool autoloadEnabled; // @synthesize autoloadEnabled=_autoloadEnabled;
@property(nonatomic) __weak id <GADNativeExpressAdViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct GADAdSize adSize; // @synthesize adSize=_adSize;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(copy, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
@property(readonly, nonatomic) GADVideoController *videoController; // @synthesize videoController=_videoController;
- (void).cxx_destruct;
- (void)setAdOptions:(id)arg1;
- (void)loadRequest:(id)arg1;
- (id)initWithAdSize:(struct GADAdSize)arg1 origin:(struct CGPoint)arg2;
- (id)initWithAdSize:(struct GADAdSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 adSize:(struct GADAdSize)arg2;

@end

