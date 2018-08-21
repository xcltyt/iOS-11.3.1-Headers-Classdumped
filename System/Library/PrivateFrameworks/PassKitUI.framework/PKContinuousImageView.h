/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UIImageView.h>

@class CAShapeLayer;

@interface PKContinuousImageView : UIImageView {

	CAShapeLayer* _maskLayer;
	CGRect _continuousCornerMaskingBounds;
	CGRect _lastLayoutContinuousCornerMaskingBounds;
	double _lastLayoutContinuousCornerRadius;
	double _continuousCornerRadius;

}

@property (assign,nonatomic) double continuousCornerRadius;                     //@synthesize continuousCornerRadius=_continuousCornerRadius - In the implementation block
@property (assign,nonatomic) CGRect continuousCornerMaskingBounds; 
-(void)layoutSubviews;
-(CGRect)continuousCornerMaskingBounds;
-(void)setContinuousCornerRadius:(double)arg1 ;
-(void)setContinuousCornerMaskingBounds:(CGRect)arg1 ;
-(double)continuousCornerRadius;
@end
