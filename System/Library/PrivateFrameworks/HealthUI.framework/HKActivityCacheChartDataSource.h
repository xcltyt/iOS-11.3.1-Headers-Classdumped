/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class NSCalendar, HKUnitPreferenceController;

@interface HKActivityCacheChartDataSource : HKHealthQueryChartCacheDataSource {

	NSCalendar* _gregorianCalendar;
	NSCalendar* _gregorianNonUTCCalendar;
	HKUnitPreferenceController* _unitController;

}
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_dateComponentsForDate:(id)arg1 ;
-(id)_cachePredicateForStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_workoutsPredicateForStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)_handleActivityCaches:(id)arg1 workouts:(id)arg2 blockStart:(id)arg3 blockEnd:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_unitForDisplayType;
-(id)initWithUnitController:(id)arg1 healthStore:(id)arg2 ;
@end
