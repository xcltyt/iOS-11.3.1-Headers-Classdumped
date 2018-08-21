/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSObject, _EARSpeechRecognizer;

@interface _EARSpeechRecognitionAudioBuffer : NSObject {

	shared_ptr<quasar::RecogAudioBufferBase>* _buffer;
	NSObject*<OS_dispatch_queue> _queue;
	_EARSpeechRecognizer* _speechRecognizer;
	BOOL _cancelled;
	BOOL _ended;

}
+(void)initialize;
-(void)_detachFromRecognizer;
-(id)_initWithAudioBuffer:(shared_ptr<quasar::RecogAudioBufferBase>*)arg1 speechRecognizer:(id)arg2 ;
-(void)addAudioSampleData:(id)arg1 ;
-(void)endAudio;
-(void)addAudioSamples:(const short*)arg1 count:(unsigned long long)arg2 ;
-(void)cancelRecognition;
@end
