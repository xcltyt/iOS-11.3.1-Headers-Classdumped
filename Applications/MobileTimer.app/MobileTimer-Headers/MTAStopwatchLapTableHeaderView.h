//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UILabel;

@interface MTAStopwatchLapTableHeaderView : UIView
{
    UILabel *_lapNumberLabel;
    UILabel *_splitLabel;
    UILabel *_totalLabel;
    UIView *_bottomKeylineView;
    NSLayoutConstraint *_lapNumberLabelBaselineTopOffsetConstraint;
    NSLayoutConstraint *_lapNumberLabelBaselineBottomOffsetConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *lapNumberLabelBaselineBottomOffsetConstraint; // @synthesize lapNumberLabelBaselineBottomOffsetConstraint=_lapNumberLabelBaselineBottomOffsetConstraint;
@property(retain, nonatomic) NSLayoutConstraint *lapNumberLabelBaselineTopOffsetConstraint; // @synthesize lapNumberLabelBaselineTopOffsetConstraint=_lapNumberLabelBaselineTopOffsetConstraint;
@property(retain, nonatomic) UIView *bottomKeylineView; // @synthesize bottomKeylineView=_bottomKeylineView;
@property(retain, nonatomic) UILabel *totalLabel; // @synthesize totalLabel=_totalLabel;
@property(retain, nonatomic) UILabel *splitLabel; // @synthesize splitLabel=_splitLabel;
@property(retain, nonatomic) UILabel *lapNumberLabel; // @synthesize lapNumberLabel=_lapNumberLabel;
- (void).cxx_destruct;
- (void)setupConstraints;
- (id)labelFont;
- (void)_updateForContentSizeChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end
