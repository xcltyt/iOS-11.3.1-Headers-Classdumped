//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAVeElementBase.h"

@class NSArray, NSDictionary, NSMutableIndexSet, NSPointerArray;

@interface MAVeSegmentedControl : MAVeElementBase
{
    NSPointerArray *_shadowLayerPointers;
    NSPointerArray *_bezelLayerPointers;
    NSPointerArray *_lightEdgeLayerPointers;
    NSPointerArray *_labelLayerPointers;
    NSMutableIndexSet *_updateLabelIndexSet;
    _Bool _vertical;
    NSArray *_segments;
    NSDictionary *_shadowProperties;
    NSDictionary *_bezelProperties;
    NSDictionary *_lightEdgeProperties;
    NSDictionary *_labelProperties;
    NSDictionary *_offStateAttributes;
    NSDictionary *_onStateAttributes;
}

@property(retain, nonatomic) NSDictionary *onStateAttributes; // @synthesize onStateAttributes=_onStateAttributes;
@property(retain, nonatomic) NSDictionary *offStateAttributes; // @synthesize offStateAttributes=_offStateAttributes;
@property(retain, nonatomic) NSDictionary *labelProperties; // @synthesize labelProperties=_labelProperties;
@property(retain, nonatomic) NSDictionary *lightEdgeProperties; // @synthesize lightEdgeProperties=_lightEdgeProperties;
@property(retain, nonatomic) NSDictionary *bezelProperties; // @synthesize bezelProperties=_bezelProperties;
@property(retain, nonatomic) NSDictionary *shadowProperties; // @synthesize shadowProperties=_shadowProperties;
@property(nonatomic) _Bool vertical; // @synthesize vertical=_vertical;
- (void).cxx_destruct;
- (void)exitedEvent:(id)arg1;
- (void)movedEvent:(id)arg1;
- (void)upEvent:(id)arg1;
- (void)downEvent:(id)arg1;
- (void)setNeedsUpdateLabelAtIndex:(unsigned long long)arg1;
- (void)updateLabelLayerAtIndex:(unsigned long long)arg1 frame:(struct CGRect)arg2;
- (void)updateLightEdgeLayerAtIndex:(unsigned long long)arg1 frame:(struct CGRect)arg2;
- (void)updateBezelLayerAtIndex:(unsigned long long)arg1 frame:(struct CGRect)arg2;
- (void)updateShadowLayerAtIndex:(unsigned long long)arg1 frame:(struct CGRect)arg2;
- (void)tearDownLayers;
- (void)setUpLayers;
- (struct CGRect)segmentFrameAtIndex:(unsigned long long)arg1;
- (struct CGSize)intrinsicSize;
- (void)updateLayers;
- (void)setupLayersWithRootLayer:(id)arg1;
- (void)setEnabled:(_Bool)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (double)widthForSegmentAtIndex:(unsigned long long)arg1;
- (void)setWidth:(double)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (id)attributedTitleForSegmentAtIndex:(unsigned long long)arg1;
- (void)setAttributedTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 state:(long long)arg3;
- (void)setAttributedTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (id)titleForSegmentAtIndex:(unsigned long long)arg1;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 state:(long long)arg3;
- (void)addSegmentWithTitle:(id)arg1;
- (void)removeObjectFromSegmentsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inSegmentsAtIndex:(unsigned long long)arg2 state:(long long)arg3;
- (id)objectInSegmentsAtIndex:(unsigned long long)arg1;
- (id)segmentAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfSegments;
@property(copy, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(nonatomic) long long selectedSegmentIndex;
@property(nonatomic) double design_horizontalTextOffset;
@property(readonly, nonatomic) double horizontalTextOffset;
@property(nonatomic) double design_baselinePosition;
@property(readonly, nonatomic) double baselinePosition;
@property(nonatomic) double design_cornerRadius;
@property(readonly, nonatomic) double cornerRadius;
- (void)dealloc;
- (id)init;

@end

