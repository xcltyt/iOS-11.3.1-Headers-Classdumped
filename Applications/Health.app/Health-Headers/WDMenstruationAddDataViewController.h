//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDCategoryAddDataViewController.h"

#import "WDAddDataManualEntrySpinnerDataSource.h"

@class NSString, WDAddDataManualEntrySpinner;

@interface WDMenstruationAddDataViewController : WDCategoryAddDataViewController <WDAddDataManualEntrySpinnerDataSource>
{
    WDAddDataManualEntrySpinner *_isStartOfCycleEntryItem;
}

- (void).cxx_destruct;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)manualEntrySpinner:(id)arg1 titleForRow:(long long)arg2;
- (long long)numberOfRowsInManualEntrySpinner:(id)arg1;
- (_Bool)useSingleStartAndEndDate;
- (id)defaultMetadata;
- (long long)numberOfSections;
- (id)manualEntryItemsForSection:(long long)arg1;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

