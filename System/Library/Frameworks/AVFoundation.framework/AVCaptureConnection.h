/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureConnectionInternal, NSArray, AVCaptureOutput, AVCaptureVideoPreviewLayer;

@interface AVCaptureConnection : NSObject {

	AVCaptureConnectionInternal* _internal;

}

@property (nonatomic,readonly) NSArray * inputPorts; 
@property (nonatomic,readonly) AVCaptureOutput * output; 
@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * videoPreviewLayer; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,readonly) NSArray * audioChannels; 
@property (getter=isVideoMirroringSupported,nonatomic,readonly) BOOL supportsVideoMirroring; 
@property (assign,getter=isVideoMirrored,nonatomic) BOOL videoMirrored; 
@property (assign,nonatomic) BOOL automaticallyAdjustsVideoMirroring; 
@property (getter=isVideoOrientationSupported,nonatomic,readonly) BOOL supportsVideoOrientation; 
@property (assign,nonatomic) long long videoOrientation; 
@property (getter=isVideoMinFrameDurationSupported,nonatomic,readonly) BOOL supportsVideoMinFrameDuration; 
@property (assign,nonatomic) SCD_Struct_AV2 videoMinFrameDuration; 
@property (getter=isVideoMaxFrameDurationSupported,nonatomic,readonly) BOOL supportsVideoMaxFrameDuration; 
@property (assign,nonatomic) SCD_Struct_AV2 videoMaxFrameDuration; 
@property (nonatomic,readonly) double videoMaxScaleAndCropFactor; 
@property (assign,nonatomic) double videoScaleAndCropFactor; 
@property (assign,nonatomic) long long preferredVideoStabilizationMode; 
@property (nonatomic,readonly) long long activeVideoStabilizationMode; 
@property (getter=isVideoStabilizationSupported,nonatomic,readonly) BOOL supportsVideoStabilization; 
@property (getter=isVideoStabilizationEnabled,nonatomic,readonly) BOOL videoStabilizationEnabled; 
@property (assign,nonatomic) BOOL enablesVideoStabilizationWhenAvailable; 
@property (getter=isCameraIntrinsicMatrixDeliverySupported,nonatomic,readonly) BOOL cameraIntrinsicMatrixDeliverySupported; 
@property (assign,getter=isCameraIntrinsicMatrixDeliveryEnabled,nonatomic) BOOL cameraIntrinsicMatrixDeliveryEnabled; 
+(id)connectionWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2 ;
+(void)initialize;
+(id)connectionWithInputPorts:(id)arg1 output:(id)arg2 ;
-(BOOL)isLive;
-(int)changeSeed;
-(void)bumpChangeSeed;
-(float)getAvgAudioLevelForChannel:(id)arg1 ;
-(float)getPeakAudioLevelForChannel:(id)arg1 ;
-(id)sourceDevice;
-(NSArray *)audioChannels;
-(BOOL)automaticallyAdjustsVideoMirroring;
-(long long)videoOrientation;
-(SCD_Struct_AV2)videoMinFrameDuration;
-(SCD_Struct_AV2)videoMaxFrameDuration;
-(double)videoMaxScaleAndCropFactor;
-(double)videoScaleAndCropFactor;
-(int)videoRetainedBufferCountHint;
-(long long)preferredVideoStabilizationMode;
-(long long)activeVideoStabilizationMode;
-(id)initWithInputPorts:(id)arg1 output:(id)arg2 ;
-(id)initWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2 ;
-(BOOL)sourcesFromFrontFacingCamera;
-(void)updateAudioChannelsArray;
-(void)setupInternalStorage;
-(void)teardownObservers;
-(void)inputPortFormatDescriptionChanged:(id)arg1 ;
-(void)_updatePropertiesForFormat:(id)arg1 ;
-(void)updateAudioLevelsArray;
-(BOOL)isVideoMirroringSupported;
-(SCD_Struct_AV2)_videoMinFrameDuration;
-(void)_setVideoMinFrameDuration:(SCD_Struct_AV2)arg1 ;
-(SCD_Struct_AV2)_videoMaxFrameDuration;
-(void)_updateCameraIntrinsicMatrixDeliverySupported;
-(long long)_resolveActiveVideoStabilizationMode:(long long)arg1 format:(id)arg2 ;
-(void)_updateActiveVideoStabilizationMode:(long long)arg1 bumpChangeSeed:(BOOL)arg2 ;
-(BOOL)isCameraIntrinsicMatrixDeliverySupported;
-(void)setCameraIntrinsicMatrixDeliveryEnabled:(BOOL)arg1 ;
-(void)_updateMaxScaleAndCropFactorForFormat:(id)arg1 ;
-(void)setupObservers;
-(void)setVideoMirrored:(BOOL)arg1 ;
-(void)_setVideoMirrored:(BOOL)arg1 ;
-(void)setAutomaticallyAdjustsVideoMirroring:(BOOL)arg1 ;
-(BOOL)isVideoMinFrameDurationSupported;
-(BOOL)isVideoMinFrameDurationSet;
-(void)setVideoMinFrameDuration:(SCD_Struct_AV2)arg1 ;
-(BOOL)isVideoMaxFrameDurationSupported;
-(BOOL)isVideoMaxFrameDurationSet;
-(void)setVideoMaxFrameDuration:(SCD_Struct_AV2)arg1 ;
-(void)setVideoScaleAndCropFactor:(double)arg1 ;
-(BOOL)isVideoStabilizationEnabled;
-(BOOL)enablesVideoStabilizationWhenAvailable;
-(BOOL)isCameraIntrinsicMatrixDeliveryEnabled;
-(id)figCaptureConnectionConfigurationForSessionPreset:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)isActive;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)session;
-(void)_setActive:(BOOL)arg1 ;
-(id)mediaType;
-(AVCaptureOutput *)output;
-(BOOL)isVideoOrientationSupported;
-(void)setVideoOrientation:(long long)arg1 ;
-(BOOL)isVideoStabilizationSupported;
-(void)setEnablesVideoStabilizationWhenAvailable:(BOOL)arg1 ;
-(BOOL)isVideoRetainedBufferCountHintSupported;
-(void)setVideoRetainedBufferCountHint:(int)arg1 ;
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
-(void)setPreferredVideoStabilizationMode:(long long)arg1 ;
-(NSArray *)inputPorts;
-(BOOL)isVideoMirrored;
@end
