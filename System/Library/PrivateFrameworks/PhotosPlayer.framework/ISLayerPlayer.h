/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface ISLayerPlayer : NSObject {

	NSHashTable* _layers;

}
-(id)init;
-(double)currentTime;
-(void)setRate:(float)arg1 ;
-(void)play;
-(void)pause;
-(void)addLayer:(id)arg1 ;
-(void)removeLayer:(id)arg1 ;
-(void)_enumerateLayersWithBlock:(/*^block*/id)arg1 ;
-(void)seekToTime:(double)arg1 ;
@end
