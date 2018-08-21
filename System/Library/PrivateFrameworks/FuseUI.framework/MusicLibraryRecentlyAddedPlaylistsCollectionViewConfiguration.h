/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryBrowseCollectionViewConfiguration.h>

@class MusicLibraryPlaylistsViewConfiguration;

@interface MusicLibraryRecentlyAddedPlaylistsCollectionViewConfiguration : MusicLibraryBrowseCollectionViewConfiguration {

	MusicLibraryPlaylistsViewConfiguration* _playlistsViewConfiguration;
	unsigned long long _entityLimit;

}

@property (nonatomic,readonly) unsigned long long entityLimit;              //@synthesize entityLimit=_entityLimit - In the implementation block
+(unsigned long long)defaultEntityLimit;
-(id)init;
-(unsigned long long)entityLimit;
-(id)loadEntityViewDescriptor;
-(long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(BOOL)canPreviewEntityValueContext:(id)arg1 ;
-(id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(id)initWithEntityLimit:(unsigned long long)arg1 ;
-(void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2 ;
-(id)_playlistsViewConfiguration;
@end
