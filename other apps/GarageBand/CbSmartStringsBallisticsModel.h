//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer;

@interface CbSmartStringsBallisticsModel : NSObject
{
    double _recalculationPeriod;
    double _attackDuration;
    double _holdDuration;
    int _intensityHighPassThreshold;
    SEL _action;
    int _lastIntensityReceived;
    NSTimer *_recalcTimer;
    NSTimer *_attackTimer;
    int _calculatedIntensity;
    float _lastCalculatedIntensity;
    int _currentTrackingState;
    float _histeresis;
    id _target;
}

+ (id)_nameForTrackingState:(int)arg1;
@property SEL action; // @synthesize action=_action;
@property __weak id target; // @synthesize target=_target;
@property(nonatomic) int currentTrackingState; // @synthesize currentTrackingState=_currentTrackingState;
@property(nonatomic) int calculatedIntensity; // @synthesize calculatedIntensity=_calculatedIntensity;
@property(nonatomic) int intensityHighPassThreshold; // @synthesize intensityHighPassThreshold=_intensityHighPassThreshold;
@property(nonatomic) double recalculationPeriod; // @synthesize recalculationPeriod=_recalculationPeriod;
- (void).cxx_destruct;
- (void)_clearTimer:(id *)arg1;
- (void)reset;
- (void)_startReleasePeriod;
- (void)_endAttackPeriod;
- (void)_recalculate;
- (void)_pushIntensityValue:(int)arg1;
- (void)pushVelocityValue:(float)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 andAction:(SEL)arg2;
@property(readonly, nonatomic) int defaultIntensity;

@end

