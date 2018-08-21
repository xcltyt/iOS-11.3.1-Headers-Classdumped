//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDChartSeries.h"

@class HKFillStyle, NSArray, UIColor;

@interface WDDailySleepSeries : WDChartSeries
{
    NSArray *_dataPoints;
    int _lineCapStyle;
    UIColor *_fillColor;
    double _barWidth;
    double _bottomPadding;
    double _baselineAdjustment;
    HKFillStyle *_fillStyle;
    double _fillAlpha;
}

@property(nonatomic) double fillAlpha; // @synthesize fillAlpha=_fillAlpha;
@property(retain, nonatomic) HKFillStyle *fillStyle; // @synthesize fillStyle=_fillStyle;
@property(nonatomic) double baselineAdjustment; // @synthesize baselineAdjustment=_baselineAdjustment;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) int lineCapStyle; // @synthesize lineCapStyle=_lineCapStyle;
@property(nonatomic) double barWidth; // @synthesize barWidth=_barWidth;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void).cxx_destruct;
- (id)_getPointsFromDataSet;
- (void)_enumerateChartPointsWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)shouldInvertAxis;
- (void)renderFillInContext:(struct CGContext *)arg1;
- (void)prepareForRenderingWithSize:(struct CGSize)arg1 minXValue:(id)arg2 maxXValue:(id)arg3 minYValue:(id)arg4 maxYValue:(id)arg5 insets:(struct UIEdgeInsets)arg6 dataSet:(id)arg7;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
