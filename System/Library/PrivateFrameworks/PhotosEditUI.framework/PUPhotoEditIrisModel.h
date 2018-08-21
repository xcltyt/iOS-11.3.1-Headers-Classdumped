/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosEditUI/PhotosEditUI-Structs.h>
#import <PhotosUI/PUViewModel.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PUEditableAsset;
@class PLPhotoEditModel, PUPhotoEditIrisModelChange;

@interface PUPhotoEditIrisModel : PUViewModel <NSCopying> {

	BOOL _videoEnabled;
	BOOL _ignoresUpdates;
	BOOL __assetHasAdjustments;
	unsigned short __editingVisibility;
	unsigned short __assetVisibility;
	id<PUEditableAsset> _asset;
	PLPhotoEditModel* _photoEditModel;

}

@property (setter=_setPhotoEditModel:,nonatomic,retain) PLPhotoEditModel * photoEditModel;                 //@synthesize photoEditModel=_photoEditModel - In the implementation block
@property (assign,setter=_setEditingVisibility:,nonatomic) unsigned short _editingVisibility;              //@synthesize _editingVisibility=__editingVisibility - In the implementation block
@property (nonatomic,readonly) unsigned short _assetVisibility;                                            //@synthesize _assetVisibility=__assetVisibility - In the implementation block
@property (nonatomic,readonly) BOOL _assetHasAdjustments;                                                  //@synthesize _assetHasAdjustments=__assetHasAdjustments - In the implementation block
@property (nonatomic,readonly) PUPhotoEditIrisModelChange * currentChange; 
@property (nonatomic,readonly) id<PUEditableAsset> asset;                                                  //@synthesize asset=_asset - In the implementation block
@property (assign,getter=isVideoEnabled,nonatomic) BOOL videoEnabled;                                      //@synthesize videoEnabled=_videoEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasUnsavedChanges; 
@property (assign,nonatomic) BOOL ignoresUpdates;                                                          //@synthesize ignoresUpdates=_ignoresUpdates - In the implementation block
+(void)updateChangeRequestForRevert:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<PUEditableAsset>)asset;
-(BOOL)hasUnsavedChanges;
-(PLPhotoEditModel *)photoEditModel;
-(PUPhotoEditIrisModelChange *)currentChange;
-(id)newViewModelChange;
-(BOOL)isVideoEnabled;
-(void)_photoEditModelDidChange:(id)arg1 ;
-(BOOL)reenablingLivePhotoShouldRemoveEdits;
-(void)setVideoEnabled:(BOOL)arg1 ;
-(void)_setPhotoEditModel:(id)arg1 ;
-(void)notifyCannotSupportVideoEdits;
-(id)initWithAsset:(id)arg1 editModel:(id)arg2 ;
-(void)setIgnoresUpdates:(BOOL)arg1 ;
-(void)updateChangeRequestForSave:(id)arg1 ;
-(id)initWithIrisVisibilityState:(unsigned short)arg1 hasAdjustments:(BOOL)arg2 editModel:(id)arg3 ;
-(void)_setHidden:(BOOL)arg1 explicit:(BOOL)arg2 supportable:(BOOL)arg3 ;
-(unsigned short)_editingVisibility;
-(unsigned short)_assetVisibility;
-(BOOL)_assetHasAdjustments;
-(void)_updateAutoDisableStateIfNeeded;
-(BOOL)ignoresUpdates;
-(void)_setEditingVisibility:(unsigned short)arg1 ;
@end
