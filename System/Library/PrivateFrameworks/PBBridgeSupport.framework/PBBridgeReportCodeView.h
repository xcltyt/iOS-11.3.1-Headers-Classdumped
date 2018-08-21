/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, NSTimer;

@interface PBBridgeReportCodeView : UIView {

	NSMutableArray* _frames;
	NSTimer* _animationTimer;
	long long _frameIndex;

}

@property (nonatomic,retain) NSMutableArray * frames;               //@synthesize frames=_frames - In the implementation block
@property (nonatomic,retain) NSTimer * animationTimer;              //@synthesize animationTimer=_animationTimer - In the implementation block
@property (assign,nonatomic) long long frameIndex;                  //@synthesize frameIndex=_frameIndex - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)stopAnimation;
-(void)_tick:(id)arg1 ;
-(NSMutableArray *)frames;
-(void)setFrames:(NSMutableArray *)arg1 ;
-(NSTimer *)animationTimer;
-(void)setAnimationTimer:(NSTimer *)arg1 ;
-(void)addFrame:(id)arg1 ;
-(long long)frameIndex;
-(void)setFrameIndex:(long long)arg1 ;
-(void)playAnimation;
@end
