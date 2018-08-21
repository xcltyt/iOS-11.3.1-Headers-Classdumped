/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CSRemoteControlClientDelegate;
@class NSObject;

@interface CSRemoteControlClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<CSRemoteControlClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSRemoteControlClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)isConnected;
-(id)init;
-(id<CSRemoteControlClientDelegate>)delegate;
-(void)setDelegate:(id<CSRemoteControlClientDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)waitingForConnection:(double)arg1 error:(id*)arg2 ;
@end
