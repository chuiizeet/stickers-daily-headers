//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8Stickers19BasicViewController.h"

@class UIButton, UILabel, UIView;

@interface _TtC8Stickers22ProductsViewController : _TtC8Stickers19BasicViewController
{
    // Error parsing type: , name: yearlyPriceLabel
    // Error parsing type: , name: yearlyAverageLabel
    // Error parsing type: , name: yearlySaveLabel
    // Error parsing type: , name: monthlyPriceLabel
    // Error parsing type: , name: monthlyAverageLabel
    // Error parsing type: , name: monthlySaveLabel
    // Error parsing type: , name: weeklyPriceLabel
    // Error parsing type: , name: weeklyAverageLabel
    // Error parsing type: , name: yearlyView
    // Error parsing type: , name: monthlyView
    // Error parsing type: , name: weeklyView
    // Error parsing type: , name: openSubscriptionSettingsButton
    // Error parsing type: , name: config
    // Error parsing type: , name: purchaseManager
    // Error parsing type: , name: productsTask
    // Error parsing type: , name: productsTimer
    // Error parsing type: , name: longFrequencyAvgPrice
    // Error parsing type: , name: mediumFrequencyAvgPrice
    // Error parsing type: , name: shortFrequencyAvgPrice
    // Error parsing type: , name: popToRelease
    // Error parsing type: , name: onDismissHandler
    // Error parsing type: , name: showSubscriptionSettingsButton
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)onOpenSubscriptionSettingsButton:(id)arg1;
- (void)onWeeklyButton:(id)arg1;
- (void)onMonthlyButton:(id)arg1;
- (void)onYearlyButton:(id)arg1;
- (void)onCloseButton:(id)arg1;
- (void)onProductsTimer;
- (void)onIapProductArrival:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
@property(nonatomic, readonly) _Bool prefersStatusBarHidden;
@property(nonatomic) __weak UIButton *openSubscriptionSettingsButton; // @synthesize openSubscriptionSettingsButton;
@property(nonatomic) __weak UIView *weeklyView; // @synthesize weeklyView;
@property(nonatomic) __weak UIView *monthlyView; // @synthesize monthlyView;
@property(nonatomic) __weak UIView *yearlyView; // @synthesize yearlyView;
@property(nonatomic) __weak UILabel *weeklyAverageLabel; // @synthesize weeklyAverageLabel;
@property(nonatomic) __weak UILabel *weeklyPriceLabel; // @synthesize weeklyPriceLabel;
@property(nonatomic) __weak UILabel *monthlySaveLabel; // @synthesize monthlySaveLabel;
@property(nonatomic) __weak UILabel *monthlyAverageLabel; // @synthesize monthlyAverageLabel;
@property(nonatomic) __weak UILabel *monthlyPriceLabel; // @synthesize monthlyPriceLabel;
@property(nonatomic) __weak UILabel *yearlySaveLabel; // @synthesize yearlySaveLabel;
@property(nonatomic) __weak UILabel *yearlyAverageLabel; // @synthesize yearlyAverageLabel;
@property(nonatomic) __weak UILabel *yearlyPriceLabel; // @synthesize yearlyPriceLabel;

@end

