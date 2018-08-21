/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue, NetDiagnosticsShimDelegate;
@class NSObject, NSString;

@interface NetDiagnosticsShim : NSObject {

	NSObject*<OS_xpc_object> _netDiagServiceConnection;
	NSObject*<OS_xpc_object> _netDiagNotificationListener;
	NSObject*<OS_xpc_object> _netDiagNotificationConnection;
	NSObject*<OS_dispatch_queue> _netDiagConnQueue;
	NSObject*<OS_dispatch_queue> _netDiagMsgQueue;
	id<NetDiagnosticsShimDelegate> _delegate;
	NSString* _taskName;

}

@property (nonatomic,retain) NSString * taskName;                                  //@synthesize taskName=_taskName - In the implementation block
@property (nonatomic,retain) id<NetDiagnosticsShimDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NetDiagnosticsShimDelegate>)delegate;
-(void)setDelegate:(id<NetDiagnosticsShimDelegate>)arg1 ;
-(void)dealloc;
-(void)setTaskName:(NSString *)arg1 ;
-(NSString *)taskName;
-(void)invalidateConnections;
-(id)initWithTaskName:(id)arg1 queue:(id)arg2 ;
-(BOOL)startNetDiagnosticTaskWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)stopNetDiagnosticTaskWithReply:(/*^block*/id)arg1 ;
-(BOOL)netDiagnosticTaskStatusWithReply:(/*^block*/id)arg1 ;
-(id)_connectionForServiceNamed:(const char*)arg1 queue:(id)arg2 connectionInvalidHandler:(/*^block*/id)arg3 ;
-(id)createNotificationListener;
-(void)sendNotificationListener;
-(BOOL)_primeDirectoryPath:(id)arg1 ;
-(void)connectToNetDiagnosticsd;
@end
