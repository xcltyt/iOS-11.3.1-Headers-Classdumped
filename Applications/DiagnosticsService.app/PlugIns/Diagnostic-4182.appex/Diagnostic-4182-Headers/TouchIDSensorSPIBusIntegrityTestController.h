//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DKDiagnosticController.h"

@class NSMutableArray, NSTimer, TouchIDSensorSPIBusIntegrityInputs;

@interface TouchIDSensorSPIBusIntegrityTestController : DKDiagnosticController
{
    int _runCount;
    NSMutableArray *_allResults;
    NSTimer *_runTimer;
    TouchIDSensorSPIBusIntegrityInputs *_inputs;
}

@property(retain, nonatomic) TouchIDSensorSPIBusIntegrityInputs *inputs; // @synthesize inputs=_inputs;
@property(nonatomic) int runCount; // @synthesize runCount=_runCount;
@property(retain, nonatomic) NSTimer *runTimer; // @synthesize runTimer=_runTimer;
@property(retain, nonatomic) NSMutableArray *allResults; // @synthesize allResults=_allResults;
- (void).cxx_destruct;
- (void)teardown;
- (void)finish;
- (void)runDiagnostic;
- (void)start;
- (void)setupWithInputs:(id)arg1 responder:(id)arg2;

@end
