//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAVeElementBase.h"

@class CAGradientLayer, CALayer, MAVeScalableTextLayer, NSAttributedString, NSDictionary, NSString;

@interface MAVeButton : MAVeElementBase
{
    struct {
        unsigned int isPressed:1;
        unsigned int isMouseOver:1;
    } _buttonFlags;
    long long _buttonType;
    NSString *_offTitle;
    NSString *_onTitle;
    NSAttributedString *_attributedOffTitle;
    NSAttributedString *_attributedOnTitle;
    CALayer *_lightEdgeLayer;
    CAGradientLayer *_backgroundLayer;
    CAGradientLayer *_surfaceLayer;
    MAVeScalableTextLayer *_labelLayer;
    NSDictionary *_offStateAttributes;
    NSDictionary *_onStateAttributes;
}

@property(retain, nonatomic) NSDictionary *onStateAttributes; // @synthesize onStateAttributes=_onStateAttributes;
@property(retain, nonatomic) NSDictionary *offStateAttributes; // @synthesize offStateAttributes=_offStateAttributes;
@property(retain, nonatomic) MAVeScalableTextLayer *labelLayer; // @synthesize labelLayer=_labelLayer;
@property(retain, nonatomic) CAGradientLayer *surfaceLayer; // @synthesize surfaceLayer=_surfaceLayer;
@property(retain, nonatomic) CAGradientLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) CALayer *lightEdgeLayer; // @synthesize lightEdgeLayer=_lightEdgeLayer;
@property(retain, nonatomic) NSAttributedString *attributedOnTitle; // @synthesize attributedOnTitle=_attributedOnTitle;
@property(retain, nonatomic) NSAttributedString *attributedOffTitle; // @synthesize attributedOffTitle=_attributedOffTitle;
@property(retain, nonatomic) NSString *onTitle; // @synthesize onTitle=_onTitle;
@property(retain, nonatomic) NSString *offTitle; // @synthesize offTitle=_offTitle;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
- (void).cxx_destruct;
- (void)setPressed:(_Bool)arg1;
- (_Bool)pressed;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)exitedEvent:(id)arg1;
- (void)enteredEvent:(id)arg1;
- (void)upEvent:(id)arg1;
- (void)downEvent:(id)arg1;
- (void)updateLayers;
- (void)setupLayersWithRootLayer:(id)arg1;
@property(nonatomic) struct CGSize design_labelOffset;
@property(readonly, nonatomic) struct CGSize labelOffset;
@property(nonatomic) double design_baselinePosition;
@property(readonly, nonatomic) double baselinePosition;
@property(nonatomic) double design_shadowEdgeHeight;
@property(readonly, nonatomic) double shadowEdgeHeight;
@property(nonatomic) double design_lightEdgeHeight;
@property(readonly, nonatomic) double lightEdgeHeight;
@property(nonatomic) double design_cornerRadius;
@property(readonly, nonatomic) double cornerRadius;
@property(nonatomic) unsigned long long abbreviationLength;
@property(nonatomic) _Bool abbreviate;
- (void)setScaleFactor:(double)arg1;
- (void)setCornerRadius:(double)arg1;
@property(nonatomic) _Bool snapAnchorPoint;
- (void)setattributedOnTitle:(id)arg1;
- (void)setattributedOffTitle:(id)arg1;
- (void)updateTitle;
- (void)valueDidChangeValue:(id)arg1 oldValue:(double)arg2;
@property(nonatomic) _Bool on;
- (void)liveResizeChanged;
- (id)init;

@end
