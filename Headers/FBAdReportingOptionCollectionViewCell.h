//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel;

@interface FBAdReportingOptionCollectionViewCell : UICollectionViewCell
{
    NSString *_optionTitle;
    UILabel *_optionTitleLabel;
}

+ (id)reuseId;
@property(retain, nonatomic) UILabel *optionTitleLabel; // @synthesize optionTitleLabel=_optionTitleLabel;
@property(copy, nonatomic) NSString *optionTitle; // @synthesize optionTitle=_optionTitle;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)selectedTextColor;
- (id)selectedBackgroundColor;
- (id)unselectedTextColor;
- (id)unselectedBackgroundColor;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;

@end

