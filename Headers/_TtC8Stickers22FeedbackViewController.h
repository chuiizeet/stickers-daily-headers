//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8Stickers24BasicPopUpViewController.h"

@class NSLayoutConstraint, UILabel, UIView, _TtC8Stickers12UICustomView, _TtC8Stickers16UICustomTextView;

@interface _TtC8Stickers22FeedbackViewController : _TtC8Stickers24BasicPopUpViewController
{
    // Error parsing type: , name: containerViewCenterYLayoutConstraint
    // Error parsing type: , name: backgroundView
    // Error parsing type: , name: containerView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: messageTextView
    // Error parsing type: , name: emailTextView
    // Error parsing type: , name: type
    // Error parsing type: , name: onSendHandler
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)onTapGesture:(id)arg1;
- (void)onSendButton:(id)arg1;
- (void)onCancelButton:(id)arg1;
- (void)onCloseButton:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak _TtC8Stickers16UICustomTextView *emailTextView; // @synthesize emailTextView;
@property(nonatomic) __weak _TtC8Stickers16UICustomTextView *messageTextView; // @synthesize messageTextView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak _TtC8Stickers12UICustomView *containerView; // @synthesize containerView;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView;
@property(nonatomic) __weak NSLayoutConstraint *containerViewCenterYLayoutConstraint; // @synthesize containerViewCenterYLayoutConstraint;

@end
