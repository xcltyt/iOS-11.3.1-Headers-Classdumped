/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSURL, AVAssetResourceLoadingRequest;

@interface SUPastisOperation : ISOperation {

	NSURL* _certificateUrl;
	NSURL* _keyUrl;
	AVAssetResourceLoadingRequest* _loadingRequest;

}

@property (nonatomic,retain) AVAssetResourceLoadingRequest * loadingRequest;              //@synthesize loadingRequest=_loadingRequest - In the implementation block
@property (nonatomic,retain) NSURL * keyURL;                                              //@synthesize keyUrl=_keyUrl - In the implementation block
@property (nonatomic,retain) NSURL * certificateURL;                                      //@synthesize certificateUrl=_certificateUrl - In the implementation block
-(void)dealloc;
-(void)run;
-(id)_getURIWithError:(id*)arg1 ;
-(id)_getAppCertWithError:(id*)arg1 ;
-(id)_getCKCForSPC:(id)arg1 URI:(id)arg2 error:(id*)arg3 ;
-(NSURL *)certificateURL;
-(NSURL *)keyURL;
-(void)setKeyURL:(NSURL *)arg1 ;
-(AVAssetResourceLoadingRequest *)loadingRequest;
-(void)setLoadingRequest:(AVAssetResourceLoadingRequest *)arg1 ;
-(void)setCertificateURL:(NSURL *)arg1 ;
@end
