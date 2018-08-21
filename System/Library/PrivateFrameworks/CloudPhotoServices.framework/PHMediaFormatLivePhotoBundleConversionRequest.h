/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoServices.framework/CloudPhotoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoServices/PHMediaFormatConversionCompositeRequest.h>

@class PHMediaFormatLivePhotoConversionRequest;

@interface PHMediaFormatLivePhotoBundleConversionRequest : PHMediaFormatConversionCompositeRequest {

	PHMediaFormatLivePhotoConversionRequest* _livePhotoConversionRequest;

}

@property (retain) PHMediaFormatLivePhotoConversionRequest * livePhotoConversionRequest;              //@synthesize livePhotoConversionRequest=_livePhotoConversionRequest - In the implementation block
-(BOOL)prepareWithError:(id*)arg1 ;
-(void)enumerateSubrequests:(/*^block*/id)arg1 ;
-(void)postProcessSuccessfulCompositeRequest;
-(void)enqueueSubrequestsOnConversionManager:(id)arg1 ;
-(void)setLivePhotoConversionRequest:(PHMediaFormatLivePhotoConversionRequest *)arg1 ;
-(PHMediaFormatLivePhotoConversionRequest *)livePhotoConversionRequest;
@end
