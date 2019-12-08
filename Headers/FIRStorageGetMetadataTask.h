//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FIRStorageTask.h"

#import "FIRStorageTaskManagement-Protocol.h"

@class GTMSessionFetcher, NSString;

@interface FIRStorageGetMetadataTask : FIRStorageTask <FIRStorageTaskManagement>
{
    CDUnknownBlockType _completion;
    GTMSessionFetcher *_fetcher;
    CDUnknownBlockType _fetcherCompletion;
}

- (CDUnknownBlockType)fetcherCompletion;
- (void)setFetcher:(id)arg1;
- (id)fetcher;
- (void).cxx_destruct;
- (void)enqueue;
- (void)dealloc;
- (id)initWithReference:(id)arg1 fetcherService:(id)arg2 dispatchQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

