/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface MPMusicSubscriptionLeaseController : NSObject {

	NSHashTable* _players;

}
+(id)sharedController;
-(id)_init;
-(void)_playerWillReloadWithPlaybackContextNotification:(id)arg1 ;
-(void)_playerPlaybackStateDidChangeNotification:(id)arg1 ;
-(void)addPlayer:(id)arg1 ;
-(void)removePlayer:(id)arg1 ;
@end
