//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UIStackView, _TtC8Stickers14UICustomButton;

@interface _TtC8Stickers16CustomReviewView : UIView
{
    // Error parsing type: , name: logManager
    // Error parsing type: , name: contentView
    // Error parsing type: , name: questionLabel
    // Error parsing type: , name: cancelButton
    // Error parsing type: , name: confirmButton
    // Error parsing type: , name: messageLabel
    // Error parsing type: , name: buttonsStackView
    // Error parsing type: , name: step
    // Error parsing type: , name: timer
    // Error parsing type: , name: onDismiss
    // Error parsing type: , name: onImprove
    // Error parsing type: , name: onAppReview
}

- (void).cxx_destruct;
- (void)onTimerSorry;
- (void)onTimerGreat;
- (void)processStep;
- (void)onCancelButton:(id)arg1;
- (void)onCloseButton:(id)arg1;
- (void)onConfirmButton:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak UIStackView *buttonsStackView; // @synthesize buttonsStackView;
@property(nonatomic) __weak UILabel *messageLabel; // @synthesize messageLabel;
@property(nonatomic) __weak _TtC8Stickers14UICustomButton *confirmButton; // @synthesize confirmButton;
@property(nonatomic) __weak _TtC8Stickers14UICustomButton *cancelButton; // @synthesize cancelButton;
@property(nonatomic) __weak UILabel *questionLabel; // @synthesize questionLabel;
@property(nonatomic, retain) UIView *contentView; // @synthesize contentView;

@end

