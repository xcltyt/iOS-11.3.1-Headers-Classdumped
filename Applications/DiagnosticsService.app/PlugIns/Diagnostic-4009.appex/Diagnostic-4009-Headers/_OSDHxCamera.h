//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, OSDCaptureDevice, OSDCaptureStream;

@interface _OSDHxCamera : NSObject
{
    _Bool _isActive;
    _Bool _isStreaming;
    int __frameCounter;
    CALayer *_previewLayer;
    unsigned long long _source;
    OSDCaptureDevice *_captureDevice;
    OSDCaptureStream *_captureStream;
    CDUnknownBlockType _frameHandler;
    unsigned long long _streamingOptions;
    struct _CAImageQueue *__imageQueue;
}

@property(nonatomic) struct _CAImageQueue *_imageQueue; // @synthesize _imageQueue=__imageQueue;
@property int _frameCounter; // @synthesize _frameCounter=__frameCounter;
@property _Bool isStreaming; // @synthesize isStreaming=_isStreaming;
@property _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) unsigned long long streamingOptions; // @synthesize streamingOptions=_streamingOptions;
@property(copy, nonatomic) CDUnknownBlockType frameHandler; // @synthesize frameHandler=_frameHandler;
@property(retain, nonatomic) OSDCaptureStream *captureStream; // @synthesize captureStream=_captureStream;
@property(retain, nonatomic) OSDCaptureDevice *captureDevice; // @synthesize captureDevice=_captureDevice;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(retain, nonatomic) CALayer *previewLayer; // @synthesize previewLayer=_previewLayer;
- (void).cxx_destruct;
- (_Bool)_enableMotionDataMetadata:(_Bool)arg1 error:(id *)arg2;
- (id)_getStreamErrorFor:(struct __CFString *)arg1 error:(id *)arg2;
- (void)_showFrameOnPreviewLayer:(struct __CVBuffer *)arg1;
- (_Bool)_startStreaming:(id *)arg1;
- (_Bool)setFrameRate:(id)arg1 error:(id *)arg2;
- (_Bool)stopStreaming:(id *)arg1;
- (_Bool)startStreamingWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)frameCount;
- (id)name:(id *)arg1;
- (id)ispVersion;
- (void)doneWithDeviceAndStreams;
- (_Bool)getDeviceAndStreams:(id *)arg1;
- (id)initWithCaptureDevice:(id)arg1 cameraSource:(unsigned long long)arg2 error:(id *)arg3;

@end

