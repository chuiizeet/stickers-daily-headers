//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FIRStorageObservableTask.h"

#import "FIRStorageTaskManagement-Protocol.h"

@class FIRStorageMetadata, GTMSessionUploadFetcher, NSData, NSProgress, NSString, NSURL;

@interface FIRStorageUploadTask : FIRStorageObservableTask <FIRStorageTaskManagement>
{
    NSProgress *_progress;
    CDUnknownBlockType _fetcherCompletion;
    NSData *_uploadData;
    NSURL *_fileURL;
    FIRStorageMetadata *_uploadMetadata;
    GTMSessionUploadFetcher *_uploadFetcher;
}

@property(retain) GTMSessionUploadFetcher *uploadFetcher; // @synthesize uploadFetcher=_uploadFetcher;
@property(readonly, copy, nonatomic) FIRStorageMetadata *uploadMetadata; // @synthesize uploadMetadata=_uploadMetadata;
@property(readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, copy, nonatomic) NSData *uploadData; // @synthesize uploadData=_uploadData;
- (CDUnknownBlockType)fetcherCompletion;
- (void)setProgress:(id)arg1;
- (id)progress;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)cancel;
- (_Bool)isContentToUploadValid:(id *)arg1;
- (void)finishTaskWithStatus:(long long)arg1 snapshot:(id)arg2;
- (void)enqueue;
- (void)dealloc;
- (id)initWithReference:(id)arg1 fetcherService:(id)arg2 dispatchQueue:(id)arg3 file:(id)arg4 metadata:(id)arg5;
- (id)initWithReference:(id)arg1 fetcherService:(id)arg2 dispatchQueue:(id)arg3 data:(id)arg4 metadata:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
