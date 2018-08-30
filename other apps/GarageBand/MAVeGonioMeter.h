//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAVeElementBase.h"

@class NSDictionary, NSMutableArray;

@interface MAVeGonioMeter : MAVeElementBase
{
    NSMutableArray *_layersToBeRendered;
    double _lastHoldUpdateTime;
    _Bool _holdEnabled;
    id _gridColor;
    id _meterColor;
    double _holdTime;
    double _decayTime;
    NSDictionary *_gridLayerDict;
    NSMutableArray *_pathLayerArray;
    NSMutableArray *_holdLayerArray;
    unsigned long long _pathLayerIndex;
    unsigned long long _holdLayerIndex;
}

@property(nonatomic) unsigned long long holdLayerIndex; // @synthesize holdLayerIndex=_holdLayerIndex;
@property(nonatomic) unsigned long long pathLayerIndex; // @synthesize pathLayerIndex=_pathLayerIndex;
@property(retain, nonatomic) NSMutableArray *holdLayerArray; // @synthesize holdLayerArray=_holdLayerArray;
@property(retain, nonatomic) NSMutableArray *pathLayerArray; // @synthesize pathLayerArray=_pathLayerArray;
@property(retain, nonatomic) NSDictionary *gridLayerDict; // @synthesize gridLayerDict=_gridLayerDict;
@property(nonatomic) _Bool holdEnabled; // @synthesize holdEnabled=_holdEnabled;
@property(nonatomic) double decayTime; // @synthesize decayTime=_decayTime;
@property(nonatomic) double holdTime; // @synthesize holdTime=_holdTime;
@property(retain, nonatomic) id meterColor; // @synthesize meterColor=_meterColor;
@property(retain, nonatomic) id gridColor; // @synthesize gridColor=_gridColor;
- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)liveResizeChanged;
- (void)setScaleFactor:(double)arg1;
- (struct CGContext *)newResizedCGBitmapContext:(struct CGContext *)arg1 newSize:(struct CGSize)arg2;
- (void)reset;
- (void)renderToHoldLayer:(id)arg1;
- (void)setMeterDataX:(float *)arg1 y:(float *)arg2 numPoints:(long long)arg3;
- (void)createGridLayer;
- (void)updateLayers;
- (void)setupLayersWithRootLayer:(id)arg1;

@end

