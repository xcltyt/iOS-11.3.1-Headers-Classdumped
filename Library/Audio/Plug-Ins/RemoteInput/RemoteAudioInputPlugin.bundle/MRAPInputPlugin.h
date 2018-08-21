/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:31:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /Library/Audio/Plug-Ins/RemoteInput/RemoteAudioInputPlugin.bundle/RemoteAudioInputPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteAudioInputPlugin/RemoteAudioInputPlugin-Structs.h>
#import <libobjc.A.dylib/AVAudioRemoteInputPlugin.h>
#import <RemoteAudioInputPlugin/MRAPRecording.h>

@protocol OS_dispatch_queue, AVAudioRemoteInputPluginDelegate;
@class NSArray, NSObject, NSString;

@interface MRAPInputPlugin : NSObject <AVAudioRemoteInputPlugin, MRAPRecording> {

	NSArray* _inputDevices;
	NSObject*<OS_dispatch_queue> _serialQueue;
	id<AVAudioRemoteInputPluginDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<AVAudioRemoteInputPluginDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * devices; 
-(void)recordingEndpoint:(id)arg1 inputDeviceWithID:(unsigned)arg2 receivedAudioBuffer:(void*)arg3 withTime:(SCD_Struct_MR0)arg4 gain:(float)arg5 ;
-(void)recordingEndpoint:(id)arg1 inputDeviceDisconnectedWithID:(unsigned)arg2 ;
-(void)recordingEndpoint:(id)arg1 inputDeviceConnectedWithID:(unsigned)arg2 ;
-(void)_reloadInputDevices;
-(id)_inputDeviceWithIdentifier:(unsigned)arg1 ;
-(id)initWithPluginDelegate:(id)arg1 ;
-(void)invalidate;
-(id<AVAudioRemoteInputPluginDelegate>)delegate;
-(void)dealloc;
-(NSArray *)devices;
@end
