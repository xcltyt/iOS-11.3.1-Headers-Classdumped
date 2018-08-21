/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSTInfo, TSTCellRegion, TSUWidthLimitedQueue, NSMutableArray;

@interface TSTConcurrentCellIterator : NSObject {

	TSTInfo* _tableInfo;
	TSTCellRegion* _region;
	TSTCellRegion* _forcingRegion;
	TSUWidthLimitedQueue* _queue;
	NSMutableArray* _arrayOfArraysOfRowRocks;
	unsigned long long _flags;
	unsigned long long _searchFlags;

}

@property (nonatomic,retain) TSTInfo * tableInfo;                                   //@synthesize tableInfo=_tableInfo - In the implementation block
@property (nonatomic,retain) TSTCellRegion * region;                                //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) TSTCellRegion * forcingRegion;                         //@synthesize forcingRegion=_forcingRegion - In the implementation block
@property (assign,nonatomic,__weak) TSUWidthLimitedQueue * queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * arrayOfArraysOfRowRocks;              //@synthesize arrayOfArraysOfRowRocks=_arrayOfArraysOfRowRocks - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                              //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned long long searchFlags;                        //@synthesize searchFlags=_searchFlags - In the implementation block
+(id)p_sharedQueue;
-(id)initWithTableInfo:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 searchFlags:(unsigned long long)arg4 ;
-(void)enumerateConcurrentlyUsingRowBeginBlock:(/*^block*/id)arg1 concurrentBlock:(/*^block*/id)arg2 finalBlock:(/*^block*/id)arg3 ;
-(id)initWithTableInfo:(id)arg1 flags:(unsigned long long)arg2 searchFlags:(unsigned long long)arg3 ;
-(id)initWithTableInfo:(id)arg1 region:(id)arg2 forcingRegion:(id)arg3 flags:(unsigned long long)arg4 searchFlags:(unsigned long long)arg5 ;
-(id)p_subRegionsOfRegion:(id)arg1 ;
-(void)waitForConcurrentEnumerationToComplete;
-(id)collectRowRocks;
-(TSTCellRegion *)forcingRegion;
-(void)setForcingRegion:(TSTCellRegion *)arg1 ;
-(NSMutableArray *)arrayOfArraysOfRowRocks;
-(void)setArrayOfArraysOfRowRocks:(NSMutableArray *)arg1 ;
-(unsigned long long)searchFlags;
-(void)setSearchFlags:(unsigned long long)arg1 ;
-(unsigned long long)flags;
-(void)setRegion:(TSTCellRegion *)arg1 ;
-(TSTCellRegion *)region;
-(TSUWidthLimitedQueue *)queue;
-(void)setQueue:(TSUWidthLimitedQueue *)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(TSTInfo *)tableInfo;
-(void)setTableInfo:(TSTInfo *)arg1 ;
@end
