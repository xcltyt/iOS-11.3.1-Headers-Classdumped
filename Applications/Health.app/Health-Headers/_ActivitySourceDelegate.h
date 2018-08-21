//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKDateRangeDataSourceDelegate.h"
#import "WDActivitySummaryDataProviderObserver.h"

@class NSCalendar, NSString, WDPortraitActivitySummaryChartDataProvider, WDProfile;

@interface _ActivitySourceDelegate : NSObject <HKDateRangeDataSourceDelegate, WDActivitySummaryDataProviderObserver>
{
    WDPortraitActivitySummaryChartDataProvider *_dataProvider;
    long long _activityValue;
    WDProfile *_profile;
    id <HKDateRangeDataUpdateDelegate> _updateDelegate;
    NSCalendar *_currentCalendar;
}

@property(readonly, nonatomic) NSCalendar *currentCalendar; // @synthesize currentCalendar=_currentCalendar;
@property(retain, nonatomic) id <HKDateRangeDataUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
@property(readonly, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) long long activityValue; // @synthesize activityValue=_activityValue;
@property(readonly, nonatomic) WDPortraitActivitySummaryChartDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (void).cxx_destruct;
- (id)_healthChartPointForQuantity:(id)arg1 quantityType:(id)arg2 activityValue:(long long)arg3 referenceDisplayType:(id)arg4 activitySummaryData:(id)arg5 preferredUnit:(id)arg6 date:(id)arg7 createBarValue:(_Bool)arg8;
- (id)_quantityForActivityValue:(long long)arg1 summary:(id)arg2;
- (id)_chartPointForActivityValue:(long long)arg1 summary:(id)arg2 timeScope:(long long)arg3;
- (void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)arg1;
- (id)dataForDateRange:(id)arg1 timeScope:(long long)arg2;
- (double)_centerOffsetForTimeScope:(long long)arg1 startDate:(id)arg2 calendar:(id)arg3;
- (id)initWithDataProvider:(id)arg1 activityValue:(long long)arg2 profile:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

