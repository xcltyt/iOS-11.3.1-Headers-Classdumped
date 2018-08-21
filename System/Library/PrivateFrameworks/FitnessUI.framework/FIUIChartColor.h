/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FitnessUI/FitnessUI-Structs.h>
@interface FIUIChartColor : NSObject {

	CGGradientRef _gradient;
	CGColorRef _color;
	double _threshold;

}

@property (assign,nonatomic) double threshold;              //@synthesize threshold=_threshold - In the implementation block
-(void)drawInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithThreshold:(double)arg1 startColor:(id)arg2 endColor:(id)arg3 ;
-(id)initWithThreshold:(double)arg1 color:(id)arg2 ;
-(void)setThreshold:(double)arg1 ;
-(double)threshold;
@end
