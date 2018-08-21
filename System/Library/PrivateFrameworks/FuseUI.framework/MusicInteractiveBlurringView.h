/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@class MusicInteractiveBackdropView, _UIBackdropViewSettings, UIView;

@interface MusicInteractiveBlurringView : UIView {

	MusicInteractiveBackdropView* _backdropView;
	_UIBackdropViewSettings* _destinationSettings;
	UIView* _tintView;
	double _tintAlphaProgressMultiplier;

}

@property (nonatomic,readonly) UIView * tintView;                             //@synthesize tintView=_tintView - In the implementation block
@property (assign,nonatomic) double tintAlphaProgressMultiplier;              //@synthesize tintAlphaProgressMultiplier=_tintAlphaProgressMultiplier - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForTransition;
-(UIView *)tintView;
-(void)setTransitionProgress:(double)arg1 ;
-(BOOL)_shouldUseHighQualityGraphics;
-(void)transitionCompleted;
-(double)tintAlphaProgressMultiplier;
-(void)setTintAlphaProgressMultiplier:(double)arg1 ;
@end
