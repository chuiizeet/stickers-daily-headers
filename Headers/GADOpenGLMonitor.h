//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADFullScreenAdViewController, GADObserverCollection, GADWebAdView;

@interface GADOpenGLMonitor : NSObject
{
    GADWebAdView *_webAdView;
    GADFullScreenAdViewController *_presenter;
    GADObserverCollection *_didActivateObservers;
    GADObserverCollection *_willDeactivateObservers;
}

- (void).cxx_destruct;
- (void)sceneDidBecomeActive;
- (void)sceneWillResignActive;
- (id)initWithPresenter:(id)arg1 webAdView:(id)arg2;

@end

