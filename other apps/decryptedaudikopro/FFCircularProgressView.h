//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface FFCircularProgressView : UIView
{
    _Bool _shouldDrawPause;
    _Bool _isSpinning;
    double _progress;
    double _lineWidth;
    UIColor *_tintColor;
    UIColor *_pauseColor;
    CAShapeLayer *_progressBackgroundLayer;
    CAShapeLayer *_progressLayer;
    CAShapeLayer *_iconLayer;
}

@property(nonatomic) _Bool isSpinning; // @synthesize isSpinning=_isSpinning;
@property(retain, nonatomic) CAShapeLayer *iconLayer; // @synthesize iconLayer=_iconLayer;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) CAShapeLayer *progressBackgroundLayer; // @synthesize progressBackgroundLayer=_progressBackgroundLayer;
@property(retain, nonatomic) UIColor *pauseColor; // @synthesize pauseColor=_pauseColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) _Bool shouldDrawPause; // @synthesize shouldDrawPause=_shouldDrawPause;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)stopSpinProgressBackgroundLayer;
- (void)startSpinProgressBackgroundLayer;
- (void)animateProgressBackgroundLayerFillColor;
- (void)drawArrow;
- (void)drawStop;
- (void)drawTick;
- (void)drawBackgroundCircle:(_Bool)arg1;
- (void)clearBackgroundCircle;
- (void)drawRect:(struct CGRect)arg1;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
