/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISBasePlayerUIView.h>

@class UIGestureRecognizer, ISLiveWallpaperPlayer;

@interface ISLiveWallpaperUIView : ISBasePlayerUIView {

	UIGestureRecognizer* _playbackGestureRecognizer;

}

@property (nonatomic,retain) ISLiveWallpaperPlayer * player; 
@property (nonatomic,readonly) UIGestureRecognizer * playbackGestureRecognizer;              //@synthesize playbackGestureRecognizer=_playbackGestureRecognizer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIGestureRecognizer *)playbackGestureRecognizer;
-(void)_ISLiveWallpaperUIViewCommonInitialization;
-(void)_handlePlaybackRecognizer:(id)arg1 ;
@end
