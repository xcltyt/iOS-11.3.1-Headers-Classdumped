//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CbFretboardStringLayerDelegate, UIImage;

@interface CbFretboardString : UIView
{
    float _damping;
    float _amplitude;
    double _lastInterval;
    UIImage *_stringImage;
    UIImage *_blurImage;
    UIImage *_shadowImage;
    _Bool _damp;
    _Bool _dampingEnabled;
    struct CGRect _originalFrame;
    float _pitchBend;
    double _fretPosition;
    double _leftAnchor;
    double _positionAdjustment;
    CALayer *_leftLayer;
    CALayer *_leftShadowLayer;
    CALayer *_rightStillLayer;
    CALayer *_rightBlurLayer;
    CALayer *_rightShadowLayer;
    CALayer *_rightBlurMaskLayer;
    _Bool _complexDrawing;
    _Bool _muted;
    _Bool _debug_disableStringDrawing;
    _Bool _blurImageChanged;
    double _minUpdateTime;
    double _restoreTimeInterval;
    CbFretboardStringLayerDelegate *_layerDelegate;
    _Bool _hidesShadows;
    _Bool _decreasedRate;
    _Bool _useShapeLayer;
    double _stringShadowXOffset;
    double _stringShadowYOffset;
    double _shadowOpacityFactor;
}

@property(nonatomic) float amplitude; // @synthesize amplitude=_amplitude;
@property(nonatomic) _Bool useShapeLayer; // @synthesize useShapeLayer=_useShapeLayer;
@property(nonatomic) double minUpdateTime; // @synthesize minUpdateTime=_minUpdateTime;
@property(nonatomic) _Bool decreasedRate; // @synthesize decreasedRate=_decreasedRate;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) float damping; // @synthesize damping=_damping;
@property(nonatomic) _Bool dampingEnabled; // @synthesize dampingEnabled=_dampingEnabled;
@property(nonatomic) double positionAdjustment; // @synthesize positionAdjustment=_positionAdjustment;
@property(nonatomic) double leftAnchor; // @synthesize leftAnchor=_leftAnchor;
@property(nonatomic) double fretPosition; // @synthesize fretPosition=_fretPosition;
@property(nonatomic) float pitchBend; // @synthesize pitchBend=_pitchBend;
@property(nonatomic) double shadowOpacityFactor; // @synthesize shadowOpacityFactor=_shadowOpacityFactor;
@property(nonatomic) _Bool hidesShadows; // @synthesize hidesShadows=_hidesShadows;
@property(nonatomic) double stringShadowYOffset; // @synthesize stringShadowYOffset=_stringShadowYOffset;
@property(nonatomic) double stringShadowXOffset; // @synthesize stringShadowXOffset=_stringShadowXOffset;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(retain, nonatomic) UIImage *blurImage; // @synthesize blurImage=_blurImage;
@property(retain, nonatomic) UIImage *stringImage; // @synthesize stringImage=_stringImage;
- (void).cxx_destruct;
- (void)_updateImages;
- (void)updateVibration;
- (void)redraw;
- (void)_updateFrame:(_Bool)arg1;
- (void)_updateFrame;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 complexDrawing:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)damp;
- (_Bool)isInMotion;
- (void)pluckWithAmplitude:(float)arg1 andUpdate:(_Bool)arg2;
- (void)pluckWithAmplitude:(float)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

