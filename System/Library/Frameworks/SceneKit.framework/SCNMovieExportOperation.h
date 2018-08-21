/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/_SCNExportOperation.h>

@class AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, AVAssetWriter;

@interface SCNMovieExportOperation : _SCNExportOperation {

	AVAssetWriterInput* _assetWriterInput;
	AVAssetWriterInputPixelBufferAdaptor* _avAdaptor;
	AVAssetWriter* _assetWriter;
	float _rate;
	BOOL _mirrored;
	float _supersampling;

}
-(void)dealloc;
-(void)main;
-(id)initWithRenderer:(id)arg1 size:(CGSize)arg2 attributes:(id)arg3 outputURL:(id)arg4 ;
-(CGImageRef)_copySnapshot:(CGSize)arg1 ;
-(void)renderAndAppendWithPresentationTime:(SCD_Struct_SC136)arg1 usingAdaptor:(id)arg2 metalTextureCache:(CVMetalTextureCacheRef)arg3 cvQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)appendImage:(CGImageRef)arg1 withPresentationTime:(SCD_Struct_SC136)arg2 usingAdaptor:(id)arg3 ;
-(void)_finishedExport;
-(void)_setupMovieToWritableFile:(id)arg1 ;
@end
