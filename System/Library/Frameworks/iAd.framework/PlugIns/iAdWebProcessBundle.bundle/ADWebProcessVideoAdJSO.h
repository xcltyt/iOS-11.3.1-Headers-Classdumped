/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/iAd.framework/PlugIns/iAdWebProcessBundle.bundle/iAdWebProcessBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAdWebProcessBundle/ADWebProcessVideoAdJSOJSMethods.h>

@protocol ADWebProcessVideoAdJSODelegate;
@class NSString;

@interface ADWebProcessVideoAdJSO : NSObject <ADWebProcessVideoAdJSOJSMethods> {

	BOOL _hasDestination;
	NSString* _videoAssetURLString;
	id<ADWebProcessVideoAdJSODelegate> _delegate;

}

@property (nonatomic,retain) NSString * videoAssetURLString;                           //@synthesize videoAssetURLString=_videoAssetURLString - In the implementation block
@property (assign,nonatomic) BOOL hasDestination;                                      //@synthesize hasDestination=_hasDestination - In the implementation block
@property (nonatomic,retain) id<ADWebProcessVideoAdJSODelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSString *)videoAssetURLString;
-(void)setVideoAssetURLString:(NSString *)arg1 ;
-(void)setHasDestination:(BOOL)arg1 ;
-(void)volumeMuted:(float)arg1 ;
-(BOOL)hasDestinationURL;
-(id)getVideoAssetURL;
-(void)creativeViewLoaded;
-(void)playStarted:(float)arg1 atVolume:(float)arg2 ;
-(void)playResumed:(float)arg1 atVolume:(float)arg2 ;
-(void)playTimeUpdated:(float)arg1 atVolume:(float)arg2 ;
-(void)playPaused:(float)arg1 atVolume:(float)arg2 ;
-(void)playCompletedAtVolume:(float)arg1 ;
-(void)volumeChanged:(float)arg1 playtime:(float)arg2 ;
-(void)volumeUnmuted:(float)arg1 atVolume:(float)arg2 ;
-(void)viewabilityChanged:(BOOL)arg1 playtime:(float)arg2 atVolume:(float)arg3 ;
-(void)moreInfoTapped:(float)arg1 atVolume:(float)arg2 ;
-(void)videoTapped:(float)arg1 atVolume:(float)arg2 ;
-(void)skipAdTapped:(float)arg1 atVolume:(float)arg2 ;
-(void)fullScreenTapped:(float)arg1 atVolume:(float)arg2 ;
-(void)exitFullScreenTapped:(float)arg1 atVolume:(float)arg2 ;
-(BOOL)hasDestination;
-(id<ADWebProcessVideoAdJSODelegate>)delegate;
-(void)setDelegate:(id<ADWebProcessVideoAdJSODelegate>)arg1 ;
@end
