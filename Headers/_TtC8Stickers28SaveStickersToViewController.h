//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8Stickers19BasicViewController.h"

@class UIButton, UILabel, UIStackView, UIView, _TtC8Stickers10BaseButton, _TtC8Stickers12SelectButton, _TtC8Stickers14UICustomButton;

@interface _TtC8Stickers28SaveStickersToViewController : _TtC8Stickers19BasicViewController
{
    // Error parsing type: , name: containerView
    // Error parsing type: , name: rememberMyChoiceButton
    // Error parsing type: , name: reportButton
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: stickerButtonsStackView
    // Error parsing type: , name: favoriteButton
    // Error parsing type: , name: shareButton
    // Error parsing type: , name: customizeButton
    // Error parsing type: , name: selectedDestination
    // Error parsing type: , name: stickerPack
    // Error parsing type: , name: sticker
    // Error parsing type: , name: stickerImage
    // Error parsing type: , name: onCallFreeCategory
    // Error parsing type: , name: onStartDownloading
    // Error parsing type: , name: onFavoriteButton
    // Error parsing type: , name: onShareButton
    // Error parsing type: , name: onEditImageButton
    // Error parsing type: , name: onDismiss
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)onCustomizeButton:(id)arg1;
- (void)onShareButton:(id)arg1;
- (void)onFavoriteButton:(id)arg1;
- (void)onReportButton:(id)arg1;
- (void)onLibraryButton:(id)arg1;
- (void)onWhatsAppButton:(id)arg1;
- (void)onIMessageButton:(id)arg1;
- (void)onRememberMyChoiceButton:(id)arg1;
- (void)onCloseButton:(id)arg1;
- (void)onContainerViewTap:(id)arg1;
- (void)onBackgroundViewTap:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak _TtC8Stickers14UICustomButton *customizeButton; // @synthesize customizeButton;
@property(nonatomic) __weak _TtC8Stickers14UICustomButton *shareButton; // @synthesize shareButton;
@property(nonatomic) __weak _TtC8Stickers12SelectButton *favoriteButton; // @synthesize favoriteButton;
@property(nonatomic) __weak UIStackView *stickerButtonsStackView; // @synthesize stickerButtonsStackView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak _TtC8Stickers10BaseButton *reportButton; // @synthesize reportButton;
@property(nonatomic) __weak UIButton *rememberMyChoiceButton; // @synthesize rememberMyChoiceButton;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView;

@end

