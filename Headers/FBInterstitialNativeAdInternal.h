//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBInterstitialAdInternal.h"

#import "FBAdCommandProcessorDelegate-Protocol.h"
#import "FBInterstitialAdNativeViewDelegate-Protocol.h"

@class FBAdCommandProcessor, FBAdExtraHint, FBAdPlacementDefinition, FBInterstitialAdNativeView, FBNativeAdDataModel, NSString, UIViewController;
@protocol FBInterstitialAdInternalDelegate;

@interface FBInterstitialNativeAdInternal : FBInterstitialAdInternal <FBAdCommandProcessorDelegate, FBInterstitialAdNativeViewDelegate>
{
    id <FBInterstitialAdInternalDelegate> _delegate;
    FBNativeAdDataModel *_dataModel;
    FBAdPlacementDefinition *_placementDefinition;
    UIViewController *_rootViewController;
    FBAdCommandProcessor *_commandProcessor;
    double _firstImpressionTime;
    FBInterstitialAdNativeView *_nativeView;
    FBAdExtraHint *_extraHint;
}

@property(retain, nonatomic) FBAdExtraHint *extraHint; // @synthesize extraHint=_extraHint;
@property(nonatomic) __weak FBInterstitialAdNativeView *nativeView; // @synthesize nativeView=_nativeView;
@property(nonatomic) double firstImpressionTime; // @synthesize firstImpressionTime=_firstImpressionTime;
@property(retain, nonatomic) FBAdCommandProcessor *commandProcessor; // @synthesize commandProcessor=_commandProcessor;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) FBAdPlacementDefinition *placementDefinition; // @synthesize placementDefinition=_placementDefinition;
@property(retain, nonatomic) FBNativeAdDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) __weak id <FBInterstitialAdInternalDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)interstitialAdNativeView:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdNativeViewDidClose:(id)arg1;
- (void)processCommand:(id)arg1 withExtraData:(id)arg2 skipAppStore:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)interstitialAdNativeViewDidClick:(id)arg1 withEvent:(id)arg2 withCommand:(id)arg3 skipAppStore:(_Bool)arg4 withPageNumber:(id)arg5 withPageTotal:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)interstitialAdNativeViewDidInteract:(id)arg1 withTouchData:(id)arg2 touchType:(id)arg3 withCommand:(id)arg4 skipAppStore:(_Bool)arg5 withPageNumber:(id)arg6 withPageTotal:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)interstitialAdNativeViewDidClick:(id)arg1 withEvent:(id)arg2 withCommand:(id)arg3 skipAppStore:(_Bool)arg4 withPageNumber:(id)arg5 withPageTotal:(id)arg6;
- (void)interstitialAdNativeViewDidLogImpression:(id)arg1 withViewabilityValidator:(id)arg2 withPageNumber:(id)arg3 withPageTotal:(id)arg4;
- (void)interstitialAdNativeViewDidLoad:(id)arg1;
- (id)interstitialAdNativeViewRootViewController:(id)arg1;
- (id)commandProcessorTouchInformation:(id)arg1;
- (void)viewControllerDismissed:(id)arg1;
- (void)willPresentViewController:(id)arg1;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;
- (void)setupCommandProcessorIfNeeded;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)showAdFromRootViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)showAdFromRootViewController:(id)arg1;
- (void)loadAd;
- (void)loadAdFromMarkup:(id)arg1 activationCommand:(id)arg2 orientation:(long long)arg3;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)adDataModel;
- (id)initWithPlacementID:(id)arg1 adData:(id)arg2 placementDefinition:(id)arg3 extraHint:(id)arg4;
- (_Bool)isAdValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

