/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>
#import <libobjc.A.dylib/HDActivityCacheManagerObserver.h>

@class NSDateComponents, NSCalendar, HKActivityCache, HDActivityCacheManager, NSString;

@interface HDCurrentActivityCacheQueryServer : HDQueryServer <HDActivityCacheManagerObserver> {

	double _createdTime;
	double _firstResultsTime;
	NSDateComponents* _statisticsIntervalComponents;
	NSCalendar* _calendar;
	HKActivityCache* _lastActivityCache;
	HDActivityCacheManager* _activityCacheManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_queue_start;
-(BOOL)_shouldListenForUpdates;
-(void)_queue_stop;
-(void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2 ;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6 activityCacheManager:(id)arg7 ;
@end
