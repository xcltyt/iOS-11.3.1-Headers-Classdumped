/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUVideoPlayerEventTracker.h>
#import <libobjc.A.dylib/NUVideoPlaybackCounter.h>

@protocol NUVideoPlaybackCounter <NSObject>
@property (nonatomic,readonly) unsigned long long numberOfVideosPlayedInSession; 
@property (nonatomic,readonly) unsigned long long numberOfVideosPlayedSinceLastAd; 
@required
-(unsigned long long)numberOfVideosPlayedInSession;
-(unsigned long long)numberOfVideosPlayedSinceLastAd;

@end


@class NSString;

@interface NUVideoPlaybackCounter : NSObject <NUVideoPlayerEventTracker, NUVideoPlaybackCounter> {

	unsigned long long numberOfVideosPlayedSinceLastAd;
	unsigned long long numberOfVideosPlayedInSession;

}

@property (assign,nonatomic) unsigned long long numberOfVideosPlayedInSession; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long numberOfVideosPlayedSinceLastAd; 
-(void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackStartedForVideoAdWithMetadata:(id)arg1 ;
-(void)resetNumberOfVideosPlayedSinceLastAd;
-(void)incrementNumberOfVideosPlayedSinceLastAd;
-(void)incrementNumberOfVideosPlayedInSession;
-(unsigned long long)numberOfVideosPlayedInSession;
-(void)setNumberOfVideosPlayedInSession:(unsigned long long)arg1 ;
-(unsigned long long)numberOfVideosPlayedSinceLastAd;
-(void)setNumberOfVideosPlayedSinceLastAd:(unsigned long long)arg1 ;
@end
