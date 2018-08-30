//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CbScaleTabBackgroundView, UIImageView, UILabel;

@interface CbScaleTabView : UIView
{
    struct CGRect _mappedScaleIconFrame;
    double _iconInset;
    UIImageView *_scaleIcon;
    UILabel *_scaleLabel;
    CbScaleTabBackgroundView *_backgroundView;
    double _extraRightSideMargin;
    double _maximumWidth;
    double _yOffset;
    unsigned long long _alignment;
    struct CGPoint _contentAdjustment;
    struct CGPoint _labelAdjustment;
}

@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) double yOffset; // @synthesize yOffset=_yOffset;
@property(nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property(nonatomic) double extraRightSideMargin; // @synthesize extraRightSideMargin=_extraRightSideMargin;
@property(nonatomic) struct CGPoint labelAdjustment; // @synthesize labelAdjustment=_labelAdjustment;
@property(nonatomic) struct CGPoint contentAdjustment; // @synthesize contentAdjustment=_contentAdjustment;
@property(readonly, nonatomic) CbScaleTabBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, retain, nonatomic) UILabel *scaleLabel; // @synthesize scaleLabel=_scaleLabel;
@property(readonly, retain, nonatomic) UIImageView *scaleIcon; // @synthesize scaleIcon=_scaleIcon;
- (void).cxx_destruct;
- (void)setAssetSet:(id)arg1;
- (void)_leftAlignedLayout;
- (void)_rightAlignedLayout;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

