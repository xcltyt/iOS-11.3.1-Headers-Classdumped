//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDChartWithXAxis.h"

@class UIImageView, UIView, WDActivitySummaryChartRenderer;

@interface WDActivitySummaryChart : WDChartWithXAxis
{
    UIImageView *_chartCanvas;
    UIView *_topDividerView;
    UIView *_bottomDividerView;
    UIView *_exerciseDividerView;
    UIView *_standDividerView;
    double _dividerInset;
    WDActivitySummaryChartRenderer *_chartRenderer;
    double _animationDuration;
    double _segmentTopPadding;
    double _segmentBottomInset;
    id <WDActivitySummaryChartDelegate> _delegate;
}

@property(nonatomic) __weak id <WDActivitySummaryChartDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double segmentBottomInset; // @synthesize segmentBottomInset=_segmentBottomInset;
@property(nonatomic) double segmentTopPadding; // @synthesize segmentTopPadding=_segmentTopPadding;
@property(nonatomic) double dividerInset; // @synthesize dividerInset=_dividerInset;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) WDActivitySummaryChartRenderer *chartRenderer; // @synthesize chartRenderer=_chartRenderer;
- (void).cxx_destruct;
- (id)rendererMaxXValue;
- (id)rendererMinXValue;
- (struct CGRect)chartCanvasBounds;
- (struct CGRect)chartBounds;
- (id)_transitionFromImageView:(id)arg1 withImage:(id)arg2;
- (void)_toggleNoDataLabelVisibility:(_Bool)arg1;
- (void)_layoutChartCanvas;
- (void)_updateChartCanvasWithChartImage:(id)arg1 animated:(_Bool)arg2;
- (void)reloadData:(_Bool)arg1;
- (void)refreshChart;
- (void)layoutSubviews;
- (void)setupDividers;
- (id)initWithFrame:(struct CGRect)arg1;

@end

