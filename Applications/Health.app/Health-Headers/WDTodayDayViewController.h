//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WDCurrentValueTableViewCellDelegate.h"
#import "WDFavoriteDisplayTypesControllerObserver.h"

@class HKActivitySummary, HKActivitySummaryQuery, NSDate, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, UIActivityIndicatorView, WDProfile, WDTodayDayNoContentView, _HKLatestSummariesQuery;

@interface WDTodayDayViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, WDFavoriteDisplayTypesControllerObserver, WDCurrentValueTableViewCellDelegate>
{
    _Bool _haveQueriesReturned;
    _Bool _isisNoContentViewLoadedLoaded;
    _Bool _isNoContentViewHidden;
    NSDate *_currentDate;
    id <WDTodayDayViewControllerDelegate> _delegate;
    WDProfile *_profile;
    _HKLatestSummariesQuery *_currentLongRunningQuery;
    HKActivitySummaryQuery *_currentActivitySummaryQuery;
    NSMutableArray *_orderedSectionIDs;
    NSMutableDictionary *_sectionIDsToOrderedDisplayTypes;
    NSMutableDictionary *_displayTypesToSummaryItems;
    HKActivitySummary *_activitySummary;
    UIActivityIndicatorView *_activityIndicator;
    WDTodayDayNoContentView *_noContentView;
    NSLayoutConstraint *_activityIndicatorCenterYConstraint;
}

+ (id)_orderedSectionIDs:(id)arg1;
+ (id)_sectionIDsToOrderedDisplayTypesDictionaryForDisplayTypesToSummaryItemsDictionary:(id)arg1 profile:(id)arg2;
+ (id)_displayTypesToSummaryItemsDictionaryForSummaries:(id)arg1 existingDictionary:(id)arg2 profile:(id)arg3;
+ (id)_sectionTitleForSectionID:(unsigned long long)arg1;
+ (unsigned long long)_sectionIDForDisplayType:(id)arg1 profile:(id)arg2;
+ (id)_displayTypeForTypeCode:(long long)arg1 profile:(id)arg2;
@property(retain, nonatomic) NSLayoutConstraint *activityIndicatorCenterYConstraint; // @synthesize activityIndicatorCenterYConstraint=_activityIndicatorCenterYConstraint;
@property(nonatomic) _Bool isNoContentViewHidden; // @synthesize isNoContentViewHidden=_isNoContentViewHidden;
@property(readonly, nonatomic) _Bool isisNoContentViewLoadedLoaded; // @synthesize isisNoContentViewLoadedLoaded=_isisNoContentViewLoadedLoaded;
@property(retain, nonatomic) WDTodayDayNoContentView *noContentView; // @synthesize noContentView=_noContentView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain) HKActivitySummary *activitySummary; // @synthesize activitySummary=_activitySummary;
@property(retain) NSMutableDictionary *displayTypesToSummaryItems; // @synthesize displayTypesToSummaryItems=_displayTypesToSummaryItems;
@property(retain) NSMutableDictionary *sectionIDsToOrderedDisplayTypes; // @synthesize sectionIDsToOrderedDisplayTypes=_sectionIDsToOrderedDisplayTypes;
@property(retain) NSMutableArray *orderedSectionIDs; // @synthesize orderedSectionIDs=_orderedSectionIDs;
@property(nonatomic) _Bool haveQueriesReturned; // @synthesize haveQueriesReturned=_haveQueriesReturned;
@property(retain, nonatomic) HKActivitySummaryQuery *currentActivitySummaryQuery; // @synthesize currentActivitySummaryQuery=_currentActivitySummaryQuery;
@property(retain, nonatomic) _HKLatestSummariesQuery *currentLongRunningQuery; // @synthesize currentLongRunningQuery=_currentLongRunningQuery;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property(nonatomic) __weak id <WDTodayDayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
- (void).cxx_destruct;
- (void)updateHeight:(double)arg1 forCell:(id)arg2;
- (double)_noContentViewTitleBaselineOffset;
- (double)_activityIndicatorCenterYOffset;
- (_Bool)_isActivitySummaryIndexPath:(id)arg1;
- (id)_indexPathForDisplayType:(id)arg1;
- (void)_reloadDataAnimated:(_Bool)arg1;
- (id)_summaryItemForIndexPath:(id)arg1;
- (void)_updateChartTimeScope;
- (void)_updateScrollability;
- (void)_updateNoContentViewVisibility;
- (void)_updateActivityIndicatorVisibility;
- (void)_loadData;
- (void)_updateIfFavoritesAndDataAvailable;
- (void)favoriteDisplayTypesControllerDidUpdate:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_unitPreferencesDidUpdate:(id)arg1;
- (void)_displayTypeStringsChanged:(id)arg1;
- (_Bool)isNoContentViewLoaded;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithProfile:(id)arg1 date:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

