//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface FBAdIconButton : UIButton
{
    unsigned long long _iconStyle;
}

@property(readonly, nonatomic) unsigned long long iconStyle; // @synthesize iconStyle=_iconStyle;
- (void)setDefaultColorStyle;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFillColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)initWithIconStyle:(unsigned long long)arg1;

@end
