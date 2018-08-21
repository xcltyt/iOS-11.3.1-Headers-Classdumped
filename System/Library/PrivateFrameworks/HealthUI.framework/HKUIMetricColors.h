/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface HKUIMetricColors : NSObject {

	UIColor* _keyColor;
	UIColor* _gradientTopColor;
	UIColor* _gradientBottomColor;
	UIColor* _contextViewPrimaryTextColor;
	UIColor* _contextViewSecondaryTextColor;
	UIColor* _contextViewInfoButtonGlyphColor;
	UIColor* _contextViewInfoButtonBackgroundColor;
	UIColor* _contextViewChartGradientTopColor;
	UIColor* _contextViewChartGradientBottomColor;

}

@property (nonatomic,retain) UIColor * keyColor;                                          //@synthesize keyColor=_keyColor - In the implementation block
@property (nonatomic,retain) UIColor * gradientTopColor;                                  //@synthesize gradientTopColor=_gradientTopColor - In the implementation block
@property (nonatomic,retain) UIColor * gradientBottomColor;                               //@synthesize gradientBottomColor=_gradientBottomColor - In the implementation block
@property (nonatomic,retain) UIColor * contextViewPrimaryTextColor;                       //@synthesize contextViewPrimaryTextColor=_contextViewPrimaryTextColor - In the implementation block
@property (nonatomic,retain) UIColor * contextViewSecondaryTextColor;                     //@synthesize contextViewSecondaryTextColor=_contextViewSecondaryTextColor - In the implementation block
@property (nonatomic,retain) UIColor * contextViewInfoButtonGlyphColor;                   //@synthesize contextViewInfoButtonGlyphColor=_contextViewInfoButtonGlyphColor - In the implementation block
@property (nonatomic,retain) UIColor * contextViewInfoButtonBackgroundColor;              //@synthesize contextViewInfoButtonBackgroundColor=_contextViewInfoButtonBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * contextViewChartGradientTopColor;                  //@synthesize contextViewChartGradientTopColor=_contextViewChartGradientTopColor - In the implementation block
@property (nonatomic,retain) UIColor * contextViewChartGradientBottomColor;               //@synthesize contextViewChartGradientBottomColor=_contextViewChartGradientBottomColor - In the implementation block
+(id)vitalsColors;
+(id)activityColors;
+(id)bodyMeasurementColors;
+(id)mindfulnessColors;
+(id)reproductiveHealthColors;
+(id)sleepColors;
+(id)resultsColors;
+(id)defaultContextViewColors;
+(id)workoutContextViewColors;
+(id)allergiesClinicalColors;
+(id)conditionsClinicalColors;
+(id)immunizationsClinicalColors;
+(id)labResultsClinicalColors;
+(id)medicationsClinicalColors;
+(id)proceduresClinicalColors;
+(id)vitalsClinicalColors;
+(id)unknownCategoryClinicalColors;
+(id)metricColorsForHeartRateContext:(long long)arg1 ;
-(UIColor *)gradientTopColor;
-(UIColor *)gradientBottomColor;
-(UIColor *)contextViewPrimaryTextColor;
-(UIColor *)contextViewInfoButtonGlyphColor;
-(UIColor *)contextViewInfoButtonBackgroundColor;
-(UIColor *)contextViewSecondaryTextColor;
-(void)setKeyColor:(UIColor *)arg1 ;
-(void)setGradientTopColor:(UIColor *)arg1 ;
-(void)setGradientBottomColor:(UIColor *)arg1 ;
-(void)setContextViewPrimaryTextColor:(UIColor *)arg1 ;
-(void)setContextViewSecondaryTextColor:(UIColor *)arg1 ;
-(void)setContextViewInfoButtonGlyphColor:(UIColor *)arg1 ;
-(void)setContextViewInfoButtonBackgroundColor:(UIColor *)arg1 ;
-(void)setContextViewChartGradientTopColor:(UIColor *)arg1 ;
-(void)setContextViewChartGradientBottomColor:(UIColor *)arg1 ;
-(UIColor *)keyColor;
-(UIColor *)contextViewChartGradientTopColor;
-(UIColor *)contextViewChartGradientBottomColor;
@end
