/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXRunNode.h>
#import <libobjc.A.dylib/PUImageDataNode.h>
#import <libobjc.A.dylib/PUImageInfoNode.h>

@protocol PUEditableAsset;
@class NSData, NSURL, NSString, PUEditableMediaProvider, NSArray;

@interface PUEditableMediaProviderImageDataNode : PXRunNode <PUImageDataNode, PUImageInfoNode> {

	int _requestID;
	NSData* _imageData;
	NSURL* _imageDataURL;
	NSString* _imageDataUTI;
	long long _imageExifOrientation;
	long long _version;
	id<PUEditableAsset> _asset;
	PUEditableMediaProvider* _mediaProvider;

}

@property (nonatomic,readonly) long long version;                                    //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) id<PUEditableAsset> asset;                            //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) PUEditableMediaProvider * mediaProvider;              //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long state; 
@property (getter=isWaiting,readonly) BOOL waiting; 
@property (getter=isRunning,readonly) BOOL running; 
@property (getter=isComplete,readonly) BOOL complete; 
@property (getter=isCanceled,readonly) BOOL canceled; 
@property (assign,nonatomic,__weak) id<PXRunNodeDelegate> delegate; 
@property (nonatomic,copy,readonly) NSArray * dependencies; 
@property (nonatomic,readonly) NSData * imageData;                                   //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,readonly) NSURL * imageDataURL;                                 //@synthesize imageDataURL=_imageDataURL - In the implementation block
@property (nonatomic,readonly) NSString * imageDataUTI;                              //@synthesize imageDataUTI=_imageDataUTI - In the implementation block
@property (nonatomic,readonly) long long imageExifOrientation;                       //@synthesize imageExifOrientation=_imageExifOrientation - In the implementation block
-(long long)version;
-(void)run;
-(id<PUEditableAsset>)asset;
-(void)didCancel;
-(PUEditableMediaProvider *)mediaProvider;
-(NSData *)imageData;
-(void)_handleLoadedImageData:(id)arg1 imageUTI:(id)arg2 imageOrientation:(long long)arg3 info:(id)arg4 ;
-(NSURL *)imageDataURL;
-(NSString *)imageDataUTI;
-(long long)imageExifOrientation;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 version:(long long)arg3 ;
@end
