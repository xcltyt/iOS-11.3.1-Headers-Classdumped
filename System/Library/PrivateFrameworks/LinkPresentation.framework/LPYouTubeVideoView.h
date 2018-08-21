/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPVideoView.h>
#import <libobjc.A.dylib/LPYouTubePlayerDelegate.h>

@class LPYouTubePlayerView, NSString;

@interface LPYouTubeVideoView : LPVideoView <LPYouTubePlayerDelegate> {

	LPYouTubePlayerView* _platformYouTubeView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 configuration:(id)arg5 ;
-(BOOL)usesSharedAudioSession;
-(BOOL)shouldShowMuteButton;
-(BOOL)usesCustomFullScreenImplementation;
-(id)createVideoPlayerView;
-(void)youTubePlayer:(id)arg1 didChangeToState:(long long)arg2 ;
-(void)youTubePlayer:(id)arg1 didReceiveError:(id)arg2 ;
-(void)youTubePlayer:(id)arg1 didChangeToFullScreen:(BOOL)arg2 ;
-(void)enterCustomFullScreen;
@end
