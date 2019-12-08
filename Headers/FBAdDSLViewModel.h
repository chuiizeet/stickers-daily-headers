//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBAdDSLModel, NSArray, NSDictionary;

@interface FBAdDSLViewModel : NSObject
{
    NSArray *_assets;
    FBAdDSLModel *_adModel;
    NSDictionary *_adRawData;
}

@property(copy, nonatomic) NSDictionary *adRawData; // @synthesize adRawData=_adRawData;
@property(retain, nonatomic) FBAdDSLModel *adModel; // @synthesize adModel=_adModel;
@property(readonly, copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (void).cxx_destruct;
- (id)objectForKeyOrNil:(id)arg1 ofClass:(Class)arg2 inDictionary:(id)arg3;
- (id)sanitizeJSONString:(id)arg1;
- (id)stringForKeyOrNil:(id)arg1 inDictionary:(id)arg2;
- (id)sanitizedStringForKeyOrNil:(id)arg1 inDictionary:(id)arg2;
- (id)dataDictionary;
- (id)htmlFileURL;
- (id)getAdJSONFieldForKey:(id)arg1;
- (id)commonAssetsDirectoriesURL;
- (_Bool)setLocalURLForAsset:(id)arg1 withURL:(id)arg2;
- (_Bool)isModelReadyToPresent;
- (id)initWithMetadata:(id)arg1 withSandboxAddress:(id)arg2;

@end
