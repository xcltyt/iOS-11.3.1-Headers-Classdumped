/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSData;

@interface ML3StoreItemPlaylistData : NSObject {

	NSArray* _lookupItems;
	NSData* _playlistData;
	NSArray* _parsedPlaylistsImportProperties;

}

@property (nonatomic,readonly) NSData * playlistsData; 
@property (nonatomic,readonly) NSArray * parsedStorePlaylistsImportProperties; 
@property (nonatomic,readonly) unsigned long long playlistCount; 
-(NSArray *)parsedStorePlaylistsImportProperties;
-(id)_playlistPropertiesForLookupItems:(id)arg1 ;
-(id)_playlistPropertiesFromPlaylistData:(id)arg1 ;
-(id)_bestPlaylistArtworkImageURLFromStoreArtworkVariants:(id)arg1 ;
-(id)_bestArtworkImageURLFromStoreArtworkVariants:(id)arg1 cropStyle:(id)arg2 ;
-(id)initWithPlaylistsData:(id)arg1 ;
-(unsigned long long)playlistCount;
-(id)initWithLookupItems:(id)arg1 ;
-(NSData *)playlistsData;
@end
