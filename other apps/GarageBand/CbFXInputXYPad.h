//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CAEmitterLayer, CMAttitude, CMMotionManager, CbFxInputPressureRecognizer, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIColor, UIFont, UIImage, UIImageView, UILabel, UISlider, UIView;

@interface CbFXInputXYPad : UIControl <UIGestureRecognizerDelegate>
{
    _Bool _latchModeOn;
    _Bool _motionModeOn;
    _Bool _centeredXMode;
    _Bool _centeredYMode;
    _Bool _emitterAlwaysOn;
    _Bool _knobAlwaysOn;
    _Bool _enabledGridFlash;
    _Bool _enabledGridTapMode;
    _Bool _enabledGridHighlightMode;
    _Bool _enableKnob;
    _Bool _animateKnobTouch;
    _Bool _enableEmitterKnob;
    _Bool _alreadyAddedProxyObserver;
    _Bool _pressureMode;
    float _gridFadeOut;
    float _referenceNomalizedYValue;
    float _referenceNomalizedXValue;
    long long _xyPadTag;
    UISlider *_xParamControlProxy;
    UISlider *_yParamControlProxy;
    UIButton *_touchDownControlProxy;
    UIButton *_forceDownControlProxy;
    UISlider *_forceValueProxy;
    NSDictionary *_emitterParameters;
    unsigned long long _nrHorizontalGridSegments;
    unsigned long long _nrVerticalGridSegments;
    UIColor *_normalGridLineColor;
    UIColor *_highlightedGridLineColor;
    UIColor *_highlightedForceGridLineColor;
    NSMutableArray *_specialGridLines;
    UIColor *_normalSpecialGridLineColor;
    UIColor *_highlightedSpecialGridLineColor;
    UIColor *_highlightedSpecialForceGridLineColor;
    NSMutableArray *_gridHighlights;
    UIColor *_normalGridHighlightColor;
    UIColor *_highlightedGridHighlightColor;
    unsigned long long _gridFlashMode;
    UIColor *_gridFlashColor;
    NSArray *_gridLabels;
    CDUnknownBlockType _gridLabelLocBlock;
    unsigned long long _cornerMask;
    UIImage *_knobImage;
    double _labelInset;
    double _labelMaxWidth;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    UILabel *_topLabel;
    UILabel *_bottomLabel;
    UILabel *_horizontalCenteredLabel;
    double _labelMinimumFontSize;
    double _currentLabelRequiredMinSize;
    double _externalMaximumFontSize;
    UIColor *_normalLabelColor;
    UIColor *_highlightedLabelColor;
    UIColor *_normalBorderColor;
    UIColor *_highlightedBorderColor;
    UIColor *_normalBackgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIColor *_highlightedForceBackgroundColor;
    UIColor *_normalKnobColor;
    UIColor *_highlightedKnobColor;
    UIView *_gestureView;
    CbFxInputPressureRecognizer *_pressureGestureRecogizer;
    UIImageView *_backgroundView;
    UIImageView *_backgroundImageView;
    UIView *_gridView;
    UIView *_gridFlashView;
    NSMutableDictionary *_gridFlashRects;
    NSMutableArray *_gridLines;
    NSMutableArray *_gridStaticHighlightedViews;
    NSMutableArray *_gridLabelViews;
    UIFont *_gridLabelFont;
    UIView *_emitterKnobView;
    CAEmitterLayer *_emitter;
    UIImageView *_knobView;
    NSMutableDictionary *_targetActions;
    CMMotionManager *_motionManager;
    CMAttitude *_referenceAttitude;
    NSDate *_tapDate;
    UIView *_faceOverlayView;
    struct CGSize _cornerSize;
    struct CGSize _knobSize;
    struct CGRect _gestrureInset;
    struct CGRect _knobInset;
    struct CGRect _gridInset;
    struct CGRect _knobInsetRect;
}

@property(retain, nonatomic) UIView *faceOverlayView; // @synthesize faceOverlayView=_faceOverlayView;
@property(retain, nonatomic) NSDate *tapDate; // @synthesize tapDate=_tapDate;
@property(nonatomic) _Bool pressureMode; // @synthesize pressureMode=_pressureMode;
@property(nonatomic) float referenceNomalizedXValue; // @synthesize referenceNomalizedXValue=_referenceNomalizedXValue;
@property(nonatomic) float referenceNomalizedYValue; // @synthesize referenceNomalizedYValue=_referenceNomalizedYValue;
@property(copy, nonatomic) CMAttitude *referenceAttitude; // @synthesize referenceAttitude=_referenceAttitude;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) NSMutableDictionary *targetActions; // @synthesize targetActions=_targetActions;
@property(nonatomic) struct CGRect knobInsetRect; // @synthesize knobInsetRect=_knobInsetRect;
@property(retain, nonatomic) UIImageView *knobView; // @synthesize knobView=_knobView;
@property(nonatomic) CAEmitterLayer *emitter; // @synthesize emitter=_emitter;
@property(retain, nonatomic) UIView *emitterKnobView; // @synthesize emitterKnobView=_emitterKnobView;
@property(retain, nonatomic) UIFont *gridLabelFont; // @synthesize gridLabelFont=_gridLabelFont;
@property(retain, nonatomic) NSMutableArray *gridLabelViews; // @synthesize gridLabelViews=_gridLabelViews;
@property(retain, nonatomic) NSMutableArray *gridStaticHighlightedViews; // @synthesize gridStaticHighlightedViews=_gridStaticHighlightedViews;
@property(retain, nonatomic) NSMutableArray *gridLines; // @synthesize gridLines=_gridLines;
@property(retain, nonatomic) NSMutableDictionary *gridFlashRects; // @synthesize gridFlashRects=_gridFlashRects;
@property(retain, nonatomic) UIView *gridFlashView; // @synthesize gridFlashView=_gridFlashView;
@property(retain, nonatomic) UIView *gridView; // @synthesize gridView=_gridView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) CbFxInputPressureRecognizer *pressureGestureRecogizer; // @synthesize pressureGestureRecogizer=_pressureGestureRecogizer;
@property(retain, nonatomic) UIView *gestureView; // @synthesize gestureView=_gestureView;
@property(nonatomic) _Bool alreadyAddedProxyObserver; // @synthesize alreadyAddedProxyObserver=_alreadyAddedProxyObserver;
@property(retain, nonatomic) UIColor *highlightedKnobColor; // @synthesize highlightedKnobColor=_highlightedKnobColor;
@property(retain, nonatomic) UIColor *normalKnobColor; // @synthesize normalKnobColor=_normalKnobColor;
@property(retain, nonatomic) UIColor *highlightedForceBackgroundColor; // @synthesize highlightedForceBackgroundColor=_highlightedForceBackgroundColor;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
@property(retain, nonatomic) UIColor *highlightedBorderColor; // @synthesize highlightedBorderColor=_highlightedBorderColor;
@property(retain, nonatomic) UIColor *normalBorderColor; // @synthesize normalBorderColor=_normalBorderColor;
@property(retain, nonatomic) UIColor *highlightedLabelColor; // @synthesize highlightedLabelColor=_highlightedLabelColor;
@property(retain, nonatomic) UIColor *normalLabelColor; // @synthesize normalLabelColor=_normalLabelColor;
@property(nonatomic) double externalMaximumFontSize; // @synthesize externalMaximumFontSize=_externalMaximumFontSize;
@property(readonly, nonatomic) double currentLabelRequiredMinSize; // @synthesize currentLabelRequiredMinSize=_currentLabelRequiredMinSize;
@property(nonatomic) double labelMinimumFontSize; // @synthesize labelMinimumFontSize=_labelMinimumFontSize;
@property(readonly, nonatomic) UILabel *horizontalCenteredLabel; // @synthesize horizontalCenteredLabel=_horizontalCenteredLabel;
@property(readonly, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(readonly, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(readonly, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(readonly, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(nonatomic) double labelMaxWidth; // @synthesize labelMaxWidth=_labelMaxWidth;
@property(nonatomic) double labelInset; // @synthesize labelInset=_labelInset;
@property(nonatomic) _Bool enableEmitterKnob; // @synthesize enableEmitterKnob=_enableEmitterKnob;
@property(nonatomic) _Bool animateKnobTouch; // @synthesize animateKnobTouch=_animateKnobTouch;
@property(retain, nonatomic) UIImage *knobImage; // @synthesize knobImage=_knobImage;
@property(nonatomic) struct CGSize knobSize; // @synthesize knobSize=_knobSize;
@property(nonatomic) _Bool enableKnob; // @synthesize enableKnob=_enableKnob;
@property(nonatomic) unsigned long long cornerMask; // @synthesize cornerMask=_cornerMask;
@property(nonatomic) struct CGSize cornerSize; // @synthesize cornerSize=_cornerSize;
@property(copy, nonatomic) CDUnknownBlockType gridLabelLocBlock; // @synthesize gridLabelLocBlock=_gridLabelLocBlock;
@property(retain, nonatomic) NSArray *gridLabels; // @synthesize gridLabels=_gridLabels;
@property(retain, nonatomic) UIColor *gridFlashColor; // @synthesize gridFlashColor=_gridFlashColor;
@property(nonatomic) float gridFadeOut; // @synthesize gridFadeOut=_gridFadeOut;
@property(nonatomic) unsigned long long gridFlashMode; // @synthesize gridFlashMode=_gridFlashMode;
@property(nonatomic) _Bool enabledGridHighlightMode; // @synthesize enabledGridHighlightMode=_enabledGridHighlightMode;
@property(nonatomic) _Bool enabledGridTapMode; // @synthesize enabledGridTapMode=_enabledGridTapMode;
@property(nonatomic) _Bool enabledGridFlash; // @synthesize enabledGridFlash=_enabledGridFlash;
@property(retain, nonatomic) UIColor *highlightedGridHighlightColor; // @synthesize highlightedGridHighlightColor=_highlightedGridHighlightColor;
@property(retain, nonatomic) UIColor *normalGridHighlightColor; // @synthesize normalGridHighlightColor=_normalGridHighlightColor;
@property(retain, nonatomic) NSMutableArray *gridHighlights; // @synthesize gridHighlights=_gridHighlights;
@property(retain, nonatomic) UIColor *highlightedSpecialForceGridLineColor; // @synthesize highlightedSpecialForceGridLineColor=_highlightedSpecialForceGridLineColor;
@property(retain, nonatomic) UIColor *highlightedSpecialGridLineColor; // @synthesize highlightedSpecialGridLineColor=_highlightedSpecialGridLineColor;
@property(retain, nonatomic) UIColor *normalSpecialGridLineColor; // @synthesize normalSpecialGridLineColor=_normalSpecialGridLineColor;
@property(retain, nonatomic) NSMutableArray *specialGridLines; // @synthesize specialGridLines=_specialGridLines;
@property(retain, nonatomic) UIColor *highlightedForceGridLineColor; // @synthesize highlightedForceGridLineColor=_highlightedForceGridLineColor;
@property(retain, nonatomic) UIColor *highlightedGridLineColor; // @synthesize highlightedGridLineColor=_highlightedGridLineColor;
@property(retain, nonatomic) UIColor *normalGridLineColor; // @synthesize normalGridLineColor=_normalGridLineColor;
@property(nonatomic) struct CGRect gridInset; // @synthesize gridInset=_gridInset;
@property(nonatomic) unsigned long long nrVerticalGridSegments; // @synthesize nrVerticalGridSegments=_nrVerticalGridSegments;
@property(nonatomic) unsigned long long nrHorizontalGridSegments; // @synthesize nrHorizontalGridSegments=_nrHorizontalGridSegments;
@property(retain, nonatomic) NSDictionary *emitterParameters; // @synthesize emitterParameters=_emitterParameters;
@property(nonatomic) _Bool knobAlwaysOn; // @synthesize knobAlwaysOn=_knobAlwaysOn;
@property(nonatomic) _Bool emitterAlwaysOn; // @synthesize emitterAlwaysOn=_emitterAlwaysOn;
@property(nonatomic) _Bool centeredYMode; // @synthesize centeredYMode=_centeredYMode;
@property(nonatomic) _Bool centeredXMode; // @synthesize centeredXMode=_centeredXMode;
@property(nonatomic) struct CGRect knobInset; // @synthesize knobInset=_knobInset;
@property(nonatomic) struct CGRect gestrureInset; // @synthesize gestrureInset=_gestrureInset;
@property(readonly, nonatomic) UISlider *forceValueProxy; // @synthesize forceValueProxy=_forceValueProxy;
@property(readonly, nonatomic) UIButton *forceDownControlProxy; // @synthesize forceDownControlProxy=_forceDownControlProxy;
@property(readonly, nonatomic) UIButton *touchDownControlProxy; // @synthesize touchDownControlProxy=_touchDownControlProxy;
@property(readonly, nonatomic) UISlider *yParamControlProxy; // @synthesize yParamControlProxy=_yParamControlProxy;
@property(readonly, nonatomic) UISlider *xParamControlProxy; // @synthesize xParamControlProxy=_xParamControlProxy;
@property(nonatomic) _Bool motionModeOn; // @synthesize motionModeOn=_motionModeOn;
@property(readonly) _Bool latchModeOn; // @synthesize latchModeOn=_latchModeOn;
@property(nonatomic) long long xyPadTag; // @synthesize xyPadTag=_xyPadTag;
- (void).cxx_destruct;
- (void)setAssetSet:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleForcePress:(id)arg1;
- (void)xyPadTouchLong:(id)arg1;
- (void)setNormalizedXValue:(float)arg1 andNormalizedYValue:(float)arg2 andSendActionForState:(long long)arg3;
- (void)sendActionsForState:(long long)arg1;
- (void)cancelTouches;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)idleCallHandler:(id)arg1;
- (void)stopMotion;
- (void)startMotion;
- (void)updateGridFlashingForPoint:(struct CGPoint)arg1 andState:(long long)arg2;
- (struct CGRect)getGridFlashFrameForPoint:(struct CGPoint)arg1;
- (void)_internalSetEnabledGridFlash:(_Bool)arg1 update:(_Bool)arg2;
- (void)updateGridColor;
- (void)updateGridColorForState:(_Bool)arg1;
- (void)updateKnobColor;
- (void)updateEmitter;
- (void)updateBackgroundColor;
- (void)updateBackgroundImageColor;
- (void)updateBorderColor;
- (void)updateLabelColor;
- (void)updateGridHighlighting;
- (void)updateColors;
- (void)updateUI;
- (_Bool)emitterIsHighlighted;
- (_Bool)isHighlighted;
- (void)updateOnValueChange;
- (void)updateBackgroundPlate;
- (void)flashPadWithEmitter:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)layoutGridLabels;
- (void)layoutGrid;
- (void)layoutGridHighlights;
- (void)layoutLabels;
- (void)layoutKnob;
- (void)layoutGestureView;
- (void)layoutComponents;
- (void)setupEmitter;
- (id)emitterCellWithName:(id)arg1 forDescriptionDict:(id)arg2;
- (unsigned long long)_fontSizeToMatchString:(id)arg1 ofSize:(double)arg2 inLabelWidth:(double)arg3;
- (struct CGPoint)_pointFromNormalizedX:(float)arg1 normalizedY:(float)arg2;
- (struct CGPoint)locationClippedToGridForGestureRecognizer:(id)arg1 shouldContinueKnobUpdate:(_Bool *)arg2;
- (void)animateKnobView;
- (void)_internalUpdateEmitteBirthrate:(_Bool)arg1;
- (id)emitterRenderModeForNumber:(long long)arg1;
- (id)emitterModeForNumber:(long long)arg1;
- (id)emitterShapeForNumber:(long long)arg1;
- (id)fadeImageForColor:(id)arg1 fadePercentage:(double)arg2 bounds:(struct CGRect)arg3 gap:(struct CGRect)arg4;
- (id)labelFromLabel:(id)arg1;
- (double)clamp:(double)arg1 toMin:(double)arg2 toMax:(double)arg3;
- (double)clamp:(double)arg1;
- (void)addRemoveInternalProxyObserver:(_Bool)arg1;
@property(nonatomic) float yValue;
@property(nonatomic) float yMaxValue;
@property(nonatomic) float yMinValue;
@property(nonatomic) float xValue;
@property(nonatomic) float xMaxValue;
@property(nonatomic) float xMinValue;
- (float)yNormalizedValue;
- (void)setYNormalizedValue:(float)arg1;
- (float)xNormalizedValue;
- (void)setXNormalizedValue:(float)arg1;
- (double)normalizedValueFromValue:(double)arg1 minimum:(double)arg2 maximum:(double)arg3;
- (double)valueFromNormalizedValue:(double)arg1 minimum:(double)arg2 maximum:(double)arg3;
- (double)yPercentValueForGestureRecognizerLocation:(struct CGPoint)arg1;
- (double)xPercentValueForGestureRecognizerLocation:(struct CGPoint)arg1;
@property(nonatomic) _Bool flippedForceValue;
- (void)_internalSetGridFadeOut:(float)arg1 update:(_Bool)arg2;
- (void)_intenalSetGridInset:(struct CGRect)arg1 update:(_Bool)arg2;
- (void)_internalSetNrVerticalGridSegments:(unsigned long long)arg1 update:(_Bool)arg2;
- (void)_internalsetNrHorizontalGridSegments:(unsigned long long)arg1 update:(_Bool)arg2;
- (void)setNrHorizontalGridSegments:(unsigned long long)arg1 nrVerticalGridSegments:(unsigned long long)arg2 inset:(struct CGRect)arg3 gridFadeOut:(float)arg4 gridFlash:(_Bool)arg5;
@property(retain, nonatomic) UIImage *backgroundImageHighlighted;
@property(retain, nonatomic) UIImage *backgroundImageNormal;
- (void)setLatchModeOn:(_Bool)arg1 sendStateOnOff:(_Bool)arg2;
@property(readonly) _Bool touchActive;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 sendOnGestureRecognizerstate:(long long)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 sendOnGestureRecognizerstate:(long long)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)willMoveToWindow:(id)arg1;
- (void)dealloc;
- (void)internalInit;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
