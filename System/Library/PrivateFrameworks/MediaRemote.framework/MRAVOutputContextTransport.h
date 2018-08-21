/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRExternalDeviceTransport.h>

@protocol OS_dispatch_queue;
@class NSObject, AVOutputContext, _MRDeviceInfoMessageProtobuf, NSError, MRAVInputStream, MRAVOutputStream, NSArray;

@interface MRAVOutputContextTransport : MRExternalDeviceTransport {

	unsigned long long _state;
	NSObject*<OS_dispatch_queue> _serialQueue;
	AVOutputContext* _outputContext;
	_MRDeviceInfoMessageProtobuf* _deviceInfo;
	NSError* _error;
	MRAVInputStream* _inputStream;
	MRAVOutputStream* _outputStream;
	BOOL _useSystemAuthenticationPrompt;
	NSArray* _outputDevices;

}

@property (nonatomic,readonly) NSArray * outputDevices;              //@synthesize outputDevices=_outputDevices - In the implementation block
-(id)hostname;
-(void)dealloc;
-(id)description;
-(id)name;
-(void)reset;
-(long long)port;
-(BOOL)requiresCustomPairing;
-(void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg1 ;
-(BOOL)shouldUseSystemAuthenticationPrompt;
-(void)_unregisterNotificationsForOutputContext:(id)arg1 ;
-(void)_destroyRemoteControlContext;
-(void)_onQueue_initializeOutputContext;
-(void)_onQueue_resetStreams;
-(id)_onQueue_createRemoteControlContextWithID:(id)arg1 ;
-(void)_registerNotificationsForOutputContext:(id)arg1 ;
-(BOOL)getInputStream:(id*)arg1 outputStream:(id*)arg2 ;
-(void)_outputContextDevicesDidChangeNotification:(id)arg1 ;
-(NSArray *)outputDevices;
-(id)initWithOutputDevices:(id)arg1 ;
-(id)error;
-(id)deviceInfo;
@end
