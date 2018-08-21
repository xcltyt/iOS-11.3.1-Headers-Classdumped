/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLPhotoLibrary, PLCloudPhotoLibraryManager;

@interface PLCloudBatchDownloader : NSObject {

	PLPhotoLibrary* _photoLibrary;
	PLCloudPhotoLibraryManager* _manager;

}
+(id)_adjustmentStateDictionaryForComparingIncomingFaceRecordForAsset:(id)arg1 ;
-(void)dealloc;
-(id)initWithLibrary:(id)arg1 withManager:(id)arg2 ;
-(id)deletedRecordUuidsFromBatch:(id)arg1 ;
-(id)handleIncomingBatch:(id)arg1 ;
-(id)_mergeTargetFromPersons:(id)arg1 ;
-(void)_saveIfNeeded;
-(void)_triggerBackgroundDownloadFailureForResources:(id)arg1 ;
-(id)_handleMasterRecords:(id)arg1 inLibrary:(id)arg2 ;
-(id)_findMaster:(id)arg1 fromAdditionalRecordInBatch:(id)arg2 inLibrary:(id)arg3 ;
-(void)_processNotificationUpdatesForMemories:(id)arg1 ;
-(void)_mergeExistingPersonsWithPerson:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(id)_debugPrintAlbumOrderForAssets:(id)arg1 ;
-(id)_handlePersonRecords:(id)arg1 inLibrary:(id)arg2 includesTiboSchema:(BOOL*)arg3 ;
-(void)_dropDeferredRebuildFacesInPhotoLibrary:(id)arg1 ;
-(void)_handleAlbumRecords:(id)arg1 inLibrary:(id)arg2 ;
-(id)_handleAssetRecords:(id)arg1 inSyncContext:(id)arg2 withChangeBatch:(id)arg3 dedupeGraphPersons:(id*)arg4 ;
-(void)_handleMemoryRecords:(id)arg1 inLibrary:(id)arg2 ;
-(void)_handleFaceCropRecords:(id)arg1 inLibrary:(id)arg2 ;
-(void)_mergeUpdatedPersons:(id)arg1 inLibrary:(id)arg2 ;
-(void)_dedupePersonsInSyncContext:(id)arg1 ;
-(void)_handleDeleteRecords:(id)arg1 inLibrary:(id)arg2 ;
-(void)_handleExpungedRecords:(id)arg1 inLibrary:(id)arg2 ;
-(void)_handleRelationsForAssetRecords:(id)arg1 inLibrary:(id)arg2 ;
-(void)_handleRelationsForAlbumRecords:(id)arg1 inLibrary:(id)arg2 ;
@end
