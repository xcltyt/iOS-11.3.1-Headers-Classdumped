//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DKDiagnosticController.h"

@class CameraSensorInputs;

@interface CameraSensorController : DKDiagnosticController
{
    int _soloFrameCount;
    int _alphaSyncFrameCount;
    int _bravoSyncFrameCount;
    CameraSensorInputs *_inputs;
}

@property(retain, nonatomic) CameraSensorInputs *inputs; // @synthesize inputs=_inputs;
@property(nonatomic) int bravoSyncFrameCount; // @synthesize bravoSyncFrameCount=_bravoSyncFrameCount;
@property(nonatomic) int alphaSyncFrameCount; // @synthesize alphaSyncFrameCount=_alphaSyncFrameCount;
@property(nonatomic) int soloFrameCount; // @synthesize soloFrameCount=_soloFrameCount;
- (void).cxx_destruct;
- (void)runLegacyCameraTest;
- (_Bool)syncAndStreamCameras:(id)arg1 bravo:(id)arg2 error:(id *)arg3;
- (_Bool)streamCamera:(id)arg1 error:(id *)arg2;
- (_Bool)enableCameraTestPatternPN9:(id)arg1 error:(id *)arg2;
- (_Bool)enableCameraMaxDataRate:(id)arg1 error:(id *)arg2;
- (_Bool)setCameraProperties:(id)arg1 error:(id *)arg2;
- (void)runCameraTest;
- (void)start;
- (void)setupWithInputs:(id)arg1 responder:(id)arg2;

@end
