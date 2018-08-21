/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDate;

@interface _QPMetrics : NSObject {

	int _resultEngaged;
	int _queryEngaged;
	NSString* _query;
	NSArray* _ranks;
	NSArray* _queryEvents;
	NSDate* _timestamp;

}

@property (nonatomic,retain) NSString * query;                   //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSArray * ranks;                    //@synthesize ranks=_ranks - In the implementation block
@property (nonatomic,retain) NSArray * queryEvents;              //@synthesize queryEvents=_queryEvents - In the implementation block
@property (assign,nonatomic) int resultEngaged;                  //@synthesize resultEngaged=_resultEngaged - In the implementation block
@property (assign,nonatomic) int queryEngaged;                   //@synthesize queryEngaged=_queryEngaged - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
+(id)buildQpMetricsWithPrefix:(id)arg1 andQueryEngaged:(BOOL)arg2 andResultEngaged:(BOOL)arg3 ;
-(void)setQuery:(NSString *)arg1 ;
-(NSArray *)ranks;
-(NSDate *)timestamp;
-(NSString *)query;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setResultEngaged:(int)arg1 ;
-(int)resultEngaged;
-(void)setRanks:(NSArray *)arg1 ;
-(void)setQueryEvents:(NSArray *)arg1 ;
-(void)setQueryEngaged:(int)arg1 ;
-(void)storeToCoreDuetDb;
-(NSArray *)queryEvents;
-(int)queryEngaged;
@end
