//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAdPlayableView, NSError;

@protocol FBAdPlayableViewDelegate <NSObject>
- (void)playableViewDidTerminate:(FBAdPlayableView *)arg1;
- (void)playableView:(FBAdPlayableView *)arg1 didFailWithError:(NSError *)arg2;
- (void)playableViewWillClose:(FBAdPlayableView *)arg1;
- (void)playableViewClicked:(FBAdPlayableView *)arg1;
- (void)playableViewDidCompleteForcedView:(FBAdPlayableView *)arg1;
- (void)playableViewWillLogImpression:(FBAdPlayableView *)arg1;
- (void)playableViewDidLoad:(FBAdPlayableView *)arg1;
@end

