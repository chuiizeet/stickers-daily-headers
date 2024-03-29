//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FSTReferenceDelegate-Protocol.h"
#import "FSTTransactional-Protocol.h"

@class FSTMemoryPersistence, NSString;

@interface FSTMemoryEagerReferenceDelegate : NSObject <FSTReferenceDelegate, FSTTransactional>
{
    struct unique_ptr<std::__1::unordered_set<firebase::firestore::model::DocumentKey, firebase::firestore::model::DocumentKeyHash, std::__1::equal_to<firebase::firestore::model::DocumentKey>, std::__1::allocator<firebase::firestore::model::DocumentKey>>, std::__1::default_delete<std::__1::unordered_set<firebase::firestore::model::DocumentKey, firebase::firestore::model::DocumentKeyHash, std::__1::equal_to<firebase::firestore::model::DocumentKey>, std::__1::allocator<firebase::firestore::model::DocumentKey>>>> _orphaned;
    FSTMemoryPersistence *_persistence;
    struct ReferenceSet *_additionalReferences;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)commitTransaction;
- (_Bool)mutationQueuesContainKey:(const struct DocumentKey *)arg1;
- (void)startTransaction:(struct string_view)arg1;
- (void)limboDocumentUpdated:(const struct DocumentKey *)arg1;
- (_Bool)isReferenced:(const struct DocumentKey *)arg1;
- (void)removeMutationReference:(const struct DocumentKey *)arg1;
- (void)removeReference:(const struct DocumentKey *)arg1;
- (void)addReference:(const struct DocumentKey *)arg1;
- (void)removeTarget:(const struct QueryData *)arg1;
- (void)addInMemoryPins:(struct ReferenceSet *)arg1;
@property(readonly, nonatomic) long long currentSequenceNumber;
- (id)initWithPersistence:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

