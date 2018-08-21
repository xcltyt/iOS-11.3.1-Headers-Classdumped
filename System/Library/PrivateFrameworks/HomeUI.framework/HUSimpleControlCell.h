/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUControlPanelCell.h>

@protocol HUControlView;
@class UIView, NSArray;

@interface HUSimpleControlCell : HUControlPanelCell {

	UIView*<HUControlView> _controlView;
	NSArray* _controlViewConstraints;

}

@property (nonatomic,copy) NSArray * controlViewConstraints;                  //@synthesize controlViewConstraints=_controlViewConstraints - In the implementation block
@property (nonatomic,retain) UIView*<HUControlView> controlView;              //@synthesize controlView=_controlView - In the implementation block
-(void)prepareForReuse;
-(UIView*<HUControlView>)controlView;
-(void)setControlView:(UIView*<HUControlView>)arg1 ;
-(void)_updateSliderConstraints;
-(NSArray *)controlViewConstraints;
-(void)setControlViewConstraints:(NSArray *)arg1 ;
-(id)allControlViews;
@end
