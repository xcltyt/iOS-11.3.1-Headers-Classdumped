/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAssetContainerChangeNotification.h>

@class PLShuffledAlbum, PLAssetContainerChangeNotification, NSIndexSet, NSOrderedSet;

@interface PLShuffledAlbumChangeNotification : PLAssetContainerChangeNotification {

	PLShuffledAlbum* _album;
	PLAssetContainerChangeNotification* _backingNotification;
	NSIndexSet* _changedIndexes;
	NSOrderedSet* _newSet;

}
+(id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)object;
-(void)_calculateDiffs;
-(id)_diffDescription;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(id)_changedObjects;
-(BOOL)titleDidChange;
-(BOOL)keyAssetDidChange;
-(BOOL)countDidChange;
-(id)initWithShuffledAlbum:(id)arg1 albumChangeNotification:(id)arg2 ;
-(id)changedIndexes;
-(id)album;
-(id)insertedIndexes;
-(BOOL)shouldReload;
-(id)deletedIndexes;
@end
