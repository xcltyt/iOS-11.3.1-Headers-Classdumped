//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WDDataListViewControllerDataProvider.h"

@class HKDisplayType, HKUnitPreferenceController, NSMutableArray, NSMutableSet, NSPredicate, NSString, WDProfile;

@interface WDSampleListStatisticsDataProvider : NSObject <WDDataListViewControllerDataProvider>
{
    _Bool _hasCompleteDataSet;
    NSPredicate *defaultQueryPredicate;
    NSMutableArray *_data;
    NSMutableArray *_activeDataQueries;
    NSMutableSet *_activeQueryTypes;
    HKDisplayType *_displayType;
    WDProfile *_profile;
    HKUnitPreferenceController *_unitController;
}

@property(readonly, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(readonly, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) NSMutableSet *activeQueryTypes; // @synthesize activeQueryTypes=_activeQueryTypes;
@property(retain, nonatomic) NSMutableArray *activeDataQueries; // @synthesize activeDataQueries=_activeDataQueries;
@property(retain) NSMutableArray *data; // @synthesize data=_data;
@property _Bool hasCompleteDataSet; // @synthesize hasCompleteDataSet=_hasCompleteDataSet;
@property(retain, nonatomic) NSPredicate *defaultQueryPredicate; // @synthesize defaultQueryPredicate;
- (void).cxx_destruct;
- (id)_predicateForTheLastMonth;
- (void)_startCompleteDataStatisticsCollectionQueryForSampleType:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;
- (void)_startPartialDataStatisticsCollectionQueryForSampleType:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;
- (void)dataListViewControllerIsNearEndOfScreen:(id)arg1;
- (id)dataListViewController:(id)arg1 viewControllerForItemAtIndexPath:(id)arg2;
- (void)deleteObjectsAtIndexPath:(id)arg1 healthStore:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dataListViewControllerDidDeleteAllData:(id)arg1;
- (void)dataListViewController:(id)arg1 didRemoveObjectAtIndex:(unsigned long long)arg2 forSection:(unsigned long long)arg3 sectionRemoved:(_Bool *)arg4;
- (void)dataListViewControllerShouldStopCollectingData:(id)arg1;
- (unsigned long long)_statisticsOptionsForSampleType:(id)arg1;
- (void)dataListViewController:(id)arg1 shouldStartCollectingDataWithUpdateHandler:(CDUnknownBlockType)arg2;
- (void)_handleResultsCollection:(id)arg1 fromQuery:(id)arg2 sampleType:(id)arg3 areComplete:(_Bool)arg4 withError:(id)arg5 updateHandler:(CDUnknownBlockType)arg6;
- (id)customCellForObject:(id)arg1 viewController:(id)arg2 tableView:(id)arg3;
- (double)customEstimatedCellHeight;
- (double)customCellHeight;
- (_Bool)textAdjustsFontSizeToFitWidth:(id)arg1;
- (id)dataListViewController:(id)arg1 secondaryTextForObject:(id)arg2;
- (id)dataListViewController:(id)arg1 textForObject:(id)arg2;
- (id)dataListViewController:(id)arg1 objectAtIndex:(unsigned long long)arg2 forSection:(unsigned long long)arg3;
- (unsigned long long)dataListViewController:(id)arg1 numberOfObjectsForSection:(unsigned long long)arg2;
- (id)dataListViewController:(id)arg1 titleForSection:(unsigned long long)arg2;
- (unsigned long long)numberOfSectionsForDataListViewController:(id)arg1;
- (long long)cellStyleForDataListViewController:(id)arg1;
- (id)_statisticsAtIndexPath:(id)arg1;
- (id)sampleTypes;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

