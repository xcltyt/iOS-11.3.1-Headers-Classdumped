//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class _SSSAnimatableBorderCornerRadiusView;

@interface SSSScreenshotBorderView : UIView
{
    _SSSAnimatableBorderCornerRadiusView *_outerHairlineView;
    _SSSAnimatableBorderCornerRadiusView *_thickBorderView;
    _SSSAnimatableBorderCornerRadiusView *_innerHairlineView;
    long long _borderStyle;
    double _geometryMultiplier;
    struct CGRect _unitRectForContent;
}

@property(nonatomic) struct CGRect unitRectForContent; // @synthesize unitRectForContent=_unitRectForContent;
@property(nonatomic) double geometryMultiplier; // @synthesize geometryMultiplier=_geometryMultiplier;
@property(nonatomic) long long borderStyle; // @synthesize borderStyle=_borderStyle;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect extent;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

