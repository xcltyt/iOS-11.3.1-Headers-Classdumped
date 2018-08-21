//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKTableViewController.h"

#import "HKCurrentTimeViewDelegate.h"
#import "SKStoreProductViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WDAppSwooshTableViewCellDelegate.h"
#import "WDInteractiveChartViewObserver.h"
#import "WDSelectedTimeScopeObserver.h"
#import "WDSourceOrderObserver.h"
#import "WDTodayMonthViewControllerDelegate.h"
#import "WDUserActivityResponder.h"

@class HKDisplayCategory, HKDisplayType, HKNavigationController, NSDate, NSMutableArray, NSSet, NSString, UIFont, UITapGestureRecognizer, WDDashboardChartItem, WDInteractiveChartViewController, WDProfile, WDTimeScopeControl, _UINavigationControllerPalette;

@interface WDDisplayTypeDetailViewController : HKTableViewController <HKCurrentTimeViewDelegate, SKStoreProductViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, WDAppSwooshTableViewCellDelegate, WDInteractiveChartViewObserver, WDSourceOrderObserver, WDSelectedTimeScopeObserver, WDTodayMonthViewControllerDelegate, WDUserActivityResponder>
{
    HKDisplayType *_displayType;
    HKDisplayCategory *_displayCategory;
    HKNavigationController *_monthNavController;
    NSDate *_selectedDate;
    WDDashboardChartItem *_chartItem;
    _UINavigationControllerPalette *_palette;
    WDTimeScopeControl *_timeSpanControl;
    NSSet *_availableUnits;
    _Bool _inLandscapeMode;
    WDProfile *_profile;
    NSMutableArray *_sections;
    UIFont *_bodyFont;
    WDInteractiveChartViewController *_interactiveChartViewController;
    UITapGestureRecognizer *_deselectionTapRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *deselectionTapRecognizer; // @synthesize deselectionTapRecognizer=_deselectionTapRecognizer;
@property(retain, nonatomic) WDInteractiveChartViewController *interactiveChartViewController; // @synthesize interactiveChartViewController=_interactiveChartViewController;
@property(retain, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (void)didTapBackButtonForMonthViewController:(id)arg1;
- (void)monthViewController:(id)arg1 didSelectDate:(id)arg2;
- (void)currentTimeViewDidTapOnNextTimeButton:(id)arg1;
- (void)currentTimeViewDidTapOnPreviousTimeButton:(id)arg1;
- (void)currentTimeViewDidTapOnDateSelector:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)timeScopeControllerDidUpdateSelectedTimeScope:(id)arg1;
- (void)appsCell:(id)arg1 showStorePageWithStoreID:(id)arg2;
- (void)_displayAppWithStoreID:(id)arg1;
- (_Bool)_handleTimeScopeActivity:(id)arg1;
- (_Bool)applyActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (void)_updateActivityForTimeScope:(long long)arg1;
- (void)_updateActivityForViewDidAppear;
- (void)_showAddDataVC:(id)arg1;
- (void)_changeTimeScope:(long long)arg1;
- (void)_timeFrameForChartsChanged:(id)arg1;
- (void)sourceOrderUpdatedWithOrder:(id)arg1 dataType:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_selectedUnitCellText;
- (_Bool)_shouldShowAppsRow;
- (_Bool)_shouldShowUnitsRow;
- (_Bool)_canSelectUnitsRow;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_detachPaletteIfNecessary;
- (void)_attachPaletteIfNecessary;
- (void)calculateSections;
- (void)addSectionWithItems:(id)arg1;
- (void)addSectionWithItem:(id)arg1;
- (void)viewDidLoad;
- (void)_didBecomeActive:(id)arg1;
- (void)_showAppsRowIfNecessary:(id)arg1;
- (void)updateAppsSectionIfNecessary;
- (long long)findAppsSectionLocation;
- (void)_displayTypeStringsChanged:(id)arg1;
- (void)_loadStoreData:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_unitPreferencesDidUpdate:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (void)_configureCell:(id)arg1 forTableView:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_setupObservers;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithDisplayType:(id)arg1 displayCategory:(id)arg2 profile:(id)arg3 displayDate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

