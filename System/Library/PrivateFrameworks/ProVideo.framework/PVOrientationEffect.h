/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVHeliumEffect.h>

@protocol EffectTimeNotificationDelegate;
@interface PVOrientationEffect : PVHeliumEffect {

	BOOL _showAlt;
	BOOL _oldShowAlt;
	double _animationTime;
	double _switchTime;
	double _switchSetTime;
	id<EffectTimeNotificationDelegate> _timeNotificationDelegate;

}

@property (assign,nonatomic) double switchTime;                                              //@synthesize switchTime=_switchTime - In the implementation block
@property (assign,nonatomic) double switchSetTime;                                           //@synthesize switchSetTime=_switchSetTime - In the implementation block
@property (assign,nonatomic) BOOL oldShowAlt;                                                //@synthesize oldShowAlt=_oldShowAlt - In the implementation block
@property (__weak) id<EffectTimeNotificationDelegate> timeNotificationDelegate;              //@synthesize timeNotificationDelegate=_timeNotificationDelegate - In the implementation block
@property (assign,nonatomic) BOOL showAlt;                                                   //@synthesize showAlt=_showAlt - In the implementation block
@property (assign,nonatomic) double animationTime;                                           //@synthesize animationTime=_animationTime - In the implementation block
+(void)registerEffectWithID:(id)arg1 displayName:(id)arg2 ;
-(void)dealloc;
-(id)initWithEffectID:(id)arg1 ;
-(void)orientationChangeRequest:(id)arg1 ;
-(BOOL)showAlt;
-(void)setOldShowAlt:(BOOL)arg1 ;
-(void)setSwitchTime:(double)arg1 ;
-(void)setTimeNotificationDelegate:(id<EffectTimeNotificationDelegate>)arg1 ;
-(double)animationTime;
-(void)setSwitchSetTime:(double)arg1 ;
-(double)switchTime;
-(BOOL)oldShowAlt;
-(BOOL)showAltForTime:(SCD_Struct_PV0)arg1 ;
-(id<EffectTimeNotificationDelegate>)timeNotificationDelegate;
-(double)switchSetTime;
-(HGRef<HGXForm>*)rotationNodeForPercent:(float)arg1 atCenter:(CGPoint)arg2 ;
-(HGRef<HGNode>*)previewHGNodeForTime:(SCD_Struct_PV0)arg1 inputHGNode:(HGRef<HGNode>*)arg2 outputSize:(CGSize)arg3 renderer:(HGRenderer*)arg4 ;
-(HGRef<HGNode>*)hgNodeForTime:(SCD_Struct_PV0)arg1 inputs:(const PVInputHGNodeMap<unsigned int>*)arg2 renderer:(const HGRef<HGRenderer>Ref)arg3 igContext:(HGRef<PVInstructionGraphContext>*)arg4 ;
-(void)setAnimationTime:(double)arg1 ;
-(void)setShowAlt:(BOOL)arg1 ;
@end
