//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIRDocumentReference, FIRSnapshotMetadata, NSString;

@interface FIRDocumentSnapshot : NSObject
{
    struct DocumentSnapshot _snapshot;
    FIRSnapshotMetadata *_cachedMetadata;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)convertedObject:(const SortedMap_50e2822c *)arg1 options:(const struct FieldValueOptions *)arg2;
- (id)convertedArray:(const vector_51b5b3c0 *)arg1 options:(const struct FieldValueOptions *)arg2;
- (id)convertedReference:(const struct FieldValue *)arg1;
- (id)convertedServerTimestamp:(const struct FieldValue *)arg1 options:(const struct FieldValueOptions *)arg2;
- (id)convertedTimestamp:(const struct FieldValue *)arg1 options:(const struct FieldValueOptions *)arg2;
- (id)convertedValue:(struct FieldValue)arg1 options:(const struct FieldValueOptions *)arg2;
- (struct FieldValueOptions)optionsForServerTimestampBehavior:(long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)valueForField:(id)arg1 serverTimestampBehavior:(long long)arg2;
- (id)valueForField:(id)arg1;
- (id)dataWithServerTimestampBehavior:(long long)arg1;
- (id)data;
@property(readonly, nonatomic) FIRSnapshotMetadata *metadata; // @dynamic metadata;
@property(readonly, copy, nonatomic) NSString *documentID;
@property(readonly, nonatomic) FIRDocumentReference *reference;
- (const optional_0ae1c4d0 *)internalDocument;
@property(readonly, nonatomic) _Bool exists; // @dynamic exists;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithFirestore:(shared_ptr_e3fec009)arg1 documentKey:(struct DocumentKey)arg2 document:(const optional_0ae1c4d0 *)arg3 fromCache:(_Bool)arg4 hasPendingWrites:(_Bool)arg5;
- (id)initWithFirestore:(shared_ptr_e3fec009)arg1 documentKey:(struct DocumentKey)arg2 document:(const optional_0ae1c4d0 *)arg3 metadata:(struct SnapshotMetadata)arg4;
- (id)initWithSnapshot:(struct DocumentSnapshot *)arg1;

@end
