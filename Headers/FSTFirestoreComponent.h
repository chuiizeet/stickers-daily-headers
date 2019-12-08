//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FIRComponentLifecycleMaintainer-Protocol.h"
#import "FIRLibrary-Protocol.h"
#import "FSTFirestoreInstanceRegistry-Protocol.h"
#import "FSTFirestoreMultiDBProvider-Protocol.h"

@class FIRApp, NSMutableDictionary;

@interface FSTFirestoreComponent : NSObject <FIRComponentLifecycleMaintainer, FIRLibrary, FSTFirestoreInstanceRegistry, FSTFirestoreMultiDBProvider>
{
    NSMutableDictionary *_instances;
    FIRApp *_app;
}

+ (id)componentsToRegister;
+ (void)load;
@property(readonly, nonatomic) __weak FIRApp *app; // @synthesize app=_app;
@property(retain, nonatomic) NSMutableDictionary *instances; // @synthesize instances=_instances;
- (void).cxx_destruct;
- (void)appWillBeDeleted:(id)arg1;
- (void)removeInstanceWithDatabase:(id)arg1;
- (id)firestoreForDatabase:(id)arg1;
- (id)keyForDatabase:(id)arg1;
- (id)initWithApp:(id)arg1;

@end
