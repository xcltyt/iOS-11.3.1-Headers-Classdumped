/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKAxis.h>

@protocol HKAxisLabelDimension, HKZoomScale;
@interface HKNumericAxis : HKAxis {

	long long _labelEndingOptions;
	id<HKAxisLabelDimension> _labelDimension;
	double _topVerticalLabelPadding;
	double _bottomVerticalLabelPadding;
	id<HKZoomScale> _scalarZoomScaleEngine;

}

@property (nonatomic,readonly) id<HKZoomScale> scalarZoomScaleEngine;              //@synthesize scalarZoomScaleEngine=_scalarZoomScaleEngine - In the implementation block
@property (assign,nonatomic) long long labelEndingOptions;                         //@synthesize labelEndingOptions=_labelEndingOptions - In the implementation block
@property (nonatomic,retain) id<HKAxisLabelDimension> labelDimension;              //@synthesize labelDimension=_labelDimension - In the implementation block
@property (assign,nonatomic) double topVerticalLabelPadding;                       //@synthesize topVerticalLabelPadding=_topVerticalLabelPadding - In the implementation block
@property (assign,nonatomic) double bottomVerticalLabelPadding;                    //@synthesize bottomVerticalLabelPadding=_bottomVerticalLabelPadding - In the implementation block
+(id)ticksAndLabelsForRangeInModelCoordinates:(id)arg1 maximumLabelCount:(long long)arg2 endingOptions:(long long)arg3 dimension:(id)arg4 ;
+(double)_roundUpByMultiple:(double)arg1 factor:(double)arg2 ;
+(double)_roundDownByMultiple:(double)arg1 factor:(double)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringFromNumber:(id)arg1 ;
-(id)adjustValueRangeForLabels:(id)arg1 ;
-(id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2 ;
-(id)adjustedRangeForFittedRange:(id)arg1 chartRange:(HKRange)arg2 ;
-(id)zoomScaleEngine;
-(void)setLabelDimension:(id<HKAxisLabelDimension>)arg1 ;
-(double)labelSpacingFactorForNumberFormatter;
-(long long)labelEndingOptions;
-(void)setLabelEndingOptions:(long long)arg1 ;
-(id<HKAxisLabelDimension>)labelDimension;
-(double)topVerticalLabelPadding;
-(void)setTopVerticalLabelPadding:(double)arg1 ;
-(double)bottomVerticalLabelPadding;
-(void)setBottomVerticalLabelPadding:(double)arg1 ;
-(id<HKZoomScale>)scalarZoomScaleEngine;
@end
