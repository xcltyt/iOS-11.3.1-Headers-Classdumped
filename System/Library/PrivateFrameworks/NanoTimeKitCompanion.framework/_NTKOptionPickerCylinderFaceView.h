/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/NTKPolygonCylinderFaceView.h>

@class UIView, NSString;

@interface _NTKOptionPickerCylinderFaceView : UIView <NTKPolygonCylinderFaceView> {

	double _contentAlpha;
	double _breathingScale;
	UIView* _optionView;

}

@property (nonatomic,retain) UIView * optionView;                   //@synthesize optionView=_optionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOptionView:(UIView *)arg1 ;
-(UIView *)optionView;
-(void)setRotationFromFront:(double)arg1 ;
-(void)applyBreathingScale:(double)arg1 ;
-(void)_applyContentAlpha;
@end
