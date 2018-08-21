/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXAnalyticsEvent.h>

@class NSString, NSDictionary;

@interface SXMediaEvent : SXAnalyticsEvent {

	unsigned long long _mediaType;
	unsigned long long _galleryType;
	unsigned long long _videoType;
	NSString* _mediaId;
	NSDictionary* _metaData;

}

@property (assign,nonatomic) unsigned long long mediaType;                //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) unsigned long long galleryType;              //@synthesize galleryType=_galleryType - In the implementation block
@property (assign,nonatomic) unsigned long long videoType;                //@synthesize videoType=_videoType - In the implementation block
@property (nonatomic,retain) NSString * mediaId;                          //@synthesize mediaId=_mediaId - In the implementation block
@property (nonatomic,retain) NSDictionary * metaData;                     //@synthesize metaData=_metaData - In the implementation block
-(NSDictionary *)metaData;
-(unsigned long long)mediaType;
-(void)setMediaType:(unsigned long long)arg1 ;
-(void)setMediaId:(NSString *)arg1 ;
-(unsigned long long)galleryType;
-(void)setGalleryType:(unsigned long long)arg1 ;
-(NSString *)mediaId;
-(unsigned long long)videoType;
-(void)setVideoType:(unsigned long long)arg1 ;
-(void)setMetaData:(NSDictionary *)arg1 ;
@end
