//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8Stickers19BasicViewController.h"

@class NSLayoutConstraint, UIScrollView, UITextField, UITextView, UIView;

@interface _TtC8Stickers40ReportInappropriateContentViewController : _TtC8Stickers19BasicViewController
{
    // Error parsing type: , name: nameTextField
    // Error parsing type: , name: emailTextField
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: contentTextView
    // Error parsing type: , name: contentView
    // Error parsing type: , name: contentViewCenterYLayoutConstraint
    // Error parsing type: , name: category
    // Error parsing type: , name: keyboardFrame
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)customKeyboardWillHideNotification:(id)arg1;
- (void)customKeyboardWillShowNotification:(id)arg1;
- (void)onReportButton:(id)arg1;
- (void)onCancelButton:(id)arg1;
- (void)onCloseButton:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
@property(nonatomic) __weak NSLayoutConstraint *contentViewCenterYLayoutConstraint; // @synthesize contentViewCenterYLayoutConstraint;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView;
@property(nonatomic) __weak UITextView *contentTextView; // @synthesize contentTextView;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView;
@property(nonatomic) __weak UITextField *emailTextField; // @synthesize emailTextField;
@property(nonatomic) __weak UITextField *nameTextField; // @synthesize nameTextField;

@end
