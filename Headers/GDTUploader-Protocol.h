//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTLifecycleProtocol-Protocol.h"
#import "GDTUploadPackageProtocol-Protocol.h"
#import "NSObject-Protocol.h"

@class GDTUploadPackage;

@protocol GDTUploader <NSObject, GDTLifecycleProtocol, GDTUploadPackageProtocol>
- (void)uploadPackage:(GDTUploadPackage *)arg1;
- (_Bool)readyToUploadWithConditions:(long long)arg1;
@end
