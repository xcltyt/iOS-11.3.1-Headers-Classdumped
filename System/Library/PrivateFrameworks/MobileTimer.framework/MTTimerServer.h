/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTTimerObserver.h>
#import <libobjc.A.dylib/MTTimerServer.h>

@protocol MTTimerServer <NSObject>
@required
-(void)checkIn;
-(void)getTimersWithCompletion:(/*^block*/id)arg1;
-(void)addTimer:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)updateTimer:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)removeTimer:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)dismissTimerWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)repeatTimerWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>

@protocol NAScheduler;
@class MTTimerStorage, MTXPCConnectionListenerProvider, NSString;

@interface MTTimerServer : NSObject <MTTimerObserver, MTTimerServer, MTAgentDiagnosticDelegate> {

	BOOL _systemReady;
	MTTimerStorage* _storage;
	MTXPCConnectionListenerProvider* _connectionListenerProvider;
	id<NAScheduler> _serializer;

}

@property (nonatomic,readonly) MTTimerStorage * storage;                                                  //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) MTXPCConnectionListenerProvider * connectionListenerProvider;              //@synthesize connectionListenerProvider=_connectionListenerProvider - In the implementation block
@property (getter=isSystemReady,nonatomic,readonly) BOOL systemReady;                                     //@synthesize systemReady=_systemReady - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                                                  //@synthesize serializer=_serializer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)checkIn;
-(id)initWithStorage:(id)arg1 ;
-(void)startListening;
-(id<NAScheduler>)serializer;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)source:(id)arg1 didAddTimers:(id)arg2 ;
-(void)source:(id)arg1 didUpdateTimers:(id)arg2 ;
-(void)source:(id)arg1 didRemoveTimers:(id)arg2 ;
-(void)source:(id)arg1 didDismissTimer:(id)arg2 ;
-(void)source:(id)arg1 didFireTimer:(id)arg2 ;
-(void)nextTimerDidChange:(id)arg1 ;
-(void)printDiagnostics;
-(void)getTimersWithCompletion:(/*^block*/id)arg1 ;
-(void)addTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)dismissTimerWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)repeatTimerWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)handleSystemReady;
-(id)initWithStorage:(id)arg1 connectionListenerProvider:(id)arg2 ;
-(BOOL)_isSystemReady;
-(id)_systemNotReadyError;
-(MTXPCConnectionListenerProvider *)connectionListenerProvider;
-(BOOL)isSystemReady;
-(MTTimerStorage *)storage;
-(void)stopListening;
@end
