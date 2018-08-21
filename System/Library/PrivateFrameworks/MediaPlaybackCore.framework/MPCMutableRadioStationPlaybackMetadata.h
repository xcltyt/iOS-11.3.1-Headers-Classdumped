/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MPCRadioStationPlaybackMetadata.h>

@class RadioArtworkCollection, NSString, NSURL;

@interface MPCMutableRadioStationPlaybackMetadata : MPCRadioStationPlaybackMetadata

@property (nonatomic,retain) RadioArtworkCollection * artworkCollection; 
@property (nonatomic,copy) NSString * stationName; 
@property (nonatomic,copy) NSString * stationHash; 
@property (assign,nonatomic) long long stationID; 
@property (nonatomic,copy) NSString * stationStringID; 
@property (nonatomic,copy) NSURL * stationURL; 
-(void)setStationName:(NSString *)arg1 ;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(void)setStationURL:(NSURL *)arg1 ;
-(void)setStationStringID:(NSString *)arg1 ;
-(void)setArtworkCollection:(RadioArtworkCollection *)arg1 ;
@end
