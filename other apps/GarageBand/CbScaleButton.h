//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "CbScreenshotable-Protocol.h"

@class CbStrokeLabel, UIImageView;

@interface CbScaleButton : UIButton <CbScreenshotable>
{
    UIImageView *scaleIcon;
    CbStrokeLabel *scaleLabel;
    double pressedAlpha;
    double verticalOffset;
    double _buttonEdgeBuffer;
    double _labelIconBuffer;
    double _bakedInIconMaxX;
    double _rightSliceWidth;
    double _labelPressedYOffset;
    double _minButtonWidth;
}

@property(nonatomic) double minButtonWidth; // @synthesize minButtonWidth=_minButtonWidth;
@property(nonatomic) double labelPressedYOffset; // @synthesize labelPressedYOffset=_labelPressedYOffset;
@property(nonatomic) double rightSliceWidth; // @synthesize rightSliceWidth=_rightSliceWidth;
@property(nonatomic) double bakedInIconMaxX; // @synthesize bakedInIconMaxX=_bakedInIconMaxX;
@property(nonatomic) double labelIconBuffer; // @synthesize labelIconBuffer=_labelIconBuffer;
@property(nonatomic) double buttonEdgeBuffer; // @synthesize buttonEdgeBuffer=_buttonEdgeBuffer;
@property(nonatomic) double pressedAlpha; // @synthesize pressedAlpha;
@property(readonly, nonatomic) CbStrokeLabel *scaleLabel; // @synthesize scaleLabel;
- (void).cxx_destruct;
- (void)restoreFromScreenshotType:(int)arg1;
- (void)prepareForScreenshotType:(int)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setAssetSet:(id)arg1;
- (void)layoutSubviews;
- (void)updateFrame;
- (struct CGSize)_scaleIconSize;
- (id)initWithFrame:(struct CGRect)arg1 addScaleLabel:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

