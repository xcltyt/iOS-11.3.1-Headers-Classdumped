/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
@class _PASSqliteDatabase, _DECPredictionStoreReader, NSConditionLock, NSMutableArray;

@interface _DECPredictionStore : NSObject {

	_PASSqliteDatabase* _db;
	_DECPredictionStoreReader* _reader;
	opaque_pthread_mutex_t _queueLock;
	NSConditionLock* _initLock;
	NSMutableArray* _queuedResults;

}
+(id)_initializeDatabase:(id)arg1 newDatabaseCreated:(BOOL*)arg2 simulateCrash:(BOOL)arg3 ;
+(BOOL)_isDatabaseIntegrityViolated:(id)arg1 ;
+(id)_recreateCorruptDatabase:(id)arg1 simulateCrash:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(void)close;
-(id)initWithPath:(id)arg1 ;
-(void)flushQueue;
-(id)dateOfLastPredictionForConsumer:(unsigned long long)arg1 category:(unsigned long long)arg2 ;
-(long long)insertResultForConsumer:(unsigned long long)arg1 category:(unsigned long long)arg2 result:(id)arg3 ;
-(id)resultForConsumer:(unsigned long long)arg1 category:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithPath:(id)arg1 shouldSimulateCrash:(BOOL)arg2 ;
-(void)_initStoreWithPath:(id)arg1 shouldSimulateCrash:(BOOL)arg2 ;
-(id)initWithSqliteDatabase:(id)arg1 ;
-(void)_migrate;
-(void)_blockUntilReady;
-(id)_migrationPlan;
-(id)resultForConsumer:(unsigned long long)arg1 category:(unsigned long long)arg2 ;
-(void)_writeResult:(id)arg1 ;
-(void)queuedInsertResultForConsumer:(unsigned long long)arg1 category:(unsigned long long)arg2 result:(id)arg3 ;
-(id)initWithInMemoryStore;
-(unsigned long long)schemaVersion;
@end
