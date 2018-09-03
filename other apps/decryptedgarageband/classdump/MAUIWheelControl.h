//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "MAAssetManagerMixInParentProtocol-Protocol.h"

@class CAGradientLayer, KnobLayerDelegate, MAAssetManagerMixIn, NSArray, NSString, NSTimer, UIColor;

@interface MAUIWheelControl : UIControl <MAAssetManagerMixInParentProtocol>
{
    double _knobLayerWidth;
    CAGradientLayer *_knobLayer;
    _Bool _animate;
    _Bool _springLoaded;
    _Bool _continuous;
    _Bool _knobIsVisible;
    BOOL _imageStartOffset;
    BOOL _imageStepDivisor;
    _Bool _animateKnob;
    double _value;
    double _maximumValue;
    double _minimumValue;
    double _springValue;
    double _duration;
    double _knobCenterHeight;
    NSArray *_wheelImages;
    NSArray *_knobGradientPositions;
    NSArray *_knobGradientColors;
    double _knobLeftRightInset;
    MAAssetManagerMixIn *_assetManagerMixIn;
    NSTimer *_animationTimer;
    double _animationEndValue;
    KnobLayerDelegate *_knobLayerDelegate;
}

+ (id)assetSetFamily;
@property(retain, nonatomic) KnobLayerDelegate *knobLayerDelegate; // @synthesize knobLayerDelegate=_knobLayerDelegate;
@property(nonatomic) double animationEndValue; // @synthesize animationEndValue=_animationEndValue;
@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(nonatomic) _Bool animateKnob; // @synthesize animateKnob=_animateKnob;
@property(nonatomic) BOOL imageStepDivisor; // @synthesize imageStepDivisor=_imageStepDivisor;
@property(nonatomic) BOOL imageStartOffset; // @synthesize imageStartOffset=_imageStartOffset;
@property(retain, nonatomic) CAGradientLayer *knobLayer; // @synthesize knobLayer=_knobLayer;
@property(retain, nonatomic) MAAssetManagerMixIn *assetManagerMixIn; // @synthesize assetManagerMixIn=_assetManagerMixIn;
@property(nonatomic) double knobLeftRightInset; // @synthesize knobLeftRightInset=_knobLeftRightInset;
@property(retain, nonatomic) NSArray *knobGradientColors; // @synthesize knobGradientColors=_knobGradientColors;
@property(retain, nonatomic) NSArray *knobGradientPositions; // @synthesize knobGradientPositions=_knobGradientPositions;
@property(retain, nonatomic) NSArray *wheelImages; // @synthesize wheelImages=_wheelImages;
@property(nonatomic) _Bool knobIsVisible; // @synthesize knobIsVisible=_knobIsVisible;
@property(nonatomic) double knobCenterHeight; // @synthesize knobCenterHeight=_knobCenterHeight;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic, getter=isContinuous) _Bool continuous; // @synthesize continuous=_continuous;
@property(nonatomic) double springValue; // @synthesize springValue=_springValue;
@property(nonatomic, getter=isSpringLoaded) _Bool springLoaded; // @synthesize springLoaded=_springLoaded;
@property(nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) double value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (double)posDiff:(id)arg1;
@property(readonly, nonatomic) double wheelWidth;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic) UIColor *knobBorderColor; // @dynamic knobBorderColor;
@property(nonatomic) double knobBorderWidth; // @dynamic knobBorderWidth;
@property(nonatomic) double knobRadius;
@property(readonly, nonatomic) double knobWidth; // @synthesize knobWidth=_knobLayerWidth;
- (void)setKnobWidth:(double)arg1;
- (void)setValue:(double)arg1 animated:(_Bool)arg2;
- (void)valueAnimation:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initialize;
- (void)initializeKnopLayer:(long long)arg1;
- (struct CGColor *)createColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
@property(readonly, nonatomic) double normalValue;
@property(readonly, nonatomic) double absoluteRange;
@property(readonly, nonatomic) double wheelValue;
@property(readonly, nonatomic) double wheelCircumference;
@property(readonly, nonatomic) double valueAngle;
@property(readonly, nonatomic) double knobAngleSpan;
- (double)radius;
- (id)translatePositions:(id)arg1 withOffset:(double)arg2;
- (id)scalePositions:(id)arg1 withFactor:(double)arg2;
- (void)syncKnobLayer;
- (id)imageForCurrentValue;
- (void)updateLayers;
- (void)updateKnobLayer;
- (void)updateKnobGradient;
- (void)updateKnobVisibility;
- (_Bool)tryInitializationOnAssetChange;

// Remaining properties
@property(retain, nonatomic) NSString *assetSetPath; // @dynamic assetSetPath;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
