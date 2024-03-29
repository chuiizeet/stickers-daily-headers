//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADSignal-Protocol.h"

@class NSString;

@interface GADDeviceOrientationSignals : NSObject <GADSignal>
{
    NSString *_supportedInterfaceOrientationsForKeyWindow;
    NSString *_supportedInterfaceOrientationsForMainWindow;
    struct CGRect _standardizedMainScreenPortraitBounds;
    _Bool _orientationLandscape;
    long long _interfaceOrientation;
    struct CGSize _standardizedOrientedKeyWindowSize;
    struct CGRect _standardizedOrientedApplicationFrame;
}

+ (id)signalSource;
@property(readonly, nonatomic) struct CGRect standardizedOrientedApplicationFrame; // @synthesize standardizedOrientedApplicationFrame=_standardizedOrientedApplicationFrame;
@property(readonly, nonatomic) struct CGSize standardizedOrientedKeyWindowSize; // @synthesize standardizedOrientedKeyWindowSize=_standardizedOrientedKeyWindowSize;
@property(readonly, nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, nonatomic) _Bool orientationLandscape; // @synthesize orientationLandscape=_orientationLandscape;
- (void).cxx_destruct;
- (void)addSignalEntriesToMutableDictionary:(id)arg1;
@property(readonly, nonatomic) struct CGSize standardizedPortraitKeyWindowSize;
@property(readonly, nonatomic) struct CGRect standardizedOrientedScreenBounds;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

