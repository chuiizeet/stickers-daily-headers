//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAdMultiProductCellDelegate-Protocol.h"
#import "FBAdScrollViewDelegate-Protocol.h"
#import "FBAdUpdatableView-Protocol.h"

@class FBAdMultiProductCell, NSArray, NSString;
@protocol FBAdMultiProductViewDelegate, FBAdScrollView;

@interface FBAdMultiProductView : UIView <FBAdMultiProductCellDelegate, FBAdScrollViewDelegate, FBAdUpdatableView>
{
    _Bool _loadedWasCalled;
    id <FBAdMultiProductViewDelegate> _delegate;
    NSArray *_multiProductAds;
    unsigned long long _multiProductCellStyle;
    UIView<FBAdScrollView> *_scrollView;
    FBAdMultiProductCell *_firstCell;
    CDUnknownBlockType _impressionBlock;
    CDUnknownBlockType _clickBlock;
}

+ (void)initialize;
@property(nonatomic) _Bool loadedWasCalled; // @synthesize loadedWasCalled=_loadedWasCalled;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(copy, nonatomic) CDUnknownBlockType impressionBlock; // @synthesize impressionBlock=_impressionBlock;
@property(nonatomic) __weak FBAdMultiProductCell *firstCell; // @synthesize firstCell=_firstCell;
@property(nonatomic) __weak UIView<FBAdScrollView> *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) unsigned long long multiProductCellStyle; // @synthesize multiProductCellStyle=_multiProductCellStyle;
@property(copy, nonatomic) NSArray *multiProductAds; // @synthesize multiProductAds=_multiProductAds;
@property(nonatomic) __weak id <FBAdMultiProductViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldUseLargeLayoutStyle;
- (void)multiProductCellClicked:(id)arg1 withPosition:(struct CGPoint)arg2 inRect:(struct CGRect)arg3;
- (void)multiProductCellLoadedAndVisible:(id)arg1;
@property(readonly, nonatomic) _Bool hasAdMedia;
- (void)setHidden:(_Bool)arg1;
- (void)updateView:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setMultiProductAds:(id)arg1 placementDefinition:(id)arg2 withImpressionHandler:(CDUnknownBlockType)arg3 withClickHandler:(CDUnknownBlockType)arg4;
- (id)initWithMultiProductCellStyle:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

