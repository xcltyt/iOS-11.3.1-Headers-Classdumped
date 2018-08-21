//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKTableViewController.h"

#import "HKSwitchTableViewCellDelegate.h"

@class HKCharacteristicType, HKDisplayType, HKHealthStore, HKTitledIconHeaderView, NSArray, NSDictionary, WDDisplayTypeDescriptionTableFooterView, WDProfile;

@interface WDProfileSharingTableViewController : HKTableViewController <HKSwitchTableViewCellDelegate>
{
    WDProfile *_profile;
    HKHealthStore *_healthStore;
    HKCharacteristicType *_characteristicType;
    NSArray *_characteristicSharingSources;
    NSDictionary *_characteristicAuthorizationRecordsBySource;
    HKTitledIconHeaderView *_headerView;
    WDDisplayTypeDescriptionTableFooterView *_footerView;
    HKDisplayType *_displayType;
}

- (void).cxx_destruct;
- (void)switchCellValueChanged:(id)arg1 value:(_Bool)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)_sortedSourcesFromAuthorizationRecords:(id)arg1;
- (id)_getAuthorizationRecordsForType:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_adjustFooterHeight;
- (void)_adjustHeaderHeight;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithProfile:(id)arg1 characteristicType:(id)arg2;

@end

