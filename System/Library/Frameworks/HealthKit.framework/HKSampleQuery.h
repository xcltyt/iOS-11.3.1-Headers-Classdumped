/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKSampleQueryClientInterface.h>

@class NSArray, NSMutableArray, NSString;

@interface HKSampleQuery : HKQuery <HKSampleQueryClientInterface> {

	unsigned long long _limit;
	BOOL _includeTimeZones;
	NSArray* _sortDescriptors;
	NSMutableArray* _samplesPendingDelivery;
	/*^block*/id _resultHandler;

}

@property (nonatomic,readonly) id resultHandler;                    //@synthesize resultHandler=_resultHandler - In the implementation block
@property (assign,nonatomic) BOOL includeTimeZones;                 //@synthesize includeTimeZones=_includeTimeZones - In the implementation block
@property (readonly) unsigned long long limit; 
@property (copy,readonly) NSArray * sortDescriptors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
-(NSArray *)sortDescriptors;
-(void)queue_populateConfiguration:(id)arg1 ;
-(void)queue_validate;
-(void)queue_connectToQueryServerWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)queue_deliverError:(id)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(BOOL)_prepareSamplesForDelivery:(id)arg1 error:(id*)arg2 ;
-(void)setIncludeTimeZones:(BOOL)arg1 ;
-(id)resultHandler;
-(unsigned long long)limit;
-(BOOL)includeTimeZones;
-(void)client_deliverSamples:(id)arg1 clearPendingSamples:(BOOL)arg2 isFinalBatch:(BOOL)arg3 queryUUID:(id)arg4 ;
-(id)initWithSampleType:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(/*^block*/id)arg5 ;
@end
