//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKGraphSeriesChartData.h"

@class HKActivitySummary, NSString;

@interface WDInteractiveChartActivityData : NSObject <HKGraphSeriesChartData>
{
    HKActivitySummary *_activitySummaryData;
    long long _activityValue;
}

@property(nonatomic) long long activityValue; // @synthesize activityValue=_activityValue;
@property(retain, nonatomic) HKActivitySummary *activitySummaryData; // @synthesize activitySummaryData=_activitySummaryData;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool activityValueGoalMet;
@property(readonly, nonatomic) _Bool hasActivityGoal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

