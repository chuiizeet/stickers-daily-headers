//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8Stickers16TextFieldEffects.h"

@class NSString, UIColor;

@interface _TtC8Stickers14DailyTextField : _TtC8Stickers16TextFieldEffects
{
    // Error parsing type: , name: changedText
    // Error parsing type: , name: dailyDelegate
    // Error parsing type: , name: borderInactiveColor
    // Error parsing type: , name: borderActiveColor
    // Error parsing type: , name: placeholderColor
    // Error parsing type: , name: placeholderFontScale
    // Error parsing type: , name: borderThickness
    // Error parsing type: , name: placeholderInsets
    // Error parsing type: , name: textFieldInsets
    // Error parsing type: , name: inactiveBorderLayer
    // Error parsing type: , name: activeBorderLayer
    // Error parsing type: , name: activePlaceholderPoint
}

- (void).cxx_destruct;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
@property(nonatomic) struct CGRect bounds;
@property(nonatomic, copy) NSString *placeholder;
- (void)onButtonClick;
@property(nonatomic, copy) NSString *setRightButtonName;
@property(nonatomic, copy) NSString *setRightImageName;
@property(nonatomic) double placeholderFontScale; // @synthesize placeholderFontScale;
@property(nonatomic, retain) UIColor *placeholderColor; // @synthesize placeholderColor;
@property(nonatomic, retain) UIColor *borderActiveColor; // @synthesize borderActiveColor;
@property(nonatomic, retain) UIColor *borderInactiveColor; // @synthesize borderInactiveColor;
- (void)textFieldDidEndEditing;
- (void)textFieldDidBeginEditing;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

