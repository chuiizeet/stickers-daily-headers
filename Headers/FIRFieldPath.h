//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface FIRFieldPath : NSObject <NSCopying>
{
    struct FieldPath _internalValue;
}

+ (id)reservedCharactersRegex;
+ (id)pathWithDotSeparatedString:(id)arg1;
+ (id)documentID;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct FieldPath *)internalValue;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initPrivate:(struct FieldPath)arg1;
- (id)initWithFields:(id)arg1;

@end
