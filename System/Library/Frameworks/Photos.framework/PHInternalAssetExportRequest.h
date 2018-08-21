/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetExportRequest.h>

@protocol OS_dispatch_queue;
@class NSObject, PHResourceDownloadRequest;

@interface PHInternalAssetExportRequest : PHAssetExportRequest {

	NSObject*<OS_dispatch_queue> _serialQueue;
	PHResourceDownloadRequest* _downloadRequest;

}
+(id)_variantsForAsset:(id)arg1 error:(id*)arg2 ;
+(id)exportRequestForAsset:(id)arg1 error:(id*)arg2 ;
-(id)_initWithAsset:(id)arg1 variants:(id)arg2 downloadRequest:(id)arg3 ;
-(void)preflightExportWithOptions:(id)arg1 isDownloadingRequired:(BOOL*)arg2 isProcessingRequired:(BOOL*)arg3 fileURLs:(id*)arg4 ;
-(void)exportWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
