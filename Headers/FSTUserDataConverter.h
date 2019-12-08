//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FSTUserDataConverter : NSObject
{
    struct DatabaseId _databaseID;
    CDUnknownBlockType _preConverter;
}

@property(readonly, nonatomic) CDUnknownBlockType preConverter; // @synthesize preConverter=_preConverter;
- (id).cxx_construct;
- (void).cxx_destruct;
- (vector_51b5b3c0)parseArrayTransformElements:(id)arg1;
- (optional_0d4b65d9)parseScalarValue:(id)arg1 context:(struct ParseContext *)arg2;
- (void)parseSentinelFieldValue:(id)arg1 context:(struct ParseContext *)arg2;
- (struct FieldValue)parseArray:(id)arg1 context:(struct ParseContext *)arg2;
- (struct FieldValue)parseDictionary:(id)arg1 context:(struct ParseContext *)arg2;
- (optional_0d4b65d9)parseData:(id)arg1 context:(struct ParseContext *)arg2;
- (struct FieldValue)parsedQueryValue:(id)arg1;
- (struct ParsedUpdateData)parsedUpdateData:(id)arg1;
- (struct ParsedSetData)parsedMergeData:(id)arg1 fieldMask:(id)arg2;
- (struct ParsedSetData)parsedSetData:(id)arg1;
- (id)initWithDatabaseID:(struct DatabaseId)arg1 preConverter:(CDUnknownBlockType)arg2;

@end

