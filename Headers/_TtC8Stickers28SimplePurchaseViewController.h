//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8Stickers26BasePurchaseViewController.h"

@class UIActivityIndicatorView, UIImageView, UILabel, _TtC8Stickers10BaseButton, _TtC8Stickers14UICustomButton;

@interface _TtC8Stickers28SimplePurchaseViewController : _TtC8Stickers26BasePurchaseViewController
{
    // Error parsing type: , name: longAverageLabel
    // Error parsing type: , name: mediumAverageLabel
    // Error parsing type: , name: shortDescriptionLabel
    // Error parsing type: , name: longPriceLabel
    // Error parsing type: , name: mediumPriceLabel
    // Error parsing type: , name: shortPriceLabel
    // Error parsing type: , name: longFrequencyButton
    // Error parsing type: , name: mediumFrequencyButton
    // Error parsing type: , name: shortFrequencyButton
    // Error parsing type: , name: restoreButton
    // Error parsing type: , name: appLogoImageView
    // Error parsing type: , name: loadingActivityIndicator
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)onLongFrequencyButton:(id)arg1;
- (void)onMediumFrequencyButton:(id)arg1;
- (void)onShortFrequencyButton:(id)arg1;
@property(nonatomic, readonly) _Bool prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak UIActivityIndicatorView *loadingActivityIndicator; // @synthesize loadingActivityIndicator;
@property(nonatomic) __weak UIImageView *appLogoImageView; // @synthesize appLogoImageView;
@property(nonatomic) __weak _TtC8Stickers10BaseButton *restoreButton; // @synthesize restoreButton;
@property(nonatomic) __weak _TtC8Stickers14UICustomButton *shortFrequencyButton; // @synthesize shortFrequencyButton;
@property(nonatomic) __weak _TtC8Stickers14UICustomButton *mediumFrequencyButton; // @synthesize mediumFrequencyButton;
@property(nonatomic) __weak _TtC8Stickers14UICustomButton *longFrequencyButton; // @synthesize longFrequencyButton;
@property(nonatomic) __weak UILabel *shortPriceLabel; // @synthesize shortPriceLabel;
@property(nonatomic) __weak UILabel *mediumPriceLabel; // @synthesize mediumPriceLabel;
@property(nonatomic) __weak UILabel *longPriceLabel; // @synthesize longPriceLabel;
@property(nonatomic) __weak UILabel *shortDescriptionLabel; // @synthesize shortDescriptionLabel;
@property(nonatomic) __weak UILabel *mediumAverageLabel; // @synthesize mediumAverageLabel;
@property(nonatomic) __weak UILabel *longAverageLabel; // @synthesize longAverageLabel;

@end

