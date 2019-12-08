//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FNFAssetResourceLoadingContentInformationRequest, FNFAssetResourceLoadingDataRequest, NSDictionary, NSURLRequest, NSURLResponse;

@interface FNFAssetResourceLoadingRequest : NSObject
{
    CDUnknownBlockType _completionCallback;
    NSURLRequest *_request;
    FNFAssetResourceLoadingContentInformationRequest *_contentInformationRequest;
    FNFAssetResourceLoadingDataRequest *_dataRequest;
    NSURLResponse *_response;
    NSURLRequest *_redirect;
    NSDictionary *_metadataDictionary;
}

@property(copy, nonatomic) NSDictionary *metadataDictionary; // @synthesize metadataDictionary=_metadataDictionary;
@property(copy, nonatomic) NSURLRequest *redirect; // @synthesize redirect=_redirect;
@property(copy, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) FNFAssetResourceLoadingDataRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(readonly, nonatomic) FNFAssetResourceLoadingContentInformationRequest *contentInformationRequest; // @synthesize contentInformationRequest=_contentInformationRequest;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)finishLoadingWithMetadataDictionary:(id)arg1;
- (void)finishLoadingWithError:(id)arg1;
- (void)finishLoading;
- (id)initWithContentInformationRequest:(id)arg1 dataRequest:(id)arg2 urlRequest:(id)arg3 completionCallback:(CDUnknownBlockType)arg4;

@end

