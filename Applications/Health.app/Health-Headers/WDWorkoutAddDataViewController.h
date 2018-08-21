//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDAddDataViewController.h"

#import "WDAddDataManualEntryItemDelegate.h"
#import "WDAddDataManualEntrySpinnerDataSource.h"

@class HKQuantityType, NSArray, NSString, WDAddDataManualEntryItem, WDAddDataManualEntrySpinner;

@interface WDWorkoutAddDataViewController : WDAddDataViewController <WDAddDataManualEntrySpinnerDataSource, WDAddDataManualEntryItemDelegate>
{
    NSArray *_workoutActivityTypePairs;
    HKQuantityType *_distanceType;
    NSArray *_sectionsWithDistance;
    NSArray *_sectionsWithoutDistance;
    WDAddDataManualEntrySpinner *_activityTypeEntryItem;
    WDAddDataManualEntryItem *_distanceEntryItem;
    WDAddDataManualEntryItem *_activeEnergyEntryItem;
    WDAddDataManualEntryItem *_dateRangeEntryItem;
}

- (void).cxx_destruct;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (id)manualEntrySpinner:(id)arg1 titleForRow:(long long)arg2;
- (long long)numberOfRowsInManualEntrySpinner:(id)arg1;
- (void)_updateCurrentDistanceTypeWithActivityType:(unsigned long long)arg1;
- (id)_sectionsForDistanceType:(id)arg1;
- (unsigned long long)_selectedActivityType;
- (unsigned long long)_activityTypeForIndex:(long long)arg1;
- (id)_activityTypeDescriptionForIndex:(long long)arg1;
- (long long)_indexOfActivityType:(unsigned long long)arg1;
- (id)_generateSortedActivityTypes;
- (id)manualEntryItemsForSection:(long long)arg1;
- (long long)numberOfSections;
- (void)saveHKObjectWithCompletion:(CDUnknownBlockType)arg1;
- (void)validateDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)_activeEnergyDisplayName;
- (id)_distanceDisplayName;
- (id)_unitForDistanceType:(id)arg1;
- (id)_displayTypeForDistanceType:(id)arg1;
- (id)_displayTypeForIdentifier:(long long)arg1;
- (id)_quantityFromEntryItem:(id)arg1 unit:(id)arg2;
- (id)_totalEnergyBurned;
- (id)_totalDistance;
- (void)unitPreferencesDidChange:(id)arg1;
- (void)dealloc;
- (void)_createEntryItems;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
