/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelSongPlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelMovie;

@interface MPModelMoviePlaybackItemMetadata : MPModelSongPlaybackItemMetadata {

	MPModelGenericObject* _modelGenericObject;
	MPModelMovie* _movie;

}

@property (nonatomic,retain) MPModelMovie * movie;              //@synthesize movie=_movie - In the implementation block
+(id)requiredProperties;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(long long)storeSubscriptionAdamID;
-(BOOL)isExplicitTrack;
-(id)modelGenericObject;
-(id)storeAsset;
-(id)localFileAsset;
-(id)playbackPosition;
-(long long)storeAdamID;
-(void)_invalidateModelObjectPlaybackItemMetadata;
-(BOOL)allowsInitiatingPlayWhileDownload;
-(id)contentTitle;
-(double)expectedDuration;
-(unsigned long long)storeSagaID;
-(id)mediaItem;
-(unsigned long long)contentType;
-(MPModelMovie *)movie;
-(void)setMovie:(MPModelMovie *)arg1 ;
@end
