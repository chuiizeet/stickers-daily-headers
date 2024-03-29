//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GADSettings : NSObject
{
    struct sqlite3 *_database;
    NSMutableDictionary *_values;
    NSMutableDictionary *_temporaryValues;
    NSMutableDictionary *_valuesToWrite;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSObject<OS_dispatch_queue> *_writeQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)writeUpdatedValues:(id)arg1;
- (void)writeUpdates;
- (id)dictionaryForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (id)stringsForKeys:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)internalObjectForKey:(id)arg1;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (void)setJSONObject:(id)arg1 forKey:(id)arg2;
- (void)addTemporaryEntriesFromDictionary:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)updateValuesWithString:(id)arg1 forKey:(id)arg2;
- (_Bool)openDatabase;
- (void)loadDatabaseValues;
- (void)dealloc;
- (id)init;

@end

