//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8Stickers24BasicPopUpViewController.h"

@class UIImageView, UILabel, UIStackView, _TtC8Stickers12UICustomView, _TtC8Stickers18UIImageViewLoading;

@interface _TtC8Stickers36DailyPackUnlockedPopUpViewController : _TtC8Stickers24BasicPopUpViewController
{
    // Error parsing type: , name: containerView
    // Error parsing type: , name: stickerPackCoverImageView
    // Error parsing type: , name: stickerPackNameLabel
    // Error parsing type: , name: stickerPackDownloadNumberLabel
    // Error parsing type: , name: downloadsStackView
    // Error parsing type: , name: loadingImageView
    // Error parsing type: , name: onCloseHandler
    // Error parsing type: , name: onCheckItOutHandler
    // Error parsing type: , name: stickerPack
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)onCheckItOutButton:(id)arg1;
- (void)onCloseButton:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak _TtC8Stickers18UIImageViewLoading *loadingImageView; // @synthesize loadingImageView;
@property(nonatomic) __weak UIStackView *downloadsStackView; // @synthesize downloadsStackView;
@property(nonatomic) __weak UILabel *stickerPackDownloadNumberLabel; // @synthesize stickerPackDownloadNumberLabel;
@property(nonatomic) __weak UILabel *stickerPackNameLabel; // @synthesize stickerPackNameLabel;
@property(nonatomic) __weak UIImageView *stickerPackCoverImageView; // @synthesize stickerPackCoverImageView;
@property(nonatomic) __weak _TtC8Stickers12UICustomView *containerView; // @synthesize containerView;

@end

