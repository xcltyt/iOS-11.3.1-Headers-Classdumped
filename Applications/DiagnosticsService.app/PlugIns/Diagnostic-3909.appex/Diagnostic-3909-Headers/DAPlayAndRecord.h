//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString, NSURL;

@interface DAPlayAndRecord : NSObject
{
    struct OpaqueAUGraph *testCaseGraph;
    struct AURenderCallbackStruct recordCallBack;
    struct AURenderCallbackStruct recordBPCallBack;
    struct AURenderCallbackStruct playCallBack;
    struct OpaqueAudioFileID *testSignalFile;
    struct OpaqueAudioComponentInstance *generatorUnit;
    struct OpaqueAudioComponentInstance *remoteIOUnit;
    struct AudioBufferList *recordBufferList;
    float **receiveSignals;
    float *sourceSignal;
    float previousDeviceVolume;
    _Bool _sendRawData;
    _Bool _sequentialAudioInput;
    _Bool _isCancelled;
    _Bool _volumeNeedsReset;
    float _fileTimeInFrames;
    unsigned int _playFrameCount;
    unsigned int _recordFrameCount;
    NSArray *_results;
    id <DAAudioPlayAndRecordDelegate> _delegate;
    NSNumber *_numInputs;
    struct OpaqueExtAudioFile *_recordedSoundFile;
    long long _inputID;
    long long _outputID;
    NSNumber *_volume;
    NSString *_fileName;
    NSURL *_fileURL;
    NSNumber *_channel;
    id *_error;
}

@property _Bool volumeNeedsReset; // @synthesize volumeNeedsReset=_volumeNeedsReset;
@property _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property id *error; // @synthesize error=_error;
@property _Bool sequentialAudioInput; // @synthesize sequentialAudioInput=_sequentialAudioInput;
@property _Bool sendRawData; // @synthesize sendRawData=_sendRawData;
@property(retain, nonatomic) NSNumber *channel; // @synthesize channel=_channel;
@property(retain) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain) NSNumber *volume; // @synthesize volume=_volume;
@property long long outputID; // @synthesize outputID=_outputID;
@property long long inputID; // @synthesize inputID=_inputID;
@property struct OpaqueExtAudioFile *recordedSoundFile; // @synthesize recordedSoundFile=_recordedSoundFile;
@property(retain) NSNumber *numInputs; // @synthesize numInputs=_numInputs;
@property unsigned int recordFrameCount; // @synthesize recordFrameCount=_recordFrameCount;
@property unsigned int playFrameCount; // @synthesize playFrameCount=_playFrameCount;
@property float fileTimeInFrames; // @synthesize fileTimeInFrames=_fileTimeInFrames;
@property(nonatomic) __weak id <DAAudioPlayAndRecordDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
- (void).cxx_destruct;
- (int)calculateFileDurationForFile:(struct OpaqueAudioFileID *)arg1 error:(id *)arg2;
- (id)makeSignalsDataObjects;
- (int)createAUGraphWithError:(id *)arg1;
- (void)grabRecordedFrameData:(struct AudioBufferList *)arg1 withNumberOfFrames:(unsigned int)arg2;
- (void)grabPlayBackFrameData:(struct AudioBufferList *)arg1 withNumberOfFrames:(unsigned int)arg2;
- (void)dealloc;
- (_Bool)setDeviceVolume:(float)arg1;
- (void)resetToPreviousVolume;
- (void)cancel;
- (void)endAudioTestCase;
- (int)startAudioTestCase;
- (id)initWithFileURL:(id)arg1 fileName:(id)arg2 numberOfInputs:(id)arg3 inputID:(long long)arg4 outputID:(long long)arg5 volume:(id)arg6 channel:(id)arg7 sendRawData:(_Bool)arg8 delegate:(id)arg9 sequentialAudioInput:(_Bool)arg10 error:(id *)arg11;

@end

