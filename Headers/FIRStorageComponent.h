//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FIRLibrary-Protocol.h"
#import "FIRStorageMultiBucketProvider-Protocol.h"

@class FIRApp;

@interface FIRStorageComponent : NSObject <FIRLibrary, FIRStorageMultiBucketProvider>
{
    FIRApp *_app;
}

+ (id)componentsToRegister;
+ (void)load;
@property(readonly, nonatomic) __weak FIRApp *app; // @synthesize app=_app;
- (void).cxx_destruct;
- (id)storageForBucket:(id)arg1;
- (id)initWithApp:(id)arg1;

@end

