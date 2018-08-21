/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDHealthDatabase, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;
@class NSUUID, NSObject, NSError;

@interface HDExtendedDatabaseTransaction : NSObject {

	BOOL _pendingWorkDidSucceed;
	NSUUID* _transactionIdentifier;
	id<HDHealthDatabase> _healthDatabase;
	NSObject*<OS_dispatch_queue> _transactionQueue;
	NSObject*<OS_dispatch_queue> _dataQueue;
	NSObject*<OS_dispatch_semaphore> _completionSemaphore;
	NSObject*<OS_dispatch_semaphore> _pendingWorkSemaphore;
	NSObject*<OS_dispatch_source> _automaticRollbackTimer;
	/*^block*/id _pendingWork;
	unsigned long long _status;
	NSError* _lastError;
	double _transactionTimeout;
	double _continuationTimeout;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> transactionQueue;                      //@synthesize transactionQueue=_transactionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataQueue;                             //@synthesize dataQueue=_dataQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> completionSemaphore;               //@synthesize completionSemaphore=_completionSemaphore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> pendingWorkSemaphore;              //@synthesize pendingWorkSemaphore=_pendingWorkSemaphore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> automaticRollbackTimer;               //@synthesize automaticRollbackTimer=_automaticRollbackTimer - In the implementation block
@property (nonatomic,copy) id pendingWork;                                                       //@synthesize pendingWork=_pendingWork - In the implementation block
@property (assign,nonatomic) unsigned long long status;                                          //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSError * lastError;                                                //@synthesize lastError=_lastError - In the implementation block
@property (assign,nonatomic) BOOL pendingWorkDidSucceed;                                         //@synthesize pendingWorkDidSucceed=_pendingWorkDidSucceed - In the implementation block
@property (nonatomic,readonly) double transactionTimeout;                                        //@synthesize transactionTimeout=_transactionTimeout - In the implementation block
@property (nonatomic,readonly) double continuationTimeout;                                       //@synthesize continuationTimeout=_continuationTimeout - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * transactionIdentifier;                              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) id<HDHealthDatabase> healthDatabase;                       //@synthesize healthDatabase=_healthDatabase - In the implementation block
-(NSError *)lastError;
-(void)dealloc;
-(void)setStatus:(unsigned long long)arg1 ;
-(unsigned long long)status;
-(id<HDHealthDatabase>)healthDatabase;
-(id)initInDatabase:(id)arg1 options:(unsigned long long)arg2 transactionTimeout:(double)arg3 continuationTimeout:(double)arg4 error:(id*)arg5 ;
-(NSUUID *)transactionIdentifier;
-(BOOL)rollbackDueToError:(id)arg1 errorOut:(id*)arg2 ;
-(void)_enableAutomaticRollbackTimer;
-(void)_transaction_runTransactionWithOptions:(unsigned long long)arg1 ;
-(BOOL)performInTransactionWithErrorOut:(id*)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)commitWithErrorOut:(id*)arg1 ;
-(NSObject*<OS_dispatch_queue>)transactionQueue;
-(void)setTransactionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dataQueue;
-(void)setDataQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)completionSemaphore;
-(void)setCompletionSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)pendingWorkSemaphore;
-(void)setPendingWorkSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_source>)automaticRollbackTimer;
-(void)setAutomaticRollbackTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)pendingWork;
-(void)setPendingWork:(id)arg1 ;
-(void)setLastError:(NSError *)arg1 ;
-(BOOL)pendingWorkDidSucceed;
-(void)setPendingWorkDidSucceed:(BOOL)arg1 ;
-(double)transactionTimeout;
-(double)continuationTimeout;
@end
