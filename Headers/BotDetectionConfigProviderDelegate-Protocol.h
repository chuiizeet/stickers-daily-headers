//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol BotDetectionConfigProviderDelegate <NSObject>
- (_Bool)isNativeSignalJailbrokenEnabled;
- (_Bool)isNativeSignalTouchEnabled;
- (_Bool)isNativeSignalReachabilityEnabled;
- (_Bool)isNativeSignalCaptiveNetworkEnabled;
- (_Bool)isNativeSignalUIDeviceEnabled;
- (_Bool)isNativeSignalUIApplicationEnabled;
- (_Bool)isNativeSignalTelephonyEnabled;
- (_Bool)isNativeSignalSimulatorEnabled;
- (_Bool)isNativeSignalScreenEnabled;
- (_Bool)isNativeSignalProxyEnabled;
- (_Bool)isNativeSignalProcessInfoEnabled;
- (_Bool)isNativeSignalOtherUIThreadEnabled;
- (_Bool)isNativeSignalNetworkEnabled;
- (_Bool)isNativeSignalMotionEnabled;
- (_Bool)isNativeSignalLocationEnabled;
- (_Bool)isNativeSignalLocalAuthEnabled;
- (_Bool)isNativeSignalCameraEnabled;
- (_Bool)isNativeSignalBundleEnabled;
- (_Bool)isNativeSignalBuildEnabled;
- (_Bool)isNativeSignalBootEnabled;
- (_Bool)isNativeSignalBatteryEnabled;
- (_Bool)isNativeSignalAudioEnabled;
- (_Bool)isNativeSignalCollectionEventModeEnabled;
- (long long)signalCollectionIntervalTime;
- (unsigned long long)nativeSignalsBufferSize;
- (_Bool)isNativeSignalIntervalModeEnabled;
- (NSString *)woNetworkSignalUrlString;
- (unsigned long long)networkSignalSamplingRateForProductType:(unsigned long long)arg1;
- (unsigned long long)largePayloadSamplingRate;
- (unsigned long long)payloadSize;
- (_Bool)isWONetworkSignalLargePayloadEnabled;
- (_Bool)isBotDetectionEnabledForProductType:(unsigned long long)arg1;
@end

