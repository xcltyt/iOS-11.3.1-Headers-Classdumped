/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentBehaviorHandler.h>

@interface SXParallaxComponentBehaviorHandler : SXComponentBehaviorHandler {

	BOOL _isRotating;
	BOOL _inFirstViewport;
	BOOL _inLastViewport;
	int _direction;
	double _factor;
	CGRect _absoluteContentViewFrame;

}

@property (nonatomic,readonly) BOOL isRotating;                            //@synthesize isRotating=_isRotating - In the implementation block
@property (assign,nonatomic) BOOL inFirstViewport;                         //@synthesize inFirstViewport=_inFirstViewport - In the implementation block
@property (assign,nonatomic) BOOL inLastViewport;                          //@synthesize inLastViewport=_inLastViewport - In the implementation block
@property (assign,nonatomic) CGRect absoluteContentViewFrame;              //@synthesize absoluteContentViewFrame=_absoluteContentViewFrame - In the implementation block
@property (assign,nonatomic) int direction;                                //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) double factor;                              //@synthesize factor=_factor - In the implementation block
-(BOOL)isRotating;
-(void)setDirection:(int)arg1 ;
-(int)direction;
-(double)factor;
-(id)initWithComponentView:(id)arg1 withBehavior:(id)arg2 ;
-(void)setupWithBehaviorController:(id)arg1 ;
-(void)updateWithBehaviorController:(id)arg1 ;
-(void)destroyWithBehaviorController:(id)arg1 ;
-(void)setAbsoluteContentViewFrame:(CGRect)arg1 ;
-(CGRect)absoluteContentViewFrame;
-(void)setInFirstViewport:(BOOL)arg1 ;
-(void)setInLastViewport:(BOOL)arg1 ;
-(BOOL)inFirstViewport;
-(BOOL)inLastViewport;
@end
