/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXVideoPlaybackObserver.h>
#import <libobjc.A.dylib/SXVideoPlaybackController.h>
#import <libobjc.A.dylib/SXVideoSeeking.h>
#import <libobjc.A.dylib/SXVideoTransitionObserver.h>

@protocol SXVideoPlaybackPolicy, SXVideoPlaybackStateReporting, SXVideoPlaybackAdvancing, SXPlaybackCoordinatorProviding;
@class SXPlaybackCoordinator, NSString;

@interface SXVideoPlaybackManager : NSObject <SXVideoPlaybackObserver, SXVideoPlaybackController, SXVideoSeeking, SXVideoTransitionObserver> {

	id<SXVideoPlaybackPolicy> _playbackPolicy;
	id<SXVideoPlaybackStateReporting> _playbackStateReporter;
	id<SXVideoPlaybackAdvancing> _playbackAdvancer;
	id<SXPlaybackCoordinatorProviding> _playbackCoordinatorProvider;
	SXPlaybackCoordinator* _playbackCoordinator;

}

@property (nonatomic,readonly) id<SXVideoPlaybackPolicy> playbackPolicy;                                    //@synthesize playbackPolicy=_playbackPolicy - In the implementation block
@property (nonatomic,readonly) id<SXVideoPlaybackStateReporting> playbackStateReporter;                     //@synthesize playbackStateReporter=_playbackStateReporter - In the implementation block
@property (nonatomic,readonly) id<SXVideoPlaybackAdvancing> playbackAdvancer;                               //@synthesize playbackAdvancer=_playbackAdvancer - In the implementation block
@property (nonatomic,readonly) id<SXPlaybackCoordinatorProviding> playbackCoordinatorProvider;              //@synthesize playbackCoordinatorProvider=_playbackCoordinatorProvider - In the implementation block
@property (assign,nonatomic,__weak) SXPlaybackCoordinator * playbackCoordinator;                            //@synthesize playbackCoordinator=_playbackCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)play;
-(void)pause;
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)playbackCoordinatorStartedPlayback:(id)arg1 ;
-(void)playbackCoordinatorPausedPlayback:(id)arg1 ;
-(void)playbackCoordinatorFinishedPlayback:(id)arg1 ;
-(void)playbackCoordinator:(id)arg1 playbackFailedWithError:(id)arg2 ;
-(void)playbackCoordinatorStateChanged:(id)arg1 ;
-(SXPlaybackCoordinator *)playbackCoordinator;
-(void)setPlaybackCoordinator:(SXPlaybackCoordinator *)arg1 ;
-(id<SXPlaybackCoordinatorProviding>)playbackCoordinatorProvider;
-(void)seekToStartWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)managePlaybackStateWithPlaybackCoordinator:(id)arg1 ;
-(id<SXVideoPlaybackAdvancing>)playbackAdvancer;
-(void)playWithoutRequestingPlayback;
-(id<SXVideoPlaybackPolicy>)playbackPolicy;
-(id<SXVideoPlaybackStateReporting>)playbackStateReporter;
-(id)initWithPlaybackPolicy:(id)arg1 playbackAdvancer:(id)arg2 playbackStateReporter:(id)arg3 playbackCoordinatorProvider:(id)arg4 ;
@end
