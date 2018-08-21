/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _TVRCMROriginDelegate;
@interface _TVRCMROriginWrapper : NSObject {

	void* _origin;
	BOOL _isObserving;
	id<_TVRCMROriginDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_TVRCMROriginDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithOrigin:(void*)arg1 ;
-(id<_TVRCMROriginDelegate>)delegate;
-(void)setDelegate:(id<_TVRCMROriginDelegate>)arg1 ;
-(void)dealloc;
-(void)sendCommand:(unsigned)arg1 options:(id)arg2 ;
-(void)endObservingUpdates;
-(void)startObservingUpdates;
-(BOOL)isEqualToOriginRef:(void*)arg1 ;
-(void)getPickedRouteHasVolumeControl:(/*^block*/id)arg1 ;
-(void)_supportedCommandsChanged:(id)arg1 ;
-(void)getSupportedCommands:(/*^block*/id)arg1 ;
-(void)_fetchAndReportSupportedCommands;
@end
