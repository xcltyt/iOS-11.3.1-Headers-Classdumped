//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbStepSequencerMenuBaseCell.h"

@class CALayer, UIImageView, UILabel;

@interface CbStepSequencerMenuCell : CbStepSequencerMenuBaseCell
{
    UIImageView *_chevron;
    UILabel *_detailLabel;
    CALayer *_topLineLayer;
    CALayer *_bottomLineLayer;
}

- (void).cxx_destruct;
- (void)setTextAlignment:(unsigned long long)arg1 hasDetailText:(_Bool)arg2;
- (void)setTextColor:(id)arg1;
- (void)setDetailText:(id)arg1;
- (void)setBottomLineHidden:(_Bool)arg1 hasPadding:(_Bool)arg2;
- (void)setTopLineHidden:(_Bool)arg1;
- (void)setChevronHidden:(_Bool)arg1;
- (void)configureNameLabel;
- (double)borderLineWidth;
- (double)paddingX;
- (id)selectedColor;
- (id)highlightedColor;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)isLayoutRightToLeft;

@end
