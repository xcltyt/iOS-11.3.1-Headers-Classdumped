//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAVeXYPad.h"

@class CALayer;

@interface MAVeMorphXYPad : MAVeXYPad
{
    CALayer *_haloLayer;
}

@property(retain, nonatomic) CALayer *haloLayer; // @synthesize haloLayer=_haloLayer;
- (void).cxx_destruct;
- (void)updateThumbLayer;
- (void)tearDownLayers;
- (void)setupThumbLayer;
- (void)setupLayersWithRootLayer:(id)arg1;

@end

