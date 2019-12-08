//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADMediatedNativeAd-Protocol.h"

@class GADNativeAdImage, NSArray, NSDecimalNumber, NSString, UIView;

@protocol GADMediatedNativeAppInstallAd <GADMediatedNativeAd>
- (NSString *)price;
- (NSString *)store;
- (NSDecimalNumber *)starRating;
- (NSString *)callToAction;
- (GADNativeAdImage *)icon;
- (NSString *)body;
- (NSArray *)images;
- (NSString *)headline;

@optional
- (_Bool)hasVideoContent;
- (UIView *)mediaView;
- (UIView *)adChoicesView;
@end

