/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NAScheduler;
@class NSMutableArray, MTAlarm;

@interface MTAlarmCache : NSObject {

	BOOL _needsUpdate;
	/*^block*/id _updateBlock;
	NSMutableArray* _orderedAlarms;
	MTAlarm* _sleepAlarm;
	MTAlarm* _nextAlarm;
	id<NAScheduler> _serializer;

}

@property (nonatomic,copy) id updateBlock;                                //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * orderedAlarms;              //@synthesize orderedAlarms=_orderedAlarms - In the implementation block
@property (nonatomic,retain) MTAlarm * sleepAlarm;                        //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
@property (nonatomic,retain) MTAlarm * nextAlarm;                         //@synthesize nextAlarm=_nextAlarm - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                  //@synthesize serializer=_serializer - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                            //@synthesize needsUpdate=_needsUpdate - In the implementation block
-(BOOL)needsUpdate;
-(void)setUpdateBlock:(id)arg1 ;
-(id)updateBlock;
-(id)initWithUpdateBlock:(/*^block*/id)arg1 ;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(id<NAScheduler>)serializer;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(MTAlarm *)sleepAlarm;
-(NSMutableArray *)orderedAlarms;
-(MTAlarm *)nextAlarm;
-(void)setSleepAlarm:(MTAlarm *)arg1 ;
-(void)setOrderedAlarms:(NSMutableArray *)arg1 ;
-(id)initWithUpdateBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(void)markNeedsUpdate;
-(void)getCachedAlarmsWithCompletion:(/*^block*/id)arg1 ;
-(void)setNextAlarm:(MTAlarm *)arg1 ;
@end
