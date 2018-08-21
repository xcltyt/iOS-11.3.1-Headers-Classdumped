//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureBracketedStillImageSettings, AVCapturePhoto, AVCapturePhotoOutput, AVCaptureResolvedPhotoSettings, NSError, NSURL;

@protocol AVCapturePhotoCaptureDelegate <NSObject>

@optional
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 didFinishCaptureForResolvedSettings:(AVCaptureResolvedPhotoSettings *)arg2 error:(NSError *)arg3;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 didFinishProcessingLivePhotoToMovieFileAtURL:(NSURL *)arg2 duration:(CDStruct_198678f7)arg3 photoDisplayTime:(CDStruct_198678f7)arg4 resolvedSettings:(AVCaptureResolvedPhotoSettings *)arg5 error:(NSError *)arg6;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 didFinishRecordingLivePhotoMovieForEventualFileAtURL:(NSURL *)arg2 resolvedSettings:(AVCaptureResolvedPhotoSettings *)arg3;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 didFinishProcessingRawPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 resolvedSettings:(AVCaptureResolvedPhotoSettings *)arg4 bracketSettings:(AVCaptureBracketedStillImageSettings *)arg5 error:(NSError *)arg6;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 didFinishProcessingPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 resolvedSettings:(AVCaptureResolvedPhotoSettings *)arg4 bracketSettings:(AVCaptureBracketedStillImageSettings *)arg5 error:(NSError *)arg6;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 didFinishProcessingPhoto:(AVCapturePhoto *)arg2 error:(NSError *)arg3;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 didCapturePhotoForResolvedSettings:(AVCaptureResolvedPhotoSettings *)arg2;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 willCapturePhotoForResolvedSettings:(AVCaptureResolvedPhotoSettings *)arg2;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 willBeginCaptureForResolvedSettings:(AVCaptureResolvedPhotoSettings *)arg2;
@end

