/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosEditUI/PhotosEditUI-Structs.h>
#import <PhotosUICore/PXRunNode.h>
#import <libobjc.A.dylib/PUVideoURLExportNode.h>

@protocol PUVideoURLNode, PUImageInfoNode;
@class NUVideoExportClient, PLPhotoEditModel, NSString, NSURL, NSArray;

@interface PUVideoExportNode : PXRunNode <PUVideoURLExportNode> {

	NUVideoExportClient* _exportClient;
	id<PUVideoURLNode> _videoURLNode;
	id<PUImageInfoNode> _imageInfoNode;
	unsigned long long _quality;
	PLPhotoEditModel* _photoEditModel;
	NSString* _livePhotoPairingIdentifier;
	NSURL* _videoURL;
	CGSize _renderedVideoSize;

}

@property (nonatomic,retain) NSURL * videoURL;                                          //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,readonly) id<PUVideoURLNode> videoURLNode;                         //@synthesize videoURLNode=_videoURLNode - In the implementation block
@property (nonatomic,readonly) id<PUImageInfoNode> imageInfoNode;                       //@synthesize imageInfoNode=_imageInfoNode - In the implementation block
@property (nonatomic,readonly) unsigned long long quality;                              //@synthesize quality=_quality - In the implementation block
@property (nonatomic,readonly) double progress; 
@property (nonatomic,copy,readonly) PLPhotoEditModel * photoEditModel;                  //@synthesize photoEditModel=_photoEditModel - In the implementation block
@property (nonatomic,copy,readonly) NSString * livePhotoPairingIdentifier;              //@synthesize livePhotoPairingIdentifier=_livePhotoPairingIdentifier - In the implementation block
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
@property (nonatomic,readonly) CGSize renderedVideoSize;                                //@synthesize renderedVideoSize=_renderedVideoSize - In the implementation block
-(double)progress;
-(void)run;
-(PLPhotoEditModel *)photoEditModel;
-(void)didCancel;
-(void)setVideoURL:(NSURL *)arg1 ;
-(NSURL *)videoURL;
-(id<PUVideoURLNode>)videoURLNode;
-(id)_editSource;
-(id)_newOutputURL;
-(id)_exportPresetName;
-(void)_handleExportCompletedWithSuccess:(BOOL)arg1 editedSize:(CGSize)arg2 error:(id)arg3 ;
-(CGSize)renderedVideoSize;
-(id)initWithVideoURLNode:(id)arg1 imageURLNode:(id)arg2 quality:(unsigned long long)arg3 livePhotoPairingIdentifier:(id)arg4 photoEditModel:(id)arg5 ;
-(id<PUImageInfoNode>)imageInfoNode;
-(NSString *)livePhotoPairingIdentifier;
-(unsigned long long)quality;
@end
