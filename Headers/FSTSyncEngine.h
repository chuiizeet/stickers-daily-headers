//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FSTRemoteSyncer-Protocol.h"

@class FSTLocalStore;

@interface FSTSyncEngine : NSObject <FSTRemoteSyncer>
{
    struct RemoteStore *_remoteStore;
    struct SyncEngineCallback *_callback;
    struct TargetIdGenerator _targetIdGenerator;
    struct unordered_map<firebase::firestore::auth::User, NSMutableDictionary<NSNumber *, void (^)(NSError *)>*, firebase::firestore::auth::HashUser, std::__1::equal_to<firebase::firestore::auth::User>, std::__1::allocator<std::__1::pair<const firebase::firestore::auth::User, NSMutableDictionary<NSNumber *, void (^)(NSError *)>*>>> _mutationCompletionBlocks;
    struct unordered_map<int, std::__1::vector<std::__1::function<void (firebase::firestore::util::Status)>, std::__1::allocator<std::__1::function<void (firebase::firestore::util::Status)>>>, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, std::__1::vector<std::__1::function<void (firebase::firestore::util::Status)>, std::__1::allocator<std::__1::function<void (firebase::firestore::util::Status)>>>>>> _pendingWritesCallbacks;
    struct unordered_map<firebase::firestore::core::Query, FSTQueryView *, std::__1::hash<firebase::firestore::core::Query>, std::__1::equal_to<firebase::firestore::core::Query>, std::__1::allocator<std::__1::pair<const firebase::firestore::core::Query, FSTQueryView *>>> _queryViewsByQuery;
    struct unordered_map<int, FSTQueryView *, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, FSTQueryView *>>> _queryViewsByTarget;
    map_947aefb7 _limboTargetsByKey;
    struct map<int, LimboResolution, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, LimboResolution>>> _limboResolutionsByTarget;
    struct User _currentUser;
    struct ReferenceSet _limboDocumentRefs;
    FSTLocalStore *_localStore;
}

@property(readonly, nonatomic) FSTLocalStore *localStore; // @synthesize localStore=_localStore;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isRetryableTransactionError:(const struct Status *)arg1;
- (_Bool)errorIsInteresting:(id)arg1;
- (SortedSet_8472c2f7)remoteKeysForTarget:(int)arg1;
- (void)credentialDidChangeWithUser:(const struct User *)arg1;
- (map_947aefb7)currentLimboDocuments;
- (void)removeLimboTargetForKey:(const struct DocumentKey *)arg1;
- (void)trackLimboChange:(const struct LimboDocumentChange *)arg1;
- (void)updateTrackedLimboDocumentsWithChanges:(const vector_2b4e01ff *)arg1 targetID:(int)arg2;
- (void)emitNewSnapshotsAndNotifyLocalStoreWithChanges:(const SortedMap_4bc8f18e *)arg1 remoteEvent:(const optional_088ebe99 *)arg2;
- (void)removeAndCleanupQuery:(id)arg1;
- (void)assertCallbackExistsForSelector:(SEL)arg1;
- (void)processUserCallbacksForBatchID:(int)arg1 error:(id)arg2;
- (void)rejectFailedWriteWithBatchID:(int)arg1 error:(id)arg2;
- (void)applySuccessfulWriteWithResult:(const struct MutationBatchResult *)arg1;
- (void)rejectListenWithTargetID:(int)arg1 error:(id)arg2;
- (void)applyChangedOnlineState:(int)arg1;
- (void)applyRemoteEvent:(const struct RemoteEvent *)arg1;
- (void)transactionWithRetries:(int)arg1 workerQueue:(const shared_ptr_ada94aa4 *)arg2 updateCallback:(function_84151aa3)arg3 resultCallback:(function_10d5c2f3)arg4;
- (void)addMutationCompletionBlock:(CDUnknownBlockType)arg1 batchID:(int)arg2;
- (void)failOutstandingPendingWritesAwaitingCallbacks:(struct string_view)arg1;
- (void)triggerPendingWriteCallbacksWithBatchId:(int)arg1;
- (void)registerPendingWritesCallback:(function_f1214db1)arg1;
- (void)writeMutations:(vector_ea6b9d7e *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopListeningToQuery:(const struct Query *)arg1;
- (struct ViewSnapshot)initializeViewAndComputeSnapshotForQueryData:(const struct QueryData *)arg1;
- (int)listenToQuery:(struct Query)arg1;
- (void)setCallback:(struct SyncEngineCallback *)arg1;
- (id)initWithLocalStore:(id)arg1 remoteStore:(struct RemoteStore *)arg2 initialUser:(const struct User *)arg3;

@end

