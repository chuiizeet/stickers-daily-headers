//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8Stickers33BaseStickerPackCollectionViewCell.h"

@class NSArray, UIImageView, UILabel, UIStackView;

@interface _TtC8Stickers31CommunityPackCollectionViewCell : _TtC8Stickers33BaseStickerPackCollectionViewCell
{
    // Error parsing type: , name: coverImageView
    // Error parsing type: , name: numberOfStickersLabel
    // Error parsing type: , name: numberOfDownloadsLabel
    // Error parsing type: , name: packNameLabel
    // Error parsing type: , name: userNameLabel
    // Error parsing type: , name: numberOfStickersStackView
    // Error parsing type: , name: numberOfDownloadsStackView
    // Error parsing type: , name: stickerImages
    // Error parsing type: , name: category
    // Error parsing type: , name: heartLabel
}

- (void).cxx_destruct;
- (void)onRefreshCollectionViews:(id)arg1;
- (void)dealloc;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, copy) NSArray *stickerImages; // @synthesize stickerImages;
@property(nonatomic) __weak UIStackView *numberOfDownloadsStackView; // @synthesize numberOfDownloadsStackView;
@property(nonatomic) __weak UIStackView *numberOfStickersStackView; // @synthesize numberOfStickersStackView;
@property(nonatomic) __weak UILabel *userNameLabel; // @synthesize userNameLabel;
@property(nonatomic) __weak UILabel *packNameLabel; // @synthesize packNameLabel;
@property(nonatomic) __weak UILabel *numberOfDownloadsLabel; // @synthesize numberOfDownloadsLabel;
@property(nonatomic) __weak UILabel *numberOfStickersLabel; // @synthesize numberOfStickersLabel;
@property(nonatomic) __weak UIImageView *coverImageView; // @synthesize coverImageView;

@end

