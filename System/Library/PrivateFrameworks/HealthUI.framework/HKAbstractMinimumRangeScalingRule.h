/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKInteractiveChartsAxisScalingRule.h>

@class NSDictionary, HKValueRange, NSString;

@interface HKAbstractMinimumRangeScalingRule : NSObject <HKInteractiveChartsAxisScalingRule> {

	double _defaultYAxisRange;
	NSDictionary* _axisRangeOverrides;
	long long _portraitPrettyNumberRule;
	HKValueRange* _axisBounds;

}

@property (nonatomic,readonly) double defaultYAxisRange;                       //@synthesize defaultYAxisRange=_defaultYAxisRange - In the implementation block
@property (assign,nonatomic) long long portraitPrettyNumberRule;               //@synthesize portraitPrettyNumberRule=_portraitPrettyNumberRule - In the implementation block
@property (nonatomic,retain) HKValueRange * axisBounds;                        //@synthesize axisBounds=_axisBounds - In the implementation block
@property (nonatomic,readonly) NSDictionary * axisRangeOverrides;              //@synthesize axisRangeOverrides=_axisRangeOverrides - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 ;
-(void)setPortraitPrettyNumberRule:(long long)arg1 ;
-(long long)portraitPrettyNumberRule;
-(id)portraitYValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3 ;
-(double)_rangeForZoomLevel:(long long)arg1 ;
-(double)defaultYAxisRange;
-(HKValueRange *)axisBounds;
-(void)setAxisBounds:(HKValueRange *)arg1 ;
-(NSDictionary *)axisRangeOverrides;
@end
