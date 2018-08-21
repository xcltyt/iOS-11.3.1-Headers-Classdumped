/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKAnchoredObjectQueryClientInterface.h>

@class NSMutableArray, HKQueryAnchor, NSString;

@interface HKAnchoredObjectQuery : HKQuery <HKAnchoredObjectQueryClientInterface> {

	BOOL _initialHandlerCalled;
	NSMutableArray* _samplesPendingDelivery;
	NSMutableArray* _deletedObjectsPendingDelivery;
	BOOL _includeDeletedObjects;
	/*^block*/id _updateHandler;
	HKQueryAnchor* _anchor;
	unsigned long long _limit;
	double _collectionInterval;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) HKQueryAnchor * anchor;                  //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) BOOL includeDeletedObjects;              //@synthesize includeDeletedObjects=_includeDeletedObjects - In the implementation block
@property (assign,nonatomic) double collectionInterval;               //@synthesize collectionInterval=_collectionInterval - In the implementation block
@property (nonatomic,readonly) id completionHandler;                  //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id updateHandler;                          //@synthesize updateHandler=_updateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
-(id)completionHandler;
-(HKQueryAnchor *)anchor;
-(void)setAnchor:(HKQueryAnchor *)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(void)queue_validate;
-(void)queue_connectToQueryServerWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)queue_deliverError:(id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)setIncludeDeletedObjects:(BOOL)arg1 ;
-(id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(unsigned long long)arg3 limit:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(unsigned long long)limit;
-(BOOL)includeDeletedObjects;
-(double)collectionInterval;
-(void)setCollectionInterval:(double)arg1 ;
-(void)client_deliverSampleObjects:(id)arg1 deletedObjects:(id)arg2 anchor:(id)arg3 clearPendingSamples:(BOOL)arg4 deliverResults:(BOOL)arg5 query:(id)arg6 ;
-(id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(id)arg3 limit:(unsigned long long)arg4 resultsHandler:(/*^block*/id)arg5 ;
-(void)setLimit:(unsigned long long)arg1 ;
@end
