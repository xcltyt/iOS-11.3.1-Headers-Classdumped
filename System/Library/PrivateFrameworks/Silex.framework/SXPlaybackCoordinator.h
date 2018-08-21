/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXVideoMetadataProviding.h>
#import <libobjc.A.dylib/SXMediaSelectionControllerDelegate.h>
#import <libobjc.A.dylib/SXMediaSelectionControllerDataSource.h>
#import <libobjc.A.dylib/SXVideoPrefetching.h>

@protocol SXVideoProviding, SXVideoPlaybackHost, SXAVPlayerFactory;
@class NSObject, NSError, NSHashTable, SXAVPlayer, SXKeyValueObserver, NSArray, NSString;

@interface SXPlaybackCoordinator : NSObject <SXVideoMetadataProviding, SXMediaSelectionControllerDelegate, SXMediaSelectionControllerDataSource, SXVideoPrefetching> {

	BOOL _playbackLikelyToKeepUp;
	BOOL _playbackBufferFull;
	BOOL _hasMediaSelectionOptions;
	BOOL _muted;
	BOOL _playbackRequested;
	BOOL _initiatedPlayback;
	id<SXVideoProviding> _video;
	unsigned long long _state;
	NSObject*<SXVideoPlaybackHost> _host;
	NSError* _error;
	NSHashTable* _observers;
	SXAVPlayer* _player;
	/*^block*/id _cancelHandler;
	SXKeyValueObserver* _playerItemPresentationSizeObserver;
	SXKeyValueObserver* _readyForDisplayObserver;
	id<SXAVPlayerFactory> _playerFactory;
	SXKeyValueObserver* _muteStateObserver;
	SXKeyValueObserver* _playbackLikelyToKeepUpObserver;
	SXKeyValueObserver* _playbackBufferFullObserver;
	CGSize _dimensions;

}

@property (assign,nonatomic) BOOL playbackRequested;                                               //@synthesize playbackRequested=_playbackRequested - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                            //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) SXAVPlayer * player;                                                  //@synthesize player=_player - In the implementation block
@property (nonatomic,copy) id cancelHandler;                                                       //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (assign,nonatomic) BOOL initiatedPlayback;                                               //@synthesize initiatedPlayback=_initiatedPlayback - In the implementation block
@property (assign,nonatomic) BOOL hasMediaSelectionOptions;                                        //@synthesize hasMediaSelectionOptions=_hasMediaSelectionOptions - In the implementation block
@property (assign,nonatomic) CGSize dimensions;                                                    //@synthesize dimensions=_dimensions - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) SXKeyValueObserver * playerItemPresentationSizeObserver;              //@synthesize playerItemPresentationSizeObserver=_playerItemPresentationSizeObserver - In the implementation block
@property (nonatomic,retain) SXKeyValueObserver * readyForDisplayObserver;                         //@synthesize readyForDisplayObserver=_readyForDisplayObserver - In the implementation block
@property (nonatomic,retain) NSError * error;                                                      //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) id<SXAVPlayerFactory> playerFactory;                                //@synthesize playerFactory=_playerFactory - In the implementation block
@property (nonatomic,retain) SXKeyValueObserver * muteStateObserver;                               //@synthesize muteStateObserver=_muteStateObserver - In the implementation block
@property (nonatomic,retain) SXKeyValueObserver * playbackLikelyToKeepUpObserver;                  //@synthesize playbackLikelyToKeepUpObserver=_playbackLikelyToKeepUpObserver - In the implementation block
@property (nonatomic,retain) SXKeyValueObserver * playbackBufferFullObserver;                      //@synthesize playbackBufferFullObserver=_playbackBufferFullObserver - In the implementation block
@property (nonatomic,readonly) id<SXVideoProviding> video;                                         //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) NSArray * loadedTimeRanges; 
@property (nonatomic,readonly) double loadingProgress; 
@property (nonatomic,readonly) BOOL playbackLikelyToKeepUp;                                        //@synthesize playbackLikelyToKeepUp=_playbackLikelyToKeepUp - In the implementation block
@property (nonatomic,readonly) BOOL playbackBufferFull;                                            //@synthesize playbackBufferFull=_playbackBufferFull - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<SXVideoPlaybackHost> host;                           //@synthesize host=_host - In the implementation block
@property (assign,nonatomic) BOOL muted;                                                           //@synthesize muted=_muted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double time; 
@property (nonatomic,readonly) double framerate; 
@property (nonatomic,readonly) double timePlayed; 
@property (nonatomic,readonly) double volume; 
-(double)time;
-(void)setHost:(NSObject*<SXVideoPlaybackHost>)arg1 ;
-(unsigned long long)state;
-(double)duration;
-(void)setState:(unsigned long long)arg1 ;
-(void)setCancelHandler:(id)arg1 ;
-(double)volume;
-(NSObject*<SXVideoPlaybackHost>)host;
-(void)load;
-(void)play;
-(CGSize)dimensions;
-(id)cancelHandler;
-(void)pause;
-(NSHashTable *)observers;
-(BOOL)muted;
-(NSArray *)loadedTimeRanges;
-(SXAVPlayer *)player;
-(void)setPlayer:(SXAVPlayer *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setMuted:(BOOL)arg1 ;
-(void)addPlaybackObserver:(id)arg1 ;
-(void)playbackInitiated;
-(void)playbackStarted;
-(void)playbackPaused;
-(void)playbackResumed;
-(void)playbackFinished;
-(void)playbackFailedWithError:(id)arg1 ;
-(void)timeElapsed:(double)arg1 duration:(double)arg2 ;
-(void)loadVideoIfNeeded;
-(void)setupPlayerWithURL:(id)arg1 ;
-(id<SXAVPlayerFactory>)playerFactory;
-(void)loadAvailableMediaCharacteristics;
-(void)addPlayerItemPresentationSizeObserver;
-(void)addMuteStateObserver;
-(void)addPlaybackBuferObserver;
-(void)addPlaybackLikelyToKeepUpObserver;
-(void)loadedTimeRangesChanged;
-(BOOL)initiatedPlayback;
-(void)setInitiatedPlayback:(BOOL)arg1 ;
-(double)loadingProgress;
-(void)updateMediaSelectionOptionAvailability;
-(void)setHasMediaSelectionOptions:(BOOL)arg1 ;
-(void)playbackBufferFullStateChanged;
-(void)setPlaybackBufferFullObserver:(SXKeyValueObserver *)arg1 ;
-(void)playbackLikelyToKeepUpStateChanged;
-(void)setPlaybackLikelyToKeepUpObserver:(SXKeyValueObserver *)arg1 ;
-(void)muteStateChanged;
-(void)setMuteStateObserver:(SXKeyValueObserver *)arg1 ;
-(void)setDimensions:(CGSize)arg1 ;
-(void)setPlayerItemPresentationSizeObserver:(SXKeyValueObserver *)arg1 ;
-(double)timePlayed;
-(void)mediaSelectionController:(id)arg1 selectMediaSelectionOption:(id)arg2 inMediaSelectionGroup:(id)arg3 ;
-(id)mediaSelectionController:(id)arg1 mediaSelectionGroupWithCharacteristic:(id)arg2 ;
-(id)mediaSelectionController:(id)arg1 selectedMediaSelectionOptionInMediaSelectionGroup:(id)arg2 ;
-(id)mediaSelectionController:(id)arg1 preferredMediaSelectionOptionInMediaSelectionGroup:(id)arg2 ;
-(id)initWithVideo:(id)arg1 playerFactory:(id)arg2 ;
-(void)removePlaybackObserver:(id)arg1 ;
-(void)seekToTime:(double)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)removePlayerItemPresentationSizeObserver;
-(BOOL)playbackLikelyToKeepUp;
-(BOOL)playbackBufferFull;
-(BOOL)hasMediaSelectionOptions;
-(SXKeyValueObserver *)playerItemPresentationSizeObserver;
-(SXKeyValueObserver *)readyForDisplayObserver;
-(void)setReadyForDisplayObserver:(SXKeyValueObserver *)arg1 ;
-(SXKeyValueObserver *)muteStateObserver;
-(SXKeyValueObserver *)playbackLikelyToKeepUpObserver;
-(SXKeyValueObserver *)playbackBufferFullObserver;
-(double)framerate;
-(void)stateChanged;
-(void)setPlaybackRequested:(BOOL)arg1 ;
-(BOOL)playbackRequested;
-(id<SXVideoProviding>)video;
@end
